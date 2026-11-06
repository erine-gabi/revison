/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erinribe <erinribe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 12:13:48 by erinribe          #+#    #+#             */
/*   Updated: 2026/11/05 11:08:40 by erinribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
//#include "libft.h"

size_t ft_strlen(const char *str)
{
	int i;
	
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
    size_t sizesrc = ft_strlen(src);
	size_t i = 0;

	if (size == 0)
        return (sizesrc);
	if (size > 0)
	{
		while ( i < size - 1 && src[i] != '\0')
			{
                dst[i] = src[i];
                i++;
            }
        dst[i] = '\0';
	}
    return (sizesrc);
}

#include <stdio.h>
//#include "libft.h"

int	main(void)
{
	char	dst[3];
	size_t	len;

	len = ft_strlcpy(dst, "coucou", sizeof(dst));
	printf("dst = %s\n", dst);
	printf("len = %zu\n", len);
	return (0);
}