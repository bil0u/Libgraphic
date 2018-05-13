# Libgraphic

This is a beta version of my personal toolkit for C graphics programming.  

Note: this code has only been tested on macOS  

## Usage

First, clone
```sh
$ git clone https://github.com/bil0u/libgraphic.git
```

You have to specify the include path `-I ./libgraphic` and the library flags `-lgraphic -Llibgraphic`  

Don't forget to `#include "libgraphic.h"` or `"libgraphic_macros.h"`
(Note that `libgraphic.h` already includes `libgraphic_macros.h`)  

A Makefile is provided, just run in your shell
```sh
$ make
```
or call it from a parent one with the rule `make -C ./<libgraphic_path>`

## Components

### Mlx tools
Utilities for 42's MLX graphics library  
See [mlx_tools.h](mlx_tools/includes/mlx_tools.h) for details  

### Colors
`RGB & RGBA` colors utilities  
See [colors.h](colors/includes/colors.h) for details  

### Vertexes
Functions for handling `2D & 3D integer/float` vertexes  
See [vertex.h](vertex/includes/vertex.h) for details  

### Vectors
Functions for handling `2D & 3D integer/float` vectors  
See [vector.h](vector/includes/vector.h) for details  

### Quaternions
Functions for handling `4D` vectors aka quaternions  
See [quaternions.h](quaternions/includes/quaternions.h) for details  

### Matrix
Functions for handling `4D integer/float` matrix  
See [matrix.h](matrix/includes/matrix.h) for details  

### Camera
Tools to quickly set camera based on `pinhole model`  
See [camera.h](camera/includes/camera.h) for details  

### Graphics maths
Useful graphics maths functions  
See [g_maths.h](g_maths/includes/g_maths.h) for details  

### Debug
Poor debug functions, still needs a big improvement  
See [debug.h](debug/includes/debug.h) for details  

## Makefile rules

* all = libgraphic  
   Compile all the library components  

* clean  
   Delete all the objects files  

* fclean  
   Delete both objects and binaries  

* re  
   Runs the `fclean` and `all` rules  

* norm  
   Runs the `norminette` command on all the sources and includes subdirectories (Only usable in 42 clusters)  

## License

This project is licensed under the GNU General Public License v3.0 - see the [LICENSE.txt](LICENSE.txt) file for details
