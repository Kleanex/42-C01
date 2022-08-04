/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dosteine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 17:43:40 by dosteine          #+#    #+#             */
/*   Updated: 2022/07/19 09:38:16 by dosteine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	aa;

	aa = *a;
	*a = aa / *b;
	*b = aa % *b;
}
/*

int	main(void)
{
	int	a;	
	int	b;

	a = 105;
	b = 26;
	ft_ultimate_div_mod(&a, &b);
	printf("%d %d", a, b);
}
*/
