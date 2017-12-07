/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_min.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkis <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/15 19:53:53 by bkis              #+#    #+#             */
/*   Updated: 2017/05/15 19:53:54 by bkis             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_min(int a[], int n)
{
	int i;
	int min;

	i = 0;
	min = a[0];
	while (i < n)
	{
		if (a[i] < min)
			min = a[i];
		i++;
	}
	return (min);
}
