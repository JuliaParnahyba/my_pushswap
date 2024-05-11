/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_libft.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jparnahy <jparnahy@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 18:55:57 by jparnahy          #+#    #+#             */
/*   Updated: 2024/05/10 19:56:39 by jparnahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s1[i] && s2[j])
	{
		if (s1[i] != s2[j])
			return (1);
		i++;
		j++;
	}
	return (0);
}

long int	ft_atol(char *str)
{
	long int	nbr;
	int			i;
	int			sig;

	nbr = 0;
	i = 0;
	sig = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sig = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
		nbr = nbr * 10 + (str[i++] - '0');
	return (nbr * (long int)sig);
}

void	ft_bzero(void *dest, size_t n)
{
	unsigned char		*to_dest;

	to_dest = (unsigned char *)dest;
	while (n > 0)
	{
		*to_dest = 0;
		to_dest++;
		n--;
	}
}

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	full_size;
	char	*ptr;

	full_size = nmemb * size;
	ptr = (void *)malloc(full_size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, full_size);
	return (ptr);
}
