#ifndef RC_STATES_HPP
#define RC_STATES_HPP

enum class CTState
{     
    CT1_PWR_ON = 1,
    CT2_INITIALIZED = 2,
    CT3_ACT_TEST = 3,
    CT4_CRANKREADY = 4,
    CT5_CRANKING = 5,
    CT6_RACEREADY = 6,
    CT7_INIT_DRIVING = 7,
    CT8_CAUTION = 8,
    CT9_NOM_RACE = 9,
    CT10_COORD_STOP = 10,
    CT11_CNTRL_SHUTDOWN = 11,
    CT12_EMRG_SHUTDOWN = 12,
    CT255_DEFAULT = 255
}; // enum class CtState

enum class SysState
{
    SS1_PWR_ON = 1,
    SS2_SUBSYS_CON = 2,
    SS3_ACT_TESTING = 3,
    SS4_ACT_TEST_DONE = 4,
    SS5_CRANKREADY = 5,
    SS6_PRECRANK_CHECK = 6,
    SS7_CRANKING = 7,
    SS8_ENG_RUNNING = 8,
    SS9_DRIVING = 9,
    SS10_SHUT_ENG = 10,
    SS11_PWR_OFF = 11,
    SS13_CRANK_CHECK_INIT = 13,
    SS19_STANDBY_MODE = 19,
    SS255_DEFAULT = 255
}; // enum class SysState

enum class TrackFlag
{
    TF1_RED = 1,
    TF2_ORANGE = 2,
    TF3_YELLOW = 3,
    TF4_GREEN = 4,
    TF8_WAVING_GREEN = 8,
    TF_DEFAULT = 255
}; // enum class TrackFlag

enum class VehicleFlag
{
    VF1_NULL = 1,
    VF2_BLACK = 2,
    VF4_CHECK = 4,
    VF5_DEFENDER = 5,
    VF7_ATTACKER = 7,
    VF8_PURPLE = 8
}; // enum class VehicleFlag

enum class LapState
{
  LS0_IN_BOX = 0,
  LS1_LEAVE_BOX = 1,
  LS2_PIT_EXIT = 2,
  LS3_ON_RACELINE = 3,
  LS4_BLACK_SLOWDOWN = 4,
  LS5_BLACK_SWITCH_TO_PIT = 5,
  LS6_PIT_ENTRY = 6,
  LS7_TERMINATE = 7,
  LS255_DEFAULT = 255
}; // enum class LapState

enum class TrackLocation
{
  LOC_START_FINISH = 0,
  LOC_PIT_ENTRY_EXIT = 1,
  LOC_PASSING_ZONE = 2,
  LOC_PIT_SPEEDUP = 10,
  LOC_PIT_SLOWDOWN = 11,
  LOC_DEFAULT = 255
}; // enum class TrackLocation

CTState int2ct(int ct_state)
{
  switch (ct_state) {
  case 1:
    return CTState::CT1_PWR_ON;
  case 2:
    return CTState::CT2_INITIALIZED;
  case 3:
    return CTState::CT3_ACT_TEST;
  case 4:
    return CTState::CT4_CRANKREADY;
  case 5:
    return CTState::CT5_CRANKING;
  case 6:
    return CTState::CT6_RACEREADY;
  case 7:
    return CTState::CT7_INIT_DRIVING;
  case 8:
    return CTState::CT8_CAUTION;
  case 9:
    return CTState::CT9_NOM_RACE;
  case 10:
    return CTState::CT10_COORD_STOP;
  case 11:
    return CTState::CT11_CNTRL_SHUTDOWN;
  case 12:
    return CTState::CT12_EMRG_SHUTDOWN;
  case 255:
  default:
    return CTState::CT255_DEFAULT;
  }
}

SysState int2sys(int sys_state) 
{
  switch (sys_state) {
  case 1:
    return SysState::SS1_PWR_ON;
  case 2:
    return SysState::SS2_SUBSYS_CON;
  case 3:
    return SysState::SS3_ACT_TESTING;
  case 4:
    return SysState::SS4_ACT_TEST_DONE;
  case 5:
    return SysState::SS5_CRANKREADY;
  case 6:
    return SysState::SS6_PRECRANK_CHECK;
  case 7:
    return SysState::SS7_CRANKING;
  case 8:
    return SysState::SS8_ENG_RUNNING;
  case 9:
    return SysState::SS9_DRIVING;
  case 10:
    return SysState::SS10_SHUT_ENG;
  case 11:
    return SysState::SS11_PWR_OFF;
  case 13:
    return SysState::SS13_CRANK_CHECK_INIT;
  case 19:
    return SysState::SS19_STANDBY_MODE;
  case 255:
  default:
    return SysState::SS255_DEFAULT;
  }
}

TrackFlag int2tf(int track_flag)
{
  switch (track_flag) {
  case 1:    // RED FLAG - STOP
    return TrackFlag::TF1_RED;
  case 2:     // ORANGE FLAG - START ENGINE
    return TrackFlag::TF2_ORANGE;
  case 3:     // YELLOW FLAG - CAUTION
    return TrackFlag::TF3_YELLOW;
  case 4:     // GREEN FLAG - RACE
    return TrackFlag::TF4_GREEN;
  case 8:     // WAVING GREEN - PASS
    return TrackFlag::TF8_WAVING_GREEN;
  case 255:   // DEFAULT VALUE
  default:
    return TrackFlag::TF_DEFAULT;
  }
}

VehicleFlag int2vf(int veh_flag)
{
  switch (veh_flag) {
  case 2:
    return VehicleFlag::VF2_BLACK;
  case 4:
    return VehicleFlag::VF4_CHECK;
  case 5:
    return VehicleFlag::VF5_DEFENDER;
  case 7:
    return VehicleFlag::VF7_ATTACKER;
  case 8:
    return VehicleFlag::VF8_PURPLE;
  case 1:
  default:
    return VehicleFlag::VF1_NULL;
  }
}


LapState int2lap(int lap_state)
{
  switch (lap_state) {
  case 0:
    return LapState::LS0_IN_BOX;
  case 1:
    return LapState::LS1_LEAVE_BOX;
  case 2:
    return LapState::LS2_PIT_EXIT;
  case 3:
    return LapState::LS3_ON_RACELINE;
  case 4:
    return LapState::LS4_BLACK_SLOWDOWN;
  case 5:
    return LapState::LS5_BLACK_SWITCH_TO_PIT;
  case 6:
    return LapState::LS6_PIT_ENTRY;
  case 7:
    return LapState::LS7_TERMINATE;
  case 255:
  default:
    return LapState::LS255_DEFAULT;
  }
}

TrackLocation int2loc(int lap_location)
{
  switch (lap_location) {
    case 0:
      return TrackLocation::LOC_START_FINISH;
    case 1:
      return TrackLocation::LOC_PIT_ENTRY_EXIT;
    case 2:
      return TrackLocation::LOC_PASSING_ZONE;
    case 10:
      return TrackLocation::LOC_PIT_SPEEDUP;
    case 11:
      return TrackLocation::LOC_PIT_SLOWDOWN;
    case 255:
    default:
      return TrackLocation::LOC_DEFAULT;
  }
}

#endif // RC_STATES_HPP
