#include "main.h"

/**
* _strchr - locate 1st occurrence of char in string and returns pointer there
* @s: string to search
* @c: target character
* Return: If c is found - a pointer to that character
* If c is not found - NULL
*/

char *_strchr(char *s, char c)
{
int i = 0;

while (s[i] != '\0' && s[i] != c)
i++;

if (s[i] == c)
return (&s[i]);
else
return (NULL);
}
