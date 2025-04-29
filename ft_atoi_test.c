#include "../libft.h"

#include <stdio.h>
#include <stdlib.h>
#include "../libft.h" 

void    test_atoi(const char *str)
{
    int    res_ft;
    int    res_std;

    res_ft = ft_atoi(str);
    res_std = atoi(str);

    printf("Test avec : \"%s\"\n", str);
    printf("ft_atoi  = %d\n", res_ft);
    printf("atoi     = %d\n", res_std);

    if (res_ft == res_std)
        printf("==> OK\n\n");
    else
        printf("==> ERROR\n\n");
}

int    main(void)
{
    test_atoi("42");
    test_atoi("-42");
    test_atoi("   2147483647");
    test_atoi("  -2147483648");
    test_atoi("   +123");
    test_atoi("   -00123");
    test_atoi("  9999999999"); 
    test_atoi(" -9999999999"); 
    test_atoi("   123abc456"); 
    test_atoi("abc123"); 
    test_atoi("");
    test_atoi("    ");
    test_atoi("0");
    test_atoi("-0");
    test_atoi("+0");
    test_atoi("\t\n\v\f\r 123");

    return (0);
}
