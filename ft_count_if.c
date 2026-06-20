int ft_count_if(char **tab, int length, int(*f)(char*))
{
	int i;
	int count;

	i = 0;
	while (tab[i])//while (i < length)
	{
		if (f(tab[i]))
		{
			count++;
		}
		i++;
	}
	return (count);
}
