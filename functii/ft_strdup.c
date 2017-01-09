#include<stdlib.h> 
char *ft_strdup(const char *s) 
{
	char *str; 
	int i; 

	str = (char*)malloc(sizeof(char) * ft_strlen(s));
	
	ft_strcpy(str, s); 
	return str; 
}
