#include<stdlib.h> 
char * ft_strnew(size_t size)
{
	
	char *str; 
	int i; 
	

	str = (char *)malloc(sizeof(char) * size); 
	i = 0; 
	while (i < size) 
	{
		str[i] ='\0';
		i++; 
		
	}
  
	return str; 
	return NULL;
}
