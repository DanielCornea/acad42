int ft_strequ(char const *s1, char const *s2) 
{
	int i; 
	i = 0;
		
	while (s1[i] == s2[i])
	{
		i++; 
		 
	}
	
	if (i >= 1) 
	return 1; 
	return 0; 
}
