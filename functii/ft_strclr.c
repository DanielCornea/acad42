void ft_strclr(char *s)
{
	int i;
 
	i = 0;  
	while (i < ft_strlen(s))
	{
		
		s[i] = '\0'; 
		i++;
	}
	
}
