/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkalika <kkalika@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 19:06:52 by kkalika           #+#    #+#             */
/*   Updated: 2022/01/21 19:06:53 by kkalika          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*nstr;
	size_t	i;
	size_t	t_len;

	if (!s1 || !s2)
		return (NULL);
	i = 0;
	t_len = ft_strlen(s1) + ft_strlen(s2);
	nstr = (char *) malloc(t_len + 1);
	if (nstr == NULL)
		return (nstr);
	while (*s1 != '\0')
	{
		*nstr = *(char *) s1;
		s1++;
		nstr++;
	}
	while (*s2 != '\0')
	{
		*nstr = *(char *) s2;
		s2++;
		nstr++;
	}
	*nstr = '\0';
	return (nstr - t_len);
}

// int	main(void)
// {
// 	char	*str1;
// 	char	*str2;
// 	char	*str3;
// 	str1 = "123";
// 	str2 = "456";
// 	str3 = ft_strjoin(str1, str2);
// 	printf("%s\n", str3);
// 	printf("%c\n", str3[6]);
// 	printf("%zu\n", ft_strlen(str3));
// 	return (0);
// }