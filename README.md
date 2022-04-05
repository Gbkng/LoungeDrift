# LoungeDrift

## How to build the project ?

In order to build LoungeDrift, it is encouraged to use a proper build directory, different than the present source code directory.

After creating a build folder, run 

```sh
cmake $PATH_TO_SOURCE_DIR
make
```

from your build folder. A new executable with name `loungedrift` should have benn created.

In order to configure the cmake options, the `CMakeLists.txt` file of the source directory may be modified.
See https://cmake.org/cmake/help/latest/ for official documentation.
## Dependencies

The project is based on the SFML library (Simple Fast Multimedia Library).

To install the recquired module of this library, run

```sh
sudo apt install libsfml-dev libsfml-graphics2.5 libsfml-system2.5 libsfml-window2.5
```

The path to this library is then given to the linker through the line 
```cmake
target_link_libraries(loungedrift sfml-graphics sfml-window sfml-system)
```
of the `CMakeLists.txt` config file.

## Snippets used in throughout the code

### pragma once

At the beggining of every header file,

```cpp
#pragma once
```

preprocessor macro should be written, in order to avoid multiple inclusion of the header file. This macro means "include this file only once. If file already included, do nothing."
See https://en.wikipedia.org/wiki/Pragma_once for more information.


### inline documentation

Every function and class in the code should be commented correctly. To do so, the choice is to use the well known "Java doc banner" documentation standard (https://fr.wikipedia.org/wiki/Javadoc). This format describes conventions about how to comment functions and class. This way, some documentation tools can automatically parse the code and detect all commented classes and functions. For instance, the Doxygen tool can be used (https://www.doxygen.nl/manual/docblocks.html). 