# 0x0D. C - Structures, typedef

This project is part of the Holberton School Low-Level Programming curriculum.

It covers how to use structures in C, define new types using `typedef`, and manage memory for user-defined types.

## Learning Objectives

- What are structures and how to use them
- How to define a new type using `typedef`
- How to initialize a structure
- How to access structure members
- How to allocate and free memory for structures

## Files

| File | Description |
|------|-------------|
| `dog.h` | Header file defining `struct dog` and the new type `dog_t` |
| `1-init_dog.c` | Function that initializes a variable of type `struct dog` |
| `2-print_dog.c` | Function that prints the contents of a `struct dog` |
| `4-new_dog.c` | Function that creates a new dog (allocates memory) |
| `5-free_dog.c` | Function that frees memory allocated for a dog |

## Example Usage

```c
#include "dog.h"

int main(void)
{
    dog_t *my_dog;

    my_dog = new_dog("Poppy", 3.5, "Bob");
    print_dog(my_dog);
    free_dog(my_dog);
    return (0);
}

