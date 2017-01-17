## C++ and Data Structures Notes

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
