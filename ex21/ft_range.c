/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboute <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/02 14:47:06 by nboute            #+#    #+#             */
/*   Updated: 2016/11/02 22:01:30 by nboute           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		i;
	int		*tab;

	i = 0;
	if (min >= max)
		return (void*)(0);
	tab = (int*)malloc(sizeof(int) * (max - min));
	while (min < max)
		tab[i++] = min++;
	return (tab);
}
