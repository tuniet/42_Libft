/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoniof <antoniof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 14:36:30 by antoniof          #+#    #+#             */
/*   Updated: 2024/10/04 14:46:48 by antoniof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_wrdcount(const char *s, char c)
{
	int	i;
	int	ret;

	ret = 0;
	i = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
			ret++;
		while (s[i] != c && s[i] != '\0')
			i++;
	}
	return (ret);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		len;
	char	**ret;

	i = ft_wrdcount(s, c);
	ret = (char **)malloc(sizeof(char *) * (i + 1));
	i = 0;
	if (!ret)
		return (NULL);
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s)
		{
			if (!ft_strchr(s, c))
				len = ft_strlen(s);
			else
				len = ft_strchr(s, c) - s;
			ret[i++] = ft_substr(s, 0, len);
			s += len;
		}
	}
	ret[i] = NULL;
	return (ret);
}
