#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	j = 0;
	str = malloc(sizeof(char) * ft_strlen(s) + 1);
	if (str == NULL)
		return (0);
	while (s[i] != '\0')
	{
		str[j] = f(i, s[i]);
		i++;
		j++;
	}
	str[j] = '\0';
	return (str);
}
