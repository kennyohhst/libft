/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkalika <kkalika@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 19:07:01 by kkalika           #+#    #+#             */
/*   Updated: 2022/01/21 19:07:02 by kkalika          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	while (i < (dstsize - 1) && dstsize > 0 && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	if (dstsize != 0)
		dst[i] = '\0';
	return (ft_strlen(src));
}

// int	main(void)
// {
// // 	// char	w[40] = "1234567890";
// // 	// char	c[40] = "";

// // 	// printf("%lu\n", ft_strlcpy(w, c, 15));
// // 	// printf("%s\n", c);

// // 	// char	x[40] = "1234567890";
// // 	// char	q[40] = "";

// // 	// printf("%zu\n", strlcpy(x, q, 15));
// // 	// printf("%s\n", q);
// 			char	*str = "BBBB";
// 			char	buff1[0xF00];
// 			char	buff2[0xF00];
// 			memset(buff1, 'A', 20);
// 			memset(buff2, 'A', 20);		
// 			printf("%zu\n", strlcpy(buff1, str, sizeof(buff1)));
// 			printf("%zu\n", ft_strlcpy(buff2, str, sizeof(buff2)));			
// printf("%s\n", buff1);
// printf("%s\n", buff2);			
// 	return (0);
// }