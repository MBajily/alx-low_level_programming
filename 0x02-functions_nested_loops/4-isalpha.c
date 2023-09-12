/**
 * _isalpha - Checks whether a character is an
 * alphabetic letter (lowercase or uppercase).
 *
 * @c: The ASCII value of the character to
 * be checked.
 * Return: 1 if the character is
 * an alphabetic letter, 0 otherwise.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
