#include <stdlib.h>
/**
 * create_array - Creates an array of chars and initializes it with a specific
 * char.
 * @size: The size of the array to create.
 * @c: The char to initialize the array with.
 *
 * Return: Pointer to the created array, or NULL if size == 0
 * or if malloc fails.
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);

	array = malloc(size * sizeof(char));
	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}
