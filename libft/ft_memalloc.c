/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mienache <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/08 16:23:03 by mienache          #+#    #+#             */
/*   Updated: 2018/02/22 20:14:12 by mienache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memalloc(size_t n)
{
	unsigned char	*s;
	size_t			i;

	i = 0;
	if ((s = (unsigned char*)malloc(n)))
	{
		while (i < n)
		{
			s[i] = 0;
			i++;
		}
		return (s);
	}
	return (NULL);
}
