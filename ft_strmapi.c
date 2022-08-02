/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkalika <kkalika@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 15:25:53 by kkalika           #+#    #+#             */
/*   Updated: 2022/02/13 15:25:09 by kkalika          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*nstr;

	if (!s || !f)
		return (NULL);
	i = 0;
	nstr = (char *) malloc(ft_strlen(s) + 1);
	if (!nstr)
		return (NULL);
	while (s[i] != '\0')
	{
		nstr[i] = (*f)(i, s[i]);
		i++;
	}
	nstr[i] = '\0';
	return (nstr);
}

// int	main(void)
// {
// 	// printf("%c\n", bla(1, 'a'));
// 	char	*x = "abcd";
// 	printf("%s\n", ft_strmapi(x, &bla));
// 	return (0);
// }
