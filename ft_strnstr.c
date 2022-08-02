/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkalika <kkalika@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 19:07:18 by kkalika           #+#    #+#             */
/*   Updated: 2022/01/21 19:07:19 by kkalika          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*h;
	size_t	i;
	size_t	c;

	h = (char *) haystack;
	i = 0;
	if (*needle == '\0')
		return (h);
	while (h[i] != '\0' && i < len)
	{
		c = 0;
		while (h[i + c] == needle[c] && i + c < len)
		{
			c++;
			if (needle[c] == '\0')
				return (h + i);
		}
		c = 0;
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	// char	s[] = "1234567";
// 	// char	d[] = "1";
// 	// printf("%s\n", ft_strnstr(s, d, 21));
// 	// printf("%s\n", strnstr(s, d, 21));
// 			// 	char	*s1 = "aaabcabcd";
// 			// char	*s2 = "aaabc";
// 			// size_t	max = strlen(s2);
// 	// 		char	*empty = "";
// 	// printf("%s\n", strnstr(empty, "hoi", -1));
// 	// printf("%s\n", ft_strnstr(empty, "hoi", -1));
// 	char *s1 = "aaaabcabcd";
// 	char *s2 = "abcd";
// 	// size_t max = strlen(s2);
// 	char *i1 = strnstr(s1, s2, 10);
// 	char *i2 = ft_strnstr(s1, s2, 10);
// 	printf("%s\n", i1);
// 	printf("%s\n", i2);

// 	return (0);
// }