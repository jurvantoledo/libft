#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*t;
	t_list	*newlst;

	newlst = NULL;
	if (!f || !lst)
		return (NULL);
	while (lst)
	{
		t = ft_lstnew(f(lst->content));
		if (!t)
		{
			ft_lstclear(&newlst, del);
			return (NULL);
		}
		ft_lstadd_back(&newlst, t);
		lst = lst->next;
	}
	return (newlst);
}
