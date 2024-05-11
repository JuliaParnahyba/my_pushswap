/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_push.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jparnahy <jparnahy@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 20:41:48 by jparnahy          #+#    #+#             */
/*   Updated: 2024/05/10 21:34:48 by jparnahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_all(t_stack *pile)
{
	t_stack	*tmp;
	t_stack	*top;

	top = pile;
	while (top)
	{
		tmp = top;
		top = top->next;
		free(tmp);
	}
}
