/**
 * Checks whether a character is a lowercase letter.
 *
 * @param c The ASCII value of the character
 * to be checked.
 * @return 1 if the character is a
 * lowercase letter, 0 otherwise.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
