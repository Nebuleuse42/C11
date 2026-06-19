/* Prendre :

    un tableau d’int → int *tab(pointeur sur int)

    sa taille → int length

    une fonction à appliquer(via un pointeur sur fonction) → void (*f)(int)

Initialiser un index i = 0.

Tant que i < length :
a. Appeler la fonction passée en paramètre :
→ f(tab[i])
b. Incrémenter i.
*/

void ft_foreach(int *tab, int length, void(*f)(int))
{
	int i;

	i = 0;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}

//la variable length sert de point d'arret comme un \0, car les arrays n'en possede pas comme les string.
