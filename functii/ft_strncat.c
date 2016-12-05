#include<string.h> 
char * ft_strncat(char *dest, const char *src,  size_t n) 
{
	int i;
	int k; 

	k =0; 
	
	i = ft_strlen(dest);
	  
	while (k < n) 
	{
		dest[i] = src[k]; 
		i++; 
		k++; 
			
	}
	i++; 	
	dest[i] = '\0'; 
	return dest;
}
