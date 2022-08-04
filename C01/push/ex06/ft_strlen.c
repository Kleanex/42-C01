/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dosteine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 19:14:58 by dosteine          #+#    #+#             */
/*   Updated: 2022/07/19 09:56:09 by dosteine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	j;

	j = 0;
	while (str [j] != '\0')
		j++;
	return (j);
}
/*
#include<stdio.h>

int	main(void)
{
	char	*str;

	str = "dsgame37";
	printf("%d", ft_strlen(str));
}*/
