Task 0: Defines a new type struct dog with the following elements:

name, type = char *
age, type = float
owner, type = char *
Task 1: Writes a function that initialize a variable of type struct dog
Task 2: Writes a  function that prints a struct dog
Task 3: Defines a new type dog_t as a new name for the type struct dog.
Task 4: Writes a function that creates a new dog.

Prototype: dog_t *new_dog(char *name, float age, char *owner);
You have to store a copy of name and owner
Return NULL if the function fails

Task 5: Writes a function that frees dogs.

Prototype: void free_dog(dog_t *d);

