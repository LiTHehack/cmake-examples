# LiTHehacks CMake examples

Some simple examples of how to structure projects with CMake.

```bash
cd path/to/folder/containing/CMakeLists.txt

# it is good practice to generate Makefiles and project files in a build/ folder
mkdir build
cd build/

# run the CMakeLists.txt file located in the parent folder
# this command will produce a lot of output in the (current) build/ folder
# default build generator (on Unix systems) is Makefiles
cmake ..

# run the Makefile to compile the project
make

[...]

# Create build/CodeBlocks/ directory and run CMake with CodeBlocks project file generator
mkdir CodeBlocks
cd CodeBlocks
cmake -G CodeBlocks\ -\ Unix\ Makefiles ../..
```