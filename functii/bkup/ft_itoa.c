#include<stdlib.h> 
int nbr_size (int nbr) 
{ 
	int i; 
	i = 0; 
	while (nbr != 0)
        {
                nbr = nbr/10;
                i++;
	}
	return i;         
}
char *ft_case_neg(int n, int i)
{	 
	char *str1; 
	str1 = (char *)malloc(sizeof(char) * i);
        str1[0] = '-';
	n = n * -1;  
        
        while (n > 0)
        {
		str1[i] = n % 10 + '0';
		
			
		n = n/10;
                i--;
       	}
	 
        return (str1);
}
char *ft_case_pos(int n, int i)
{
	char *str; 
	int k; 	 
	str = (char *)malloc(sizeof(char) * (i-1));
        k = i -1;
        while (n > 0)
        {
        	str[k] = n % 10 + '0' ;
        	n = n/10;
        	k--;
        }
                return(str);
	
}




char *ft_itoa (int n) 
{
	char *str;  
	int i; 
	int nbr;
	nbr = n;
	
	if ( n == 0)
	{
		str = (char *)malloc(sizeof(char) * 1);
		str[0] = '0'; 
		return str; 
	}	
	i = nbr_size(nbr);  
	if (n < 0) 
	ft_case_neg(n, i);  
	else 
	ft_case_pos(n, i); 					
}
