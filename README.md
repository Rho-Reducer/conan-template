# conan-template

Template repo for testing/learning how to use conan. 
Because Conan is a C++ package manager, this project 
will focus on C++ using CMake for build configuration.

The hope is to have a decent starter project for any
random ideas I get.

## Contents

- README.md - this file
- src - source code
- test - unit tests

## License

GPL because this is a learner project, and I doubt this will turn into anything significant.

## Build Dependencies

- Python 3.5 or greater: https://www.python.org/downloads/
- Conan Package Manager: https://docs.conan.io/en/latest/index.html
- CMake
- Make or Ninja

## Build Example

```
$> conan install .
$> mkdir build
$> cd build
$> cmake -G Ninja ..
$> ninja
```