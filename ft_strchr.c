/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkalika <kkalika@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 19:06:28 by kkalika           #+#    #+#             */
/*   Updated: 2022/01/21 19:06:29 by kkalika          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(char *s, int c)
{
	int	i;
	int	slen;

	i = 0;
	slen = ft_strlen(s);
	while (i <= slen)
	{
		if (s[i] == (char) c)
			return (&s[i]);
		i++;
	}
	return (0);
}

/*
int	main(void)
{
	char	i[] = "hello";
	char	p[] = "hello";

	printf("%s\n", ft_strchr(p, 111));
	printf("%s\n", strchr(i, 111));
	return (0);
}
*/
