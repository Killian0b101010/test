#include <ctype.h>
#include "../libft.h"
#include <stdio.h>

// minuscule ou majuscule
int main(void)
{

	int i = 65;
	while (i <= 122)
	{
		if(ft_isalpha(i) > 0 && isalpha(i) > 0)
			printf(" identique pour i = %d :ft_isalpha = %d, isalpha = %d\n",i,ft_isalpha(i),isalpha(i));
		i++;
	}
}
