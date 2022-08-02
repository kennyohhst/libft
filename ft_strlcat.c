/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkalika <kkalika@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 19:06:56 by kkalika           #+#    #+#             */
/*   Updated: 2022/01/21 19:06:57 by kkalika          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dest;
	size_t	i;
	size_t	hoi;

	i = 0;
	dest = ft_strlen(dst);
	hoi = dest;
	if (dstsize == 0 || dest >= dstsize)
		return (dstsize + ft_strlen(src));
	while (src[i] != 0 && hoi < (dstsize - 1))
	{
		dst[hoi] = src[i];
		hoi++;
		i++;
	}
	dst[hoi] = '\0';
	return ((dest + ft_strlen(src)));
}

// int	main(void)
// {
// 	char	x[7] = "ban";
// 	char	q[7] = "12345";
// 	char	o[7] = "ban";
// 	char	p[7] = "12345";
// 	printf("%lu\n", ft_strlcat(x, q, 7));
// 	printf("%s\n", x);
// 	printf("%lu\n", strlcat(o, p, 7));
// 	printf("%s\n", o);
// 	printf("%d\n", x[4]);
// }
