#include<stdlib.h> 
char * ft_strsub(char const *s, unsigned int start, size_t len) 
{
	char *str; 
	int i; 	

	str = (char *)malloc(sizeof(char) * len); 
	while (start <= len) 
	{
		str[i] = s[start];
		i++; 
		start++; 
	}

	if (!str)
	return NULL; 

	return str; 
}
