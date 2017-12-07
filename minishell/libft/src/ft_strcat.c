/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkis <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/15 16:55:01 by bkis              #+#    #+#             */
/*   Updated: 2017/05/15 16:55:02 by bkis             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *s1, char const *s2)
{
	char	*st1;
	int		i;

	i = 0;
	st1 = s1;
	while (*st1)
		st1++;
	while (s2[i])
	{
		*st1 = s2[i];
		st1++;
		i++;
	}
	*st1 = '\0';
	return (s1);
}
