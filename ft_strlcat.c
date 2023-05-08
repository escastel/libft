/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escastel <escastel@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 11:20:57 by escastel          #+#    #+#             */
/*   Updated: 2023/05/03 12:19:51 by escastel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t	i;
	size_t	j;

	if (n == 0)
		return (ft_strlen(src));
	i = 0;
	while (dst[i] && i < n)
		i++;
	j = 0;
	while (src[j] != '\0' && (i + j) < (n - 1))
	{
		dst[i + j] = src[j];
		j++;
	}
	if (i < n)
	{
		dst[i + j] = '\0';
	}
	return (i + ft_strlen(src));
}
