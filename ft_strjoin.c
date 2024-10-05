/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoniof <antoniof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 14:35:54 by antoniof          #+#    #+#             */
/*   Updated: 2024/09/30 15:19:31 by antoniof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ret;
	size_t	i;
	size_t	s1len;

	s1len = ft_strlen(s1);
	ret = (char *)malloc(sizeof(char) * (s1len + ft_strlen(s2) + 1));
	if (ret == NULL)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		ret[i] = s1[i];
		i++;
	}
	while (s2[i - s1len] != '\0')
	{
		ret[i] = s2[i - s1len];
		i++;
	}
	ret[i] = '\0';
	return (ret);
}
