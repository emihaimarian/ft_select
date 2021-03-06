/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mienache <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/14 15:43:40 by mienache          #+#    #+#             */
/*   Updated: 2018/01/07 15:11:39 by mienache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

int	ft_reverse(int n)
{
	int r;

	r = 0;
	while (n)
	{
		r = r * 10 + n % 10;
		n /= 10;
	}
	return (r);
}
