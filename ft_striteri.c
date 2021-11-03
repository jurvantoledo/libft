/* 
	Deze functie vraagt dus in principe:
	Iedere keer dat hij over s heen telt vraagt hij om functie f
	want striteri wijst naar adres van andere functie.
*/

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}
