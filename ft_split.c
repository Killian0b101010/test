#include <stdio.h>
#include <stdlib.h>
#include "../libft.h" 
void    print_split(char **tab)
{
    int i = 0;

    if (!tab)
    {
        printf("NULL\n");
        return;
    }
    while (tab[i])
    {
        printf("tab[%d] = \"%s\"\n", i, tab[i]);
        i++;
    }
}

void    free_split(char **tab)
{
    int i = 0;

    if (!tab)
        return;
    while (tab[i])
        free(tab[i++]);
    free(tab);
}

int main(void)
{
    char **result;

    printf("=== Test normal ===\n");
    result = ft_split("Salut comment ça va", ' ');
    print_split(result);
    free_split(result);

    printf("\n=== Test plusieurs séparateurs ===\n");
    result = ft_split("Hello,,,World,,42", ',');
    print_split(result);
    free_split(result);

    printf("\n=== Test chaîne vide ===\n");
    result = ft_split("", ' ');
    print_split(result);
    free_split(result);

    printf("\n=== Test que des séparateurs ===\n");
    result = ft_split(",,,,", ',');
    print_split(result);
    free_split(result);

    printf("\n=== Test pas de séparateur ===\n");
    result = ft_split("PasDeSeparateurIci", ',');
    print_split(result);
    free_split(result);

    return (0);
}
