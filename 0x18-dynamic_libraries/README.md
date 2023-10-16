0x18. C - Dynamic libraries


GENERAL
What is a dynamic library, how does it work, how to create one, and how to use it
What is the environment variable $LD_LIBRARY_PATH and how to use it
What are the differences between static and shared libraries
Basic usage nm, ldd, ldconfig.


Dynamic libraries are compiled files that may be linked to a program during runtime rather than at compile time in C programming. This makes it possible to write code that can be reused across other apps. Shared libraries are another name for dynamic libraries.


The following are the main features of using dynamic libraries in C:

Creating a Dynamic Library: In order to make a dynamic library in C, you usually put your code in one or more source files and then use a compiler like gcc to turn it into a shared library. To indicate that you wish to construct a dynamic library, use the -shared parameter.
Example: gcc -shared -o mylib.so mylib.c


Using a Dynamic Library: A dynamic library must be linked during compilation in order to be used in a C program. In order for your application to locate the library during runtime, you must additionally give the library's path.
Example: gcc -o myprogram myprogram.c -L/path/to/library -lmylib


Loading Dynamic Libraries at Runtime: In C program, you may use methods like dlopen() from the dlfcn.h> header to load dynamic libraries at runtime. This enables you to dynamically load libraries in response to user input or particular situations.


Dynamic libraries have a number of benefits, such as faster maintenance, the ability to change shared functionality without recompiling the entire application, and code reuse. They can, however, also add additional complexity, such as maintaining library dependencies and versioning.
