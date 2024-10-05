/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoniof <antoniof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 12:04:36 by antoniof          #+#    #+#             */
/*   Updated: 2024/09/30 18:46:02 by antoniof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	initdest;
	size_t	destsize;
	size_t	i;

	initdest = ft_strlen(dest);
	destsize = ft_strlen(dest);
	i = 0;
	if (n <= destsize)
		return (n + ft_strlen(src));
	while (src[i] != '\0' && destsize < (n - 1))
	{
		dest[destsize] = src[i];
		destsize++;
		i++;
	}
	dest[destsize] = '\0';
	return (initdest + ft_strlen(src));
}
