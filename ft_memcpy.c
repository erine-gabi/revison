/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erinribe <erinribe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 10:36:55 by erinribe          #+#    #+#             */
/*   Updated: 2026/11/06 18:41:44 by erinribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void    *ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*pdst;
	char	*psrc;
	size_t	i;

	if ( dst == NULL && src  == NULL)
		return (dst);
    psrc = (char *)src;
	pdst = (char *)dst;
	while (i < n - 1 && pdst[i] != '\0')
	{
		pdst[i] = psrc[i];
		i++;
	}
	return (dst);
}
