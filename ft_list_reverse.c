#include "ft_list.h"
#include <stdio.h>

void	ft_list_reverse(t_list **begin_list)
{
	t_list *temp;
	t_list *temp2;

	if (*begin_list && (*begin_list)->next)
	{
		temp = (*begin_list)->next;
		temp2 = *begin_list;
		(*begin_list)->next = NULL;
		*begin_list = temp;
		while ((*begin_list)->next)
		{
			temp = (*begin_list)->next;
			(*begin_list)->next = temp2;
			temp2 = *begin_list;
			*begin_list = temp;
		}
		(*begin_list)->next = temp2;
	}
}
