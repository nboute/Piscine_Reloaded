/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboute <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/02 14:21:57 by nboute            #+#    #+#             */
/*   Updated: 2016/11/02 14:58:06 by nboute           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *str)
{
	char	*dup;
	int		i;

	i = 0;
	dup = (char*)malloc(sizeof(char) * (ft_strlen(str) + 1));
	while (str[i])
	{
		dup[i] = str[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
