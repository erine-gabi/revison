/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erinribe <erinribe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 10:11:01 by erinribe          #+#    #+#             */
/*   Updated: 2026/11/05 12:08:37 by erinribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlen(const char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	sizetot = ft_strlen(dst) + ft_strlen(src);
	size_t	i = 0;

	while (dst[i] < size - 1)
		dst[i] = +dst[i];
	return (dst);
	while (src[i] < size - 1)
	{
		src[i] = +src[i];
//		if (dst[i] is NULL)
	}
}
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
/* get the original length of src */
   size_t	sizesrc = ft_strlen(src);
/* get the original length of dst */
   size_t	sizedst = ft_strlen(dst);
   size_t	sizetotl = ft_strlen(src + dst);
   /* if the length of dst is equal to dstsize */
   if (sizedst == sizesrc)
/* simply return the the length of dst + the length of src */
		return (sizedst + sizesrc);
//if dstsize is big enough to accomodate both src and dst
   if (sizedst >= sizetotl - 1)
   /* concatenate src at the end of dst */
		
   /* else, concatenate dstsize character maximum */
   return (/* length of src + length of dst */);
	}
//#include <stdio.h>
/* int	main(void)
{
	char	dst[12];
	size_t	len;

	len = ft_strlcat("salut", "coucou", sizeof(dst));
	printf("dst = %s\n", dst);
	printf("len = %zu\n", len);
	return (0);
}*/