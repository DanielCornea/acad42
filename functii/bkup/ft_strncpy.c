#include<string.h> 
char *ft_strncpy (char *dest, const char *str,  size_t n)
{
	int i; 
	int k; 
	i = 0; 
	
	
	 
	 

	while (str[i] != '\0' && i < n) 
	{
		dest[i] = str[i]; 
		i++; 	
	}

	
	if (ft_strlen(str) < n) 
	{
		while  (i <= strlen(dest))
		{
			dest[i] = '\0'; 
			i++; 
		}
	} 
	return dest; 
}
	
