**0x09. C - Static libraries**

__Static Libraries__

Static libraries are simply a collection of ordinary object files; conventionally, static libraries end with the ``.a'' suffix. This collection is created using the ar (archiver) program.

Static libraries permit users to link to programs without having to recompile its code, saving recompilation time. Note that recompilation time is less important given today's faster compilers, so this reason is not as strong as it once was. Static libraries are often useful for developers if they wish to permit programmers to link to their library, but don't want to give the library source code (which is an advantage to the library vendor, but obviously not an advantage to the programmer trying to use the library).
