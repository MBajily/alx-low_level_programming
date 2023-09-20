#include <stdio.h>
#include <string.h>


char *infinite_add(char *n1, char *n2, char *r, int size_r);

int main(void)
{
	char n1[] = "123456789";
	char n2[] = "987654321";
	char result[20];
	char *sum = infinite_add(n1, n2, result, sizeof(result));

	if (sum == 0)
	{
		printf("Unable to store the result.\n");
	}
	else
	{
		printf("Sum: %s\n", sum);
	}
	return 0;
}

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = strlen(n1);
	int len2 = strlen(n2);
	int max_len = len1 > len2 ? len1 : len2;
	int carry = 0;
	int i = len1 - 1;
	int j = len2 - 1;
	int k = max_len;

	if (max_len >= size_r)
	{
		return 0;
	}
	r[k] = '\0';
	while (i >= 0 || j >= 0)
	{
		int digit1 = i >= 0 ? n1[i] - '0' : 0;
		int digit2 = j >= 0 ? n2[j] - '0' : 0;
		int sum = digit1 + digit2 + carry;

		carry = sum / 10;
		if (k > 0)
		{
			r[k - 1] = (sum % 10) + '0';
			k--;
		}
		else
		{
			return 0;
		}
		i--;
		j--;
	}
	if (carry > 0)
	{
		if (k > 0)
		{
			r[k - 1] = carry + '0';
			return &r[k - 1];
		}
		else
		{
			return 0;
		}
	}
	else
	{
		return &r[k];
	}
}
