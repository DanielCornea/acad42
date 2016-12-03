#include<stdlib.h>
int is_white (char c)
{
	if (c == ' '|| c == ' ' || c == '\n' || c == '\t' || c == ',') 
	{
		return 1;  
	}  
	return 0; 
}


char * do_trim (char const *s, int i, int  k) 
{
	char *str; 
	int m;
	int l;
	m = 0;  
	l = k -i; 
	str = (char *)malloc(sizeof(char) * l); 
	while (m  <= l) 
	{
		str[m] = s[i]; 
		m++; 
		i++; 
	}
	 
	return str; 
}

char * ft_strtrim(char const *s)
{
	
	int i; 
	int k; 
	int n; 
	k = ft_strlen(s) -1;
	i = 0;  
	while (is_white(s[i]))
	{	
		i++;  
	}
	while (is_white(s[k])) 
	{
		k--;		
	} 
	 
	 	
	
	return do_trim(s, i, k); 
	return NULL; 	
}
