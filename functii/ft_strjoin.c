#include<stdlib.h>

char * ft_strjoin(char const *s1, char const *s2)
{
	int i; 
	int j; 
	int s; 
	char *str;
	i =0;  
	j = 0; 
	s = ft_strlen(s1) + ft_strlen(s2); 
	str = (char *)malloc(sizeof(char) * s + 1); 
	
	while (i < ft_strlen(s1))
	{
		str[i] = s1[i];
		i++; 
	}
	

	while (j < ft_strlen(s2))
        {
                str[i] = s2[j];
                i++;
		j++;
        }
	

	str[s] = '\0';	

	return str; 

	
}
