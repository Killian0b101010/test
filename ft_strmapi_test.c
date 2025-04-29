#include "../libft.h"
#include "ctype.h"
#include <stdio.h>
#include <stdlib.h> 

char to_upper(unsigned int i, char c)
{
    (void)i;     
	if (c >= 'a' && c <= 'z')
        return (c - 32);
    return (c);
}

int main(void)
{
    char *str = "bonjour 42";
    char *result;

    result = ft_strmapi(str, to_upper);
    if (!result)
    {
        printf("Erreur : allocation mémoire échouée.\n");
        return (1);
    }
    printf("Original : %s\n", str);
    printf("Transformé : %s\n", result);

    free(result); 
    return (0);
}
