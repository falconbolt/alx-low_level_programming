void rev_string(char *s);

/**
 * infinite_add - Add two numbers.
 * @n1: t.
 * @n2: t.
 * @r: t.
 * @size_r: t.
 *
 * Return: t.
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	char *m1 = n1;
	char *m2 = n2;
	int len1 = 0;
	int len2 = 0;
	int index, num1, num2, sum;
	int carry = 0;

	while (*m1 != '\0')
	{
		m1++;
		len1++;
	}
	while (*m2 != '\0')
	{
		m2++;
		len2++;
	}
	m1--;
	m2--;
	if (len1 > size_r - 1 || len2 > size_r - 1)
		return (0);
	for (index = 0; len1 > 0 || len2 > 0; index++)
	{
		num1 = 0;
		num2 = 0;
		if (len1 > 0)
		{
			num1 = *m1 - '0';
			len1--;
			m1--;
		}
		if (len2 > 0)
		{
			num2 = *m2 - '0';
			len2--;
			m2--;
		}
		sum = num1 + num2 + carry;
		r[index] = sum % 10 + '0';
		carry = sum / 10;
	}
	if (carry > 0 && index == size_r - 1)
		return (0);
	else if (carry > 0)
		r[index++] = carry + '0';
	r[index] = '\0';
	rev_string(r);
	return (r);
}

/**
 * rev_string - Reverses a string.
 * @s: Pointer to a character string.
 *
 * Return: void;
 */

void rev_string(char *s)
{
	char c;
	int back;
	int front;
	int length;

	length = 0;
	while (s[length] != '\0')
		length++;
	front = 0;
	for (back = length - 1; back >= length / 2; back--)
	{
		c = s[front];
		s[front] = s[back];
		s[back] = c;
		front++;
	}
}
