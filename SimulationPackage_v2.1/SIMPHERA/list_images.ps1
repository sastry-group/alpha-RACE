$team_name = "dspace"
$team_repositories = aws ecr describe-repositories --query "repositories[?starts_with(repositoryName, '$team_name/')].repositoryName" --region eu-central-1 --output json | ConvertFrom-Json

foreach ($repo in $team_repositories) {
    $image_tags_output = aws ecr list-images --repository-name $repo --query "imageIds[].imageTag" --region eu-central-1 --output json | ConvertFrom-Json
    Write-Host "Repository: $repo"
    Write-Host "Tags: $image_tags_output"
    Write-Host ("-" * 30)
}