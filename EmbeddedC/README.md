# C Language important topics asked in interviews.

***

### 1. "Use after free" or "Dangling Pointer" has been illustrated by a program which is MallocDeallocation.c

- We can certainly continue to use pointer p or dereference it or access using array after calling free(p) and nothing will stop us. 
- However the results will be completely undefined and unpredictable. 
- It works by luck only. This is a common programming error called "use after free" aka "Dangling Pointer" which works in many programs for literally years without "problems".

---

### 2. What is the Function prototype of printf()?

- printf is a VARIADIC function.
- printf is declared and its prototype is present inside the header file i.e. <stdio.h> and defination is present in libc.so gcc library
- The function prototype of the printf function is: 
    - **_int printf( const char *restrict format, ... );_**
    - The ... or ellipses indicate that there are a variable number of argument in printf function.
    - we would use the va_start, va_arg, va_end macros and va_list type to access the arguments.

---

### 3. What is the function prototype of scanf()?

-