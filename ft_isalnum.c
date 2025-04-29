#include "../libft.h"
#include <ctype.h>
#include <stdio.h>

int main(void)
{

    int i = '0'; 
    while (i <= '9')
    {   
        if(ft_isalnum(i) > 0 && isalnum(i) > 0)
            printf(" identique pour i = %d :ft_isalnum = %d, isalnum = %d\n",i,ft_isalnum(i),isalnum(i));
        i++;
    }   
}
	
