#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>  
#include<unistd.h>

void ft_putchar(char c) 
{
	write(1, &c, 1); 
}

int main()
{
	
	unsigned int i; 
	char *str; 
	char *str1;

 
	str = (char *)malloc(sizeof(char) * 10); 
	str[0] = 'C';
	str[1] = 'o';
	str[2] = 'r'; 
	str[3] = 'n'; 
	str[4] = 'e'; 
	str[5] = 'a'; 
	
	 
	i = 0; 	
	str1 = (char *)malloc(sizeof(char) * 2);
        
	str1[0] = 'D'; 
        str1[1] = 'a';
        str1[2] = 'n';
	str1[3] = 'i'; 
		
	ft_striteri(str1, &i, &ft_putchar); 
	//	ft_striter(str, &ft_putchar); 
	//	ft_putstr(ft_strdup(str)); 
	//ft_putchar(ft_strnchr(str1, 'i' , 4));  
	//	ft_putstr(ft_strncat(str, str1, 2)); 	
	//	ft_putstr(ft_strcat(str, str1)); 	
	//	ft_putstr(ft_strncpy(str1, str, 123));
	//	ft_putnbr(ft_strlen(ft_strnew(5))); 
	//	ft_putstr(ft_strsub(str, 12, 11));
	//	ft_putnbr(ft_strnequ(str, str1, 4)); 
	//	ft_putstr(ft_strclr(str1)); 
	//	ft_putstr(ft_strtrim(str1));
	//	ft_putnbr(ft_strtrim(str1);  
 	  
	

 
	return(0); 
}
