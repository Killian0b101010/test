#include "../libft.h" 
void    test_itoa(int n)
{
    char *res;

    res = ft_itoa(n);
    if (!res)
    {
        printf("erreur d'allocation pour n = %d\n", n);
        return;
    }
    printf("ft_itoa(%d) = \"%s\"\n", n, res);
    free(res);
}

int    main(void)
{
    test_itoa(0);
    test_itoa(42);
    test_itoa(-42);
    test_itoa(2147483647); 
    test_itoa(-2147483648);     
	test_itoa(1);
    test_itoa(-1);
    test_itoa(1000000);
    test_itoa(-1000000);

    return (0);
}
