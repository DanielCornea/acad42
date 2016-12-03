int ft_isalpha (unsigned char c)
{
	if (ft_isupper(c) || ft_islower(c))
	return 1; 
	
	return 0; 
}
