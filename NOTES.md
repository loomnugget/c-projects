## C++ and Data Structures Notes

# How C++ works

# Overview
- To build C++ programs, first source file is compiled on its own
  - compiler creates intermediate files for each source files called object files
  - once they are all compiled, it links the object files together, creating final program.

# Preprocessor
- `(#`) - directives that give instruction to compiler to process info before compilation
- `#define` - creates symbolic constants
  - anything defined is replaced by replacement value you originally set before the program is compiled
  - Can be functions or variables
- `#if`, `#ifdef`, `#ifndef` select different portions of text
- `#include ` for files speeds up compile time (useful for larger programs), organizes code, separates interface from implementation
- `#include` is similar to module.exports in javascript, where it replaces that statement with the functionality contained in other files

# Compilation
- Compiler parses pure C++ code and converts to assembly code
- Then invokes back end to turn it into machine code which generates binary files (object file)
- You can stop compilation if you need to only change one file at a time
- Most common errors - syntax errors or failed overload resolution errors

# Linking
- produces final compilation output from object files in either a shared library or an executable
- Most common errors - missing or duplicate definitions

# Header files
- Header files use `.h` extension and source files use `.cpp` extension
- Header files are `#included` and not compiled
- Source files are compiled and not `#included`
- A header file is needed to make the interface visible to other .cpp files while keeping implementation (functionality) separate in its own .cpp file.

# C++ Classes
- Classes contain constructor and destructor functions
- Destructor is denoted by a ~ and cleans up memory after the Class
- They don't return anything and should generally be made public,
  since it is called when object is created
- To define a function in a class - Class_Name::Function_Name()
- To create an instance, treat it like a structure
- To call class functions - Instance.Function_name();

# C++ Pointers
- Pointer declaration: `variable_type *name`; (stores address)
- * declares the variable a pointer
- To use the name of the pointer, don't add *
- To access actual memory location and value, use * (dereferencing)
- Pointer itself stores the address, so you know where to retrieve the value
- To point to another variable, you need the memory address of the variable
- Address-of operator - `var1 = &var2` - points address of var1 to address of var2 which can be dereferenced to retrieve the value
- Initialize from free memory - allows for dynamic allocation which is useful in Lists (use `new` keyword)
- Use `delete` to free memory allocated with `new` then point it to 0 (null), which functions for damage control
- Using `->` with pointers retrieves the value at that address

# C++ Structures
- Way of storing many different values in variables of possibly different types under the same name
- Makes program more modular
- Useful for when lots of data needs to be grouped together
- To access a variable: `structure_name.variable_name`
- use `->` if you want to have a pointer to the structure and access all information inside the structure

# Binary Search Trees
- Search time is log(base 2) n
- Fill time is log(base 2) n * n
