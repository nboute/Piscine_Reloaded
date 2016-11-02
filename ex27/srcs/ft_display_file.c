/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboute <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/02 16:40:53 by nboute            #+#    #+#             */
/*   Updated: 2016/11/02 20:03:16 by nboute           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_putstr_std(short std, char *str)
{
	write(std, str, ft_strlen(str));
}

void	ft_open_read(char *fn)
{
	int		fd;
	int		ret;
	char	buf[16];

	fd = open(fn, O_RDONLY);
	if (fd == -1)
		return ;
	while ((ret = read(fd, buf, 16)))
	{
		buf[ret] = '\0';
		ft_putstr_std(1, buf);
	}
}

int		main(int ac, char **av)
{
	if (ac == 1)
		ft_putstr_std(2, "File name missing.\n");
	else if (ac >= 3)
		ft_putstr_std(2, "Too many arguments.\n");
	else
		ft_open_read(av[1]);
	return (0);
}
