/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkalika <kkalika@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 19:04:49 by kkalika           #+#    #+#             */
/*   Updated: 2022/01/21 19:04:50 by kkalika          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*dest;
	char	*sauce;
	size_t	i;

	dest = (char *) dst;
	sauce = (char *) src;
	i = 0;
	if (sauce != NULL || dest != NULL)
	{
		if (n != 0)
		{	
			while (n != i)
			{
				dest[i] = sauce[i];
				i++;
			}
		}
	}
	return (dst);
}

// int	main(void)
// {
// 	char	q[10] = "1234567";
// 	char	q1[10];

// 	ft_memcpy(q1, q, 7);
// 	printf("%s\n", q1);

// 	char	x[210] = "1234567";
// 	char	x1[10];

// //	printf("%s\n", x);

// 	memcpy(x1, x, 7);

// 	printf("%s\n", x1);

// 	return (0);
// }