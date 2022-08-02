/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkalika <kkalika@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 19:01:59 by kkalika           #+#    #+#             */
/*   Updated: 2022/01/21 19:02:00 by kkalika          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
/* 
int	main(void)
{
	unsigned char	potat;

	potat = "-1";
	printf("%d\n", isdigit(potat));
	printf("%d\n", ft_isdigit(potat));
	return (0);
}
*/