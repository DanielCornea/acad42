#include<string.h>
char *ft_strchr(const char *s, int c) 
{
	int i; 
	i = 0; 
	while (s[i] != '\0')
	{
		if (c == s[i])
			return s[i]; 
		i++; 
	}
	return NULL; 
}
