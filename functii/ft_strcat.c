char * ft_strcat(char *dest, const char *src) 
{
	int i;
	int k; 

	k =0; 
	
	i = ft_strlen(dest);
	  
	while (src[k] != '\0') 
	{
		dest[i] = src[k]; 
		i++; 
		k++; 
			
	}
	i++; 	
	dest[i] = '\0'; 
	return dest;
}
