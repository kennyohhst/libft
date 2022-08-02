/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkalika <kkalika@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 19:05:19 by kkalika           #+#    #+#             */
/*   Updated: 2022/02/14 15:53:35 by kkalika          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned long int	i;
	char				*iampointerstring;

	iampointerstring = (char *) b;
	i = 0;
	while (i < len)
	{
		iampointerstring[i] = c;
		i++;
	}
	return (b = iampointerstring);
}
/*
int	main(void)
{
	char	potato[] = "pee";

	printf("%s", memset(potato, 'w', 1));
	printf("%s", ft_memset(potato, 'w', 1)); 
	return (0);
}
*/
