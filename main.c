/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jparnahy <jparnahy@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 18:36:20 by jparnahy          #+#    #+#             */
/*   Updated: 2024/05/10 21:32:05 by jparnahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	in_order(t_stack *pile)
{
	if (!pile)
		return (1);
	while (pile->next)
	{
		if (pile->value > pile->next->value)
			return (0);
		pile = pile->next;
	}
	return (1);
}

int	main(int c, char **v)
{
	t_data	data;

	data.to_a = NULL;
	data.to_b = NULL;
	if (!init(&data, c, v))
		return (1);
	if (in_order(data.to_a))
	{
		free_all(data.to_a);
		return (0);
	}
	return (0);
}
