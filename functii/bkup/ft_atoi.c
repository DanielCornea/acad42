int ft_atoi_neg(const char *nptr)
{
	int i; 
	i =1; 
	int nbr; 
	nbr = 0; 
	while (ft_isdigit(nptr[i]))
                {    
                        nbr = nptr[i] - '0' + nbr * 10;
                        i++; 
                }
        return nbr * -1;

}

int ft_atoi_pos(const char *nptr) 
{
	int i;
	int nbr; 
	nbr=0; 
	i = 0; 
	while (ft_isdigit(nptr[i]))
                        {
                                nbr = nptr[i] - '0' + nbr * 10;
                                i++;
                        }
                return nbr;

}

int ft_atoi (const char *nptr) 
{
	if (nptr[0] == '-') 
	{
		return(ft_atoi_neg(nptr)); 
	}
	else 
	{
		
        	return(ft_atoi_pos(nptr));
	}
}
