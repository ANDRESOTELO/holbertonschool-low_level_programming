**Malloc**

The malloc function allocates a specific number of bytes in memory and returns a pointer to the allocated memory. This memory will have read and write permissions.

Prototype: void *malloc(size_t size);

Where void * means it is a pointer to the type of your choice and *size* is the number of bytes you need to allocate.

**Free**
The free function frees the memory space which have been allocated by a previous call to malloc (or calloc, or realloc).

Prototype: void free(void *ptr);

**Valgrind**

Valgrind program ensure that we are freeing all allocated memory. It is a programming tool for memory debugging, memory leak detection and profiling.
