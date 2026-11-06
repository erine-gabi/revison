/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erinribe <erinribe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 20:12:29 by erinribe          #+#    #+#             */
/*   Updated: 2026/11/06 21:13:17 by erinribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
void	*ft_memmove(void *dest, void *src, size_t n)
{
	char	*pdst;
	char	*psrc;
	size_t	i;

	i = n - 1;
	psrc = (char *)src;
	pdst = (char *)dest;
	while (i < n)
	{
		pdst[i] = psrc[i];
		i--;
	}
	return (dest);
}

int main()
{
	int *tab = {4, 4};
	char s[] = "abcdefghi";
	//char s[] = "ababcdehi";
	ft_memmove(s + 2, s, 4);
}

