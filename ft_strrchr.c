/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkalika <kkalika@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 19:07:27 by kkalika           #+#    #+#             */
/*   Updated: 2022/01/21 19:07:28 by kkalika          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		slen;
	char	*ss;

	ss = (char *) s;
	slen = ft_strlen(ss);
	while (slen >= 0)
	{
		if (ss[slen] == (char) c)
			return (&ss[slen]);
		slen--;
	}
	return (0);
}

// int	main(void)
// {
// 	// char	*p = "boinkie";
// 	// char	*x = "boinkie";

// 	// printf("%s\n", ft_strrchr(p, 'i'));
// 	// printf("%s\n", strrchr(x, 'i'));

// 			char	*src = "abbbbbbbb";

// 			char	*d1 = strrchr(src, 'a');
// 			char	*d2 = ft_strrchr(src, 'a');
// 	printf("%s\n", d1);
// 	printf("%s\n", d2);
// 	return (0);
// }