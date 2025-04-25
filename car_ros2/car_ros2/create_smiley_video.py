import cv2
import numpy as np
import pickle

diffs = pickle.load(open("fig5_diffs.pkl", "rb"))


def value_to_color(value):
    """
    Converts a value between 0 and 1 to an RGB color from red to green.
    """
    red = int(255 * (1 - value))
    green = int(255 * value)
    return (0, green, red)  # BGR format for OpenCV

def draw_smiley(frame_size, color, value):
    """
    Draws a smiley face on a blank frame with the given color and expression based on value.
    """
    frame = np.ones((frame_size, frame_size, 3), dtype=np.uint8) * 255  # white background
    center = (frame_size // 2, frame_size // 2)
    radius = frame_size // 3

    # Face
    cv2.circle(frame, center, radius, color, -1)

    # Eyes
    eye_radius = radius // 8
    eye_y = center[1] - radius // 3
    eye_x_offset = radius // 2
    cv2.circle(frame, (center[0] - eye_x_offset, eye_y), eye_radius, (0, 0, 0), -1)
    cv2.circle(frame, (center[0] + eye_x_offset, eye_y), eye_radius, (0, 0, 0), -1)

    # Smile / Frown
    smile_radius_x = radius // 2
    smile_radius_y = abs(int(2 * (radius // 3) * (value - 0.5)))
    mouth_center = (center[0], center[1] + radius // 3)

    # Interpolate between sad (180–360) and happy (0–180)
    # value=0 -> 180–360 (sad), value=1 -> 0–180 (happy)
    start_angle = 0#int(180 * (1 - value))
    end_angle = 180#int(180 + 180 * (1 - value))
    if value < 0.5 :
        # Draw sad mouth
        start_angle = 180
        end_angle = 360
        
    if value == 0.5:
        # Draw flat mouth
        pt1 = (center[0] - smile_radius_x, mouth_center[1])
        pt2 = (center[0] + smile_radius_x, mouth_center[1])
        cv2.line(frame, pt1, pt2, (0, 0, 0), thickness=4)
    else:
        cv2.ellipse(frame, mouth_center, (smile_radius_x, smile_radius_y), 0, start_angle, end_angle, (0, 0, 0), thickness=4)

    return frame


def create_smiley_video(values, filename="smiley_video.mp4", fps=5, frame_size=256):
    """
    Creates a video of a smiley changing color based on the input values, saved in MP4 format.
    """
    # Use 'mp4v' codec for .mp4 output
    fourcc = cv2.VideoWriter_fourcc(*'mp4v')
    out = cv2.VideoWriter(filename, fourcc, fps, (frame_size, frame_size))

    for i, val in enumerate(values):
        color = value_to_color(val)
        frame = draw_smiley(frame_size, color, val)
        out.write(frame)

    out.release()
    print(f"Video saved to {filename}")

# Example usage
if __name__ == "__main__":
    # print(diffs[35])
    diffs[0] = diffs[1]
    diffs[35] = 1.85
    values = (diffs - 0.8)/10. + 0.55
    create_smiley_video(values, "smiley_ego.mp4")
    values = -(diffs - 0.8)/10. + 0.55
    create_smiley_video(values, "smiley_opp.mp4")