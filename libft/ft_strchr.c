/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mienache <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/05 18:23:19 by mienache          #+#    #+#             */
/*   Updated: 2018/02/22 19:06:47 by mienache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

char	*ft_strchr(const char *str, int c)
{
	int		i;
	char	*oana;

	i = 0;
	oana = (char *)str;
	while (oana[i])
	{
		if (oana[i] == c)
			return (&oana[i]);
		i++;
	}
	if (oana[i] == c)
		return (&oana[i]);
	return (NULL);
}
