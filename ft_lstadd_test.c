#include "../libft.h"
int main(void)
{
    t_list  *node1;
    t_list  *node2;
    t_list  *node3;
    t_list  *tmp;
    t_list  *next;

    t_list *head = NULL;   
	node1 = ft_lstnew("Premier");
    node2 = ft_lstnew("Deuxeeeième");
    node3 = ft_lstnew("Troisième");
    ft_lstadd_back(&head, node1);
    ft_lstadd_back(&head, node2);
    ft_lstadd_back(&head, node3);
    tmp = head;
    while (tmp)
    {
        printf("%s\n", (char *)tmp->content);
        tmp = tmp->next;
    }
    tmp = head;
    while (tmp)
    {
        next = tmp->next;
        free(tmp);
        tmp = next;
    }
    return (0);
}
