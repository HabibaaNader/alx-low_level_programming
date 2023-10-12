#include "dog.h"

/**
* init_dog - inits a variable of
*@name: name of dog
*@age: age of dog
*@owner: owner's name
*
*Description : a dog in kitty world
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL)
{
(*d).name = name;
(*d).age = age;
(*d).owner = owner;
}
}
