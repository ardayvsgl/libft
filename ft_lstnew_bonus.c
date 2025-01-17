#include "libft.h"

t_list	*ft_lstnew(int content)
{
	t_list	*a;

	a = (t_list *)malloc(sizeof(content));
	if (!(a))
		return (NULL);
	a -> content = content;
	a -> next = NULL;
	return (a);
}
