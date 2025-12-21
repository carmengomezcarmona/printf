/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmgome <carmgome@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 15:33:33 by carmgome          #+#    #+#             */
/*   Updated: 2025/12/12 12:32:34 by carmgome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;

	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	i = 0;
	if (dst == src || n == 0)
		return (dst);
	if (!dst && !src)
		return (NULL);
	if (d < s)
		ft_memcpy(dst, src, n);
	else
	{
		i = n;
		while (i > 0)
		{
			i --;
			d[i] = s[i];
		}
	}
	return (dst);
}
