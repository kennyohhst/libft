/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: code <code@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 19:06:28 by kkalika           #+#    #+#             */
/*   Updated: 2022/12/27 15:02:07 by code             ###   ########.fr       */
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
