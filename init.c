/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jparnahy <jparnahy@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 18:40:51 by jparnahy          #+#    #+#             */
/*   Updated: 2024/05/09 21:25:46 by jparnahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_repeated(char **v, int c)
{
	char	*temp;
	int		i;

	i = 0;
	while (--c > 0)
	{
		temp = v[c];
		i = c - 1;
		if (i == 0)
			break ;
		while (i > 0)
		{
			if (ft_strlen(temp) == ft_strlen(v[i]))
			{
				if (ft_strcmp(temp, v[i]) == 0)
					return (1);
			}
			i--;
		}
	}
	return (0);
}

int	is_integer(char *str)
{
	if (*str == '-' || *str == '+')
		str++;
	while (*str)
	{
		if (!(*str >= '0' && *str <= '9'))
			return (0);
		str++;
	}
	return (1);
}

int	on_range(char *str)
{
	long int	nbr;

	nbr = atol(str);
	if (nbr > 2147483647 || nbr < -214783648)
		return (0);
	return (1);
}

int	push_node(t_stack **pile, int value)
{
	t_stack	*new_node;

	new_node = ft_calloc(sizeof(t_stack), 1);
	if (new_node != NULL)
	{
		new_node->value = value;
		new_node->next = *pile;
		*pile = new_node;
		return (1);
	}
	return (0);
}

int	init(t_data *data, int c, char **v)
{
	if (c == 1)
	{
		write(2, "Error\n", 6);
		printf("sem argumentos\n");
		return (0);
	}
	if (is_repeated(v, c))
	{
		write(2, "Error\n", 6);
		printf("valores repetidos\n");
		return (0);
	}
	while (--c > 0)
	{
		if (!is_integer(v[c]))
		{
			write(2, "Error\n", 6);
			printf("nao inteiro\n");
			return (0);
		}
		if (!on_range(v[c]))
		{
			write(2, "Error\n", 6);
			printf("fora do range\n");
			return (0);
		}
		if (!push_node(&data->to_a, ft_atol(v[c])))
			return(0);

	}
	return (1);
}
