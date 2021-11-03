#include "libft.h"

/* Eerst b veranderen naar unsigned character pointer. */
void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*s;

	i = 0;
	s = b;
	while (i < len)
	{
		s[i] = (unsigned char)c;
		i++;
	}
	return (s);
}

/*
	Het veranderd het aantal characters wat gelijk is aan 
	length naar wat je op C hebt gezet.
*/