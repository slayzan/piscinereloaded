/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: humarque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 17:43:56 by humarque          #+#    #+#             */
/*   Updated: 2018/11/07 18:47:30 by humarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *tab;
	int i;

	i = 0;
	if(min >= max)
		return (0);
	tab = (int *)malloc(sizeof(int) * max - min);
	while (i < max)
	{
		tab[i] = min;
		min++;
		i++;
	}
	return (tab);
}
