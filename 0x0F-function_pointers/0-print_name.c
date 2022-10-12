/**
  * print_name - Prints a name by using the function pointer passed and the
  * char pointer containing the name.
  * @name: Char pointer to the name to be printed.
  * @f: Function pointer that points to a function that will print the name.
  *
  * Return: void.
  */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
