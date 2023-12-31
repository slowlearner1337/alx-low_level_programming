#include "main.h"

/**
 * _strstr - entry pointi
 * @haystack: input
 * needle: input
 * Return: always 0 (success)
 */
char *_strstr(char *haystack, char *needle)
{
for (; *haystack != '\0'; haystack++)
{
char *one = haystack;
char *two = needle;

while (*one == *two && *two != '\0')
{
one++;
two++;
}

if (*two == '\0')
return (haystack);
return (needle);
}
return (NULL);
}
