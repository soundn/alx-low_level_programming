#ifndef DOG_H
#define DOG_H
void init_dog(struct dog *d, char *name, float age, char *owner);
/*
 * File: dog.h
 * Auth: kenneth sound
 * Desc: Header file that defines a struct.
 */

/**
 * struct dog - A new type describing a dog.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif
