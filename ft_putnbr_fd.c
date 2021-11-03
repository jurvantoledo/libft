#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	t;

	if (n == -2147483648)
	{
		ft_putstr_fd("-2", fd);
		n = 147483648;
	}
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = n * -1;
	}
	if (n >= 0 && n <= 9)
	{
		t = n + '0';
		ft_putchar_fd(t, fd);
	}
	else
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
}
