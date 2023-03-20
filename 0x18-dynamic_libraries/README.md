# C - Dynamic libraries in C

C libraries are a collection of object files grouped into one unit to ease programming work distribution or to structure software development into units. You can create two kinds of C libraries i.e. Static or Dynamic libraries

Dynamic Libraries (also known as Shared Libraries <em>with extension .so</em>) are not part of an executable file linked with it. Thus executable files with dynamic libraries are smaller and the same dynamic libraries can be reused (shared) by several running programs.

## Building a C dynamic library
Compile the .c source files to create (machine) object codes (.o) with a command like:
```
gcc -c -fPIC *.c
```
<em>The -fPIC flag stands for 'Position Independent Code' generation: the code contained in the .o file is then valid whatever the virtual address occupied at runtime. This is needed for shared libraries since it is impossible to know at which address the shared library will be.</em>

Build the library (here libyourname.so) from all .o with the 'shared' flag:
```
gcc -shared -o libyourname.so *.o
```
Verify the dynamic library and have the right functions as dynamic symbols you can use:
```
nm -D libyourname.so
```
## How to use the Dynamic library
Add the location of your library files into the environmental variable to know where to find the functions.
```
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
```
Compile the library with your main.c file to link it and use it as you want.
```
gcc -Wall -pedantic -Werror -Wextra -L. 0-main.c -ldynamic -o
```

#### <em>References</em>
- https://medium.com/@kenneth.ca95/how-to-create-a-dynamic-library-in-c-baa473148d00#:~:text=The%20way%20to%20create%20a,make%20the%20code%20position%20independent
- https://cylab.be/blog/234/creating-a-dynamic-library-in-c?accept-cookies=1