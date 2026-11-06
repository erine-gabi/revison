/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erinribe <erinribe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 10:36:55 by erinribe          #+#    #+#             */
/*   Updated: 2026/11/06 21:06:53 by erinribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void    *ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*pdst;
	char	*psrc;
	size_t	i;

	i = 0;
    psrc = (char *)src; //14
	pdst = (char *)dst; //10
	while (i < n)
	{
		pdst[i] = psrc[i]; 
		i++;
	}
	return (dst);
}

int main()
{
	int x = 0;
	int y = 10;
		

	char s[] = "abcdefghi";
	char d[] = "qqqqqqqqq";

	ft_memcpy(&x, s, 2);
}