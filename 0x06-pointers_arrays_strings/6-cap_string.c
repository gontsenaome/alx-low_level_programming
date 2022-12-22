#include "main.h"
/**
 * cap_string - capitalizes each first letter of word string
 * @s: string pointer
 * Return: s
 */

char *cap_string(char *s)
{
	int k = 0, i;
	int sep_words[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	if (*(s + k) >= 97 && *(s + k) <= 122)
		*(s + k) = *(s + k) - 32;
	k++;

	while (*(s + k) != '\0')
	{
		for (i = 0; i < 13; i++)
		{
			if (*(s + k) == sep_words[i])
			{
				if ((*(s + (k + 1)) >= 97) && (*(s + (k + 1)) <= 122))
					*(s + (k + 1)) = *(s + (k + 1)) - 32;
				break;
			}
		}
		k++;
	}
	return (s);
}
