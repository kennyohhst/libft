/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkalika <kkalika@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 19:07:45 by kkalika           #+#    #+#             */
/*   Updated: 2022/02/11 16:49:36 by kkalika          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*rstr;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	if (ft_strlen(s) <= start)
		return (ft_strdup(""));
	if (len >= ft_strlen(s + start))
		len = ft_strlen(s + start);
	if (!s)
		return (NULL);
	rstr = (char *) malloc(len + 1);
	if (!rstr)
		return (NULL);
	ft_strlcpy(rstr, s + start, len + 1);
	return (rstr);
}

// int	main(void)
// {
// 	char	*str;
// 	char	*nstr;

// 	str = "";
// 	nstr = ft_substr(str, 3, 3);
// 	printf("%s\n", nstr);
// 	printf("%d\n", nstr[3]);
// 	return (0);
// }