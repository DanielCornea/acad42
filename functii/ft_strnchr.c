#include<string.h>
char *ft_strnchr(const char *s, int c, size_t t ) 
{
	int i; 
	i = 0; 
	while (s[i] != '\0' && i < t)
	{
		if (c == s[i])
			return s[i]; 
		i++; 
	}
	return NULL; 
}
