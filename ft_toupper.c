/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkalika <kkalika@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 19:07:57 by kkalika           #+#    #+#             */
/*   Updated: 2022/01/21 19:07:58 by kkalika          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c < 'a' || c > 'z')
		return (c);
	else
		return (c - 32);
}
/*
int	main(void)
{
	printf("%c\n", ft_toupper('a'));
	printf("%c\n", toupper('a'));
	return (0);
}
*/
