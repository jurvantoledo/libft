#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*cdst;
	char	*csrc;

	i = 0;
	cdst = (char *)dst;
	csrc = (char *)src;
	if (dst == NULL && src == NULL)
		return (0);
	if (dst > src)
	{
		while (len > 0)
		{
			len--;
			cdst[len] = csrc[len];
		}
	}
	while (i < len)
	{
		cdst[i] = csrc[i];
		i++;
	}
	return (dst);
}
