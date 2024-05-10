/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jparnahy <jparnahy@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 18:36:20 by jparnahy          #+#    #+#             */
/*   Updated: 2024/05/09 21:06:18 by jparnahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int c, char **v)
{
	t_data	data;

	data.to_a = NULL;
	data.to_b = NULL;
	if (!init(&data, c, v))
		return (1);
	return (0);
}
