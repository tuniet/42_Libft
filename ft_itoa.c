/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoniof <antoniof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 14:36:49 by antoniof          #+#    #+#             */
/*   Updated: 2024/10/04 15:02:41 by antoniof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_pow(int n, int e)
{
	int		i;
	int		aux;

	i = 1;
	aux = n;
	while (i < e)
	{
		aux = aux * n;
		i++;
	}
	return (aux);
}

static int	ft_getlen(int n)
{
	int				len;
	unsigned int	aux;

	len = 1;
	aux = n;
	if (n < 0)
	{
		aux = -aux;
		len++;
	}
	while (aux >= 10)
	{
		len++;
		aux = aux / 10;
	}
	return (len);
}

static void	ft_save_nbr(char *ret, int n, unsigned int aux, int len)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		aux = -aux;
		ret[i++] = '-';
		len--;
	}
	while (--len > 1)
	{
		n = aux / ft_pow(10, len - 1);
		ret[i++] = n + 48;
		aux = aux - (ft_pow(10, len - 1) * n);
	}
	ret[i++] = aux + 48;
	ret[i] = '\0';
}

char	*ft_itoa(int n)
{
	char			*ret;
	unsigned int	aux;
	int				len;

	aux = n;
	len = ft_getlen(aux) + 1;
	ret = (char *)malloc(sizeof(char) * len);
	if (ret == NULL)
		return (NULL);
	ft_save_nbr(ret, n, aux, len);
	return (ret);
}
