/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkalika <kkalika@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 18:58:58 by kkalika           #+#    #+#             */
/*   Updated: 2022/01/21 18:59:02 by kkalika          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_sign_neg(char sign)
{
	if (sign == '-')
		return (-1);
	else
		return (1);
}

int	ft_atoi(const char *str)
{
	char	*s;
	int		i;
	int		x;
	int		neg;

	s = (char *) str;
	i = 0;
	x = 0;
	neg = 1;
	while (s[i] && (s[i] == ' ' || (s[i] >= 9 && s[i] <= 13)))
		i++;
	if (s[i] && (s[i] == 43 || s[i] == 45))
	{
		neg = is_sign_neg(s[i]);
		i++;
	}
	while (s[i] && s[i] >= 48 && s[i] <= 57)
	{
		x = (x * 10) + (s[i] - 48);
		i++;
	}
	return (x * neg);
}
/*
int	main(void)
{
	char	x[] = "     ";
	printf("%d\n", atoi(x));
	printf("%d\n", ft_atoi(x));
	return (0);
}
*/