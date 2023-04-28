/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escastel <escastel@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 11:20:57 by escastel          #+#    #+#             */
/*   Updated: 2023/04/26 17:00:31 by escastel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static size_t	ft_strlen(const char *s)
{
	int	c;

	c = 0;
	while (s[c] != '\0')
		c++;
	return (c);
}

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

/*
#include <stdio.h>

int	main(void)
{
	char *src;
	src	= "defghijklmnopqrst";
	char dst[10] = "abc";
	size_t	dstsize = 10;
	printf("src: %s  dst: %s\n", src, dst);
	size_t z = ft_strlcat(dst, src, dstsize);
	printf("%s\n", dst);
	printf("%zu", z);
	return (0);
}*/
