/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dosteine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 19:37:16 by dosteine          #+#    #+#             */
/*   Updated: 2022/07/23 08:15:53 by dosteine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void 	ft_rev_int_tab(int *tab, int size)
{
	int i;
	int a;

	i = 0;
	while (i < size)
	{
		a = tab[size];
		tab[size] = tab [size -i];
		tab [size -i] = a;
		i++;
	}
}

int main ()
{
	int size;
	int	tab[] = { 10, 15, 78, 65, 23 };
	
	size = 5; 
	printf("%d", ft_rev_int_tab (tab, size));
	return (0);
}
