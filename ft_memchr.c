/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkalika <kkalika@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 19:02:52 by kkalika           #+#    #+#             */
/*   Updated: 2022/01/21 19:02:53 by kkalika          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*ss;
	size_t	i;

	i = 0;
	ss = (char *) s;
	while (i < n)
	{
		if (ss[i] == (char) c)
			return (&ss[i]);
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	char	z[] = "pointing";

	printf("%p\n", ft_memchr(z, 111, 10));
	printf("%p\n", memchr(z, 111, 10));
	return (0);
}
*/
