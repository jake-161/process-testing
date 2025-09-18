# process-testing
This repo exists to test different strategic process implementations to streamline workflow and increase professional code development

## Current Processes Being Tested

- Single app per feature branch
- Single app per PR
- App README must be included in PR
- Semantic Versioning following [this standard](https://semver.org/)
- Conventional commit messages following [this standard](https://www.conventionalcommits.org/en/v1.0.0-beta.4/#specification) with attention on [these tips](https://cbea.ms/git-commit/), an alternative could be clean commit messages that are combined into a PR message with convention responsibility falling on whoever is merging the PR.

## Potential Tooling

- Commit Lint CLI tool such as [glint](https://github.com/brigand/glint?tab=readme-ov-file)

## Mistakes Noticed

- Commiting directly to main. This should be disabled. Branches for different scopes (apps/repo) should be used. Just made the mistake again. Now editing on dedicated repo branch. Hopefully rulesets are enforced for orgs.
- Typos in directory names. This could be automated. Luckily fixing is straigh forward

## App Directory

- [App_1](./app-1/README.md)
