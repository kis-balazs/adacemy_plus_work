/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   evt_ctrl_p.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkis <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/07 13:50:54 by bkis              #+#    #+#             */
/*   Updated: 2017/07/07 13:50:55 by bkis             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "termcaps.h"

void	evt_ctrl_p(t_memory *sh)
{
	if (sh->state == HGL || !sh->cb.buf)
		return ;
	cb_paste_internal(sh);
}
