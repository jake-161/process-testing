# App 1

This is a description of what this app does. It should explain what it implements and why/what problem is being solved.

## Directory Structure

This should be generated using tree. Remove standard boilerplate (to be defined via a project structure template). 
This is to highlight the main src, where dependencies are, and any additons/deviations from the standard template.

Please explain critical directories with inline comments. For example:

```

app_1
├── README.md
├── special_resource # resource files for special protocol
└── src
    └── main.code # main entry point for the solution


```

## Deploy

1. Install dependencies

```sh
sudo apt install make cmake
```

2. Build

```sh
auterion-cli app build
```

3. Install

```sh
auterion-cli app install build/com.censys.app-1-0.0.1.auterionos
```

3. Test

```
auterion-cli app logs com.censys.app-1-0.0.1auterionos -f
```
