#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*new;

	new = malloc(count * size);
	if (new == NULL)
		return (NULL);
	ft_memset(new, 0, count * size);
	return (new);
}

/* 
	Malloced de hoeveelheid chracters * de size bijvoorbeeld een sizeof(int).
	daarna zet het de count * size naar 0 in de string new.
*/