/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mienache <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/06 17:39:19 by mienache          #+#    #+#             */
/*   Updated: 2017/12/13 16:29:11 by mienache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*a;

	a = (char*)s;
	i = 0;
	while (i < n)
	{
		a[i] = 0;
		i++;
	}
	s = a;
}
