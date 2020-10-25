**This is a Variadic functions project**

Function to take a variable number or type of arguments

Defining and using a variadic function involves three steps:

- Define the function as variadic, using an ellipsis () in the argument list, and using special macros to access the variable arguments.
- Declare the function as variadic, using a prototype with an ellipsis (), in all the files which call it.
- Call the function by writing the fixed arguments followed by the additional variable arguments.

**Syntax for variadic functions**

int func (const char *a, int b, ...);