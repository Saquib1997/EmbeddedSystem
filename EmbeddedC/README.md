#C Language Some Exceptional cases.
### Use after free or Dangling Pointer has been illustrated by a program which is MallocDeallocation.c

- We can certainly continue to use pointer p or dereference it or access using array after calling free(p) and nothing will stop us. 
- However the results will be completely undefined and unpredictable. 
- It works by luck only. This is a common programming error called "use after free" aka "Dangling Pointer" which works in many programs for literally years without "problems".  