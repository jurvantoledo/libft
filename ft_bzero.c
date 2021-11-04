#include "libft.h"

/* 
	We set an 'n' amount of bytes to '0' on 'void *s'.
*/

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
