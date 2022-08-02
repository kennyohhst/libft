/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkalika <kkalika@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 14:49:31 by kkalika           #+#    #+#             */
/*   Updated: 2022/02/19 14:15:19 by kkalika          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**ft_free(char **str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		free(str[i]);
		i++;
	}
	free(str);
	return (NULL);
}

static size_t	wordlen(char *stringy, char delm)
{
	size_t	county;
	size_t	ai;

	ai = 0;
	county = 0;
	while (stringy[ai] == delm && stringy[ai] != '\0')
		ai++;
	while (stringy[ai] != delm && stringy[ai] != '\0')
	{
		county++;
		ai++;
	}
	return (county);
}

static size_t	countwords(char *string, char dlm)
{
	size_t	count;
	size_t	i;

	i = 0;
	count = 0;
	while (string[i] != '\0')
	{
		while (string[i] == dlm)
			i++;
		if (string[i] != dlm && string[i] != '\0')
			i++;
		if (string[i] == dlm)
			count++;
		if (string[i] == '\0' && string[(i - 1)] != dlm && dlm != 0)
			count++;
	}
	return (count);
}

static char	**ft_putwords(char *string, char delimiter, char **new_string)
{
	int	i;
	int	wl;
	int	x;

	x = 0;
	wl = 0;
	i = 0;
	while (x < (int) countwords((char *) string, delimiter))
	{
		while (string[i] == delimiter && string[i] != '\0')
			i++;
		if (string[i] != delimiter && string[i] != '\0')
		{
			wl = wordlen((string + i), delimiter);
			new_string[x] = ft_substr(string, i, wl);
		}
		if (!new_string[x])
			return (ft_free(new_string));
		x++;
		i = i + wl;
	}
	new_string[x] = 0;
	return (new_string);
}

char	**ft_split(char const *s, char c)
{
	char	**nstr;

	if (!s)
		return (NULL);
	nstr = (char **) malloc(((countwords((char *) s, c) + 1) * sizeof(char *)));
	if (!nstr)
		return (NULL);
	ft_putwords((char *) s, c, nstr);
	return (nstr);
}

// int	main(void)
// {
// 	char	*str;
// 	char	dl;
// 	str = ".bla.boink.silent.cow.aword.hi.";
// 	dl = '.';
// 	char	**stringbla = ft_split(str, dl);
// 	printf("%s\n", stringbla[0]);
//     // printf("%s\n", stringbla[1]);
//     // printf("%s\n", stringbla[2]);
//     // printf("%s\n", stringbla[3]);
//     // printf("%s\n", stringbla[4]);
//     // printf("%s\n", stringbla[5]);
// 	// printf("%zu\n", countwords(str, dl));
// 	// printf("%zu\n", wordlen(str, dl));
//     system("leaks a.out");
// 	return (0);
// }