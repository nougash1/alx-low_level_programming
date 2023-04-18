#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog's info
 * @name: First variable
 * @age: Second variable
 * @owner: Third variable
 *
 * Description: Longer description
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_gy - typedef for struct dog
 */
typedef struct dog dog_gy;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_gy *new_dog(char *name, float age, char *owner);
void free_dog(dog_gy *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif
