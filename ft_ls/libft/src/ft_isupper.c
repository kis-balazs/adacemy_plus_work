/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkis <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/11 12:49:39 by bkis              #+#    #+#             */
/*   Updated: 2017/03/11 12:49:40 by bkis             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isupper(int c)
{
	int ret;

	ret = 0;
	if (c >= 'A' && c <= 'Z')
		ret = 1;
	else
		ret = 0;
	return (ret);
}
