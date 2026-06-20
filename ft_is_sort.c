/*
 * la fonction prend en argument une fonction de cmp de 2 int. On lui donne donc 2 int consecutif de tab a checker. negatif si a < b, 0 si a == b, positif si a > b. Donc on parcourt tab en verifiant pour chaque int consecutif si < 0 ou > 0, et on initialise la variable si c'est le cas. En gros la variable reste a 1 jusqu'a ce qu'une condition de comparaison soit vrai.
 *
 */

int ft_is_sort(int *tab, int length, int(*f)(int, int))
{
	int i;
	int asc;//suppose tri ascendant
	int desc;//suppose tri descendant

	i = 0;
	asc = 1;
	desc = 1;
	while (i < length - 1)//- 1 car on ne compare a rien le dernier element
	{
		if (f(tab[i], tab[i + 1]) < 0)//check si tri asc
		{
			asc = 0;
		}
		if (f(tab[i], tab[i + 1] > 0))//check si tri desc
		{
			desc = 0;
		}
		i++;
	}
	return (asc || desc);
}
