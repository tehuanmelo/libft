# libft

The libft project is a project assigned to students of the 42 school, which aims to teach them the basics of C programming language and to understand the behavior of the libraries they will use in the future. The project consists of creating your own library of C functions, which will work in the same way as the standard C library functions.

The students are required to re-create a number of basic C library functions such as:

* Memory allocation and management: calloc
* Strings: strlen, strcpy, strcat, strdup, strchr, strstr
* Numbers: atoi, itoa, etc.
The students must also implement additional functions that will be useful for future projects. These functions will be used throughout the 42 curriculum.

The project is meant to be done individually, and the students are expected to write clean, well-documented, and efficient code. They are also encouraged to improve the functionality of the provided functions, as well as adding new functionality. The project is considered as a foundation for other 42's projects.

Overall, the libft project is an opportunity for students to learn and understand the basic libraries that they will use in the future and to practice their coding skills in the C programming language.

## Installation

Installing the libft library can be done in a few simple steps:

1. Download the libft library from the project's GitHub repo.

2. Open a terminal and navigate to the directory where the files were extracted.

3. Run the following command to compile the library:


````
make
````
This will create a ````libft.a```` file in the directory, which is the compiled library that you can use in your projects.

## Usage

To use the library in your own project, you will need to include the `"libft.h"` header file in your code, and link the library using the `"-lft"` flag when compiling.

for example:

````
gcc -o main main.c -L. -lft
````
You can also use the library in other projects by copying the `"libft.a"` file to the project's directory and linking it using the `"-lft"` flag.

## Support

Feel free to contact me on slack or via email

email - `tehuanmelo@gmail.com`

twitter - `@tehuanmelo`

slack - `tde-melo`



