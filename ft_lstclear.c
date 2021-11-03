#include "libft.h"

// Als wij iets verwijderen, verwijderen we daarbij het adres 
// naar het volgende wat wij moeten verwijderen en daarom slaan wij
// dit op in t zodat wij het volgende kunnen verwijderen.

// *lst = t om lst op 0 te zetten.

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*t;

	while (*lst != '\0')
	{
		t = (*lst)->next;
		ft_lstdelone(*lst, del);
		(*lst) = t;
	}
}
