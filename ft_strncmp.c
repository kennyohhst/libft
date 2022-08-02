/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkalika <kkalika@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 19:07:14 by kkalika           #+#    #+#             */
/*   Updated: 2022/01/21 19:07:15 by kkalika          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*one;
	unsigned char	*two;
	size_t			i;
	int				c;

	one = (unsigned char *) s1;
	two = (unsigned char *) s2;
	i = 0;
	while (i < n)
	{
		if (one[i] == '\0' && two[i] == '\0')
			return (0);
		if (one[i] != two[i])
			return (c = (one[i] - two[i]));
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	char	q[] = "";
// 	char	w[] = "12345";
// 	printf("%d\n", ft_strncmp(q, w, 7));

// 	char	z[] = "";
// 	char	x[] = "12345";
// 	printf("%d\n", strncmp(z, x, 7));

// 			char	*s1 = "\0";
// 			char	*s2 = "\200";

// 			int		i2 = ft_strncmp(s1, s2, 6);
// 			int		i1 = strncmp(s1, s2, 6);
// 			printf("%d\n", i2);
// 			printf("%d\n", i1);
//    return (0);
// }