/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mienache <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/07 18:07:09 by mienache          #+#    #+#             */
/*   Updated: 2018/02/22 19:13:17 by mienache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

char			*ft_strdup(const char *s1)
{
	char	*copy;
	int		i;

	i = 0;
	if ((copy = (char *)ft_memalloc(sizeof(char) * (ft_strlen(s1) + 1))))
	{
		while (s1[i])
		{
			copy[i] = s1[i];
			i++;
		}
		return (copy);
	}
	if (copy)
		free(copy);
	return (NULL);
}
