/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkalika <kkalika@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 18:59:29 by kkalika           #+#    #+#             */
/*   Updated: 2022/01/21 18:59:31 by kkalika          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned long int	i;
	char				*iampointerstring;

	iampointerstring = (char *) s;
	i = 0;
	while (i < n)
	{
		iampointerstring[i] = '\0';
		i++;
	}
}
/*
int	main(void)
{
	char	boink[] = "boinky";
	int	i = 0;

	printf("%s\n", boink);
	ft_bzero(boink, 2);
	printf("%d\n", boink[i]);
	return (0);
}
*/
