#include "../libft.h"
#include <string.h> 
int main(void)
{
	
	char test[50] = "testtfweffq";
	char tesrealt[50] = "testtfweffq";
	ft_memset(test + 5,"**",5);
	memset (tesrealt + 5, "**",5);
	printf("mon ft_memset \n %s \n",test);
	printf("memset frauduleux \n %s\n",tesrealt);
}
