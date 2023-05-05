/**
 * cap_string - capitalizes all words of a string
 * @s: input string
 *
 * Return: pointer to resulting string
 */
char *cap_string(char *s)
{
	int i;

	if (s[0] >= 'a' && s[0] <= 'z')
		s[0] -= 'a' - 'A';

	for (i = 1; s[i] != '\0'; i++)
	{
		if ((s[i] >= 'a' && s[i] <= 'z') &&
			(s[i - 1] == ' ' || s[i - 1] == '\t' || s[i - 1] == '\n' ||
			s[i - 1] == ',' || s[i - 1] == ';' || s[i - 1] == '.' ||
			s[i - 1] == '!' || s[i - 1] == '?' || s[i - 1] == '"' ||
			s[i - 1] == '(' || s[i - 1] == ')' || s[i - 1] == '{' ||
			s[i - 1] == '}'))
		{
			s[i] -= 'a' - 'A';
		}
	}

	return (s);
}
