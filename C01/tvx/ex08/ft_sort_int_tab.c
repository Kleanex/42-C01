/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dosteine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 19:37:16 by dosteine          #+#    #+#             */
/*   Updated: 2022/08/01 15:21:44 by dosteine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	*ft_sort_int_tab(int *tab, int size)
{
	int i;
	int j;
	int k;

	i = 0;
	j = 0;

	while (i < size)
	{
		while (j < size)
		{
			if (tab[j] > tab[j + 1] && j < size -1)
			{
				k = tab[j];
				tab[j] = tab [j + 1];
				tab[j + 1] = k;
			}
			j++;
		}
		j = 0;
		i++;
	}
	return(tab);
}	


int main ()
{
	int	tab[] = { 78,10, 15, 65, 23 };
	int i = 0;
	int s = 5;

	printf("Tableau avt tri :\n");
	while (i < s)
	{
		printf("%d, \n", tab[i]);
		i++;
	}
	ft_sort_int_tab(tab, 5);
	

		printf("Tableau apres tri :\n");
	i = 0;
	while (i < s)
	{
		printf("%d, \n", tab[i]);
		i++;
	}

	return (0);
}
