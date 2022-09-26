/**
 * _memset - Fills memory with a onstant byte.
 * @s: Pointer to memeory area to be filled.
 * @b: The byte to fill memory area with.
 * @n: Numbet of bytes to fill in memory area.
 *
 * Return: Pointer to memory area s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index;

	for (index = 0; index < n; index++)
		s[index] = b;

	return (s);
}
