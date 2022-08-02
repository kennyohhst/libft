/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkalika <kkalika@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 19:05:05 by kkalika           #+#    #+#             */
/*   Updated: 2022/01/21 19:05:06 by kkalika          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*dest;
	char	*sauce;
	size_t	i;

	dest = (char *) dst;
	sauce = (char *) src;
	i = 0;
	if (dst == NULL && src == NULL)
		return (NULL);
	if (sauce > dest)
	{
		while (i < len)
		{
			dest[i] = sauce[i];
			i++;
		}
	}
	while (i < len)
	{
		dest[len - 1] = sauce[len - 1];
		len--;
	}
	return (dst = dest);
}
/*
int	main(void)
{
	char	q[20] = "1234567";
	char	x[20] = "1234567";

	ft_memmove(q + 2, q + 3, 3);
	memmove(x + 2, x + 3, 3);
	printf("%s\n", q);
	printf("%s\n", x);
	return (0);
}
*/
