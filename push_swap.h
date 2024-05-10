/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jparnahy <jparnahy@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 19:23:08 by jparnahy          #+#    #+#             */
/*   Updated: 2024/05/09 21:25:02 by jparnahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

/* -*-*-*-*-*-*-*-*- LIBs -*-*-*-*-*-*-*-*- */

# include <unistd.h>
# include <stdlib.h>
//# include "printf/ft_printf.h"
#include <stdio.h>

/* -*-*-*-*-*-*-*-*- STRUCTs -*-*-*-*-*-*-*-*- */

typedef struct s_stack
{
	int				value;
	unsigned int	i;
	struct s_stack	*next;
}	t_stack;

typedef struct s_data
{
	t_stack	*to_a;
	t_stack	*to_b;
}	t_data;

/* -*-*-*-*-*-*-*-*- FUNCTIONS PROTOTYPES -*-*-*-*-*-*-*-*- */

/* MAIN */

/* INIT */
int	is_repeated(char **v, int c);
int	is_integer(char *str);
int	on_range(char *str);
int	push_node(t_stack **pile, int value);
int	init(t_data *data, int c, char **v);

/* OP_UTILS */
int	ft_strlen(char *str);
int	ft_strcmp(char *s1, char *s2);

#endif
