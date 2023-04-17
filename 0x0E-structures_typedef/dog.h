#ifndef _DOG_H_
#define _DOG_H_

/* includes directives */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Structures */
struct dog {
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

/* function declarations */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
