/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: humarque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 14:44:35 by humarque          #+#    #+#             */
/*   Updated: 2018/11/07 15:21:05 by humarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "display.h"

int		main(int argc, char **argv)
{
	int		ret;
	int		fd;
	char	buf[BUF_SIZE + 1];

	if (argc < 2)
		ft_putstr("File name missing");
	else if (argc > 2)
		ft_putstr("Too many arguments");
	else
	{
		fd = open(argv[1], O_RDONLY);
		while ((ret = read(fd, buf, BUF_SIZE)))
		{
			buf[ret] = '\0';
			ft_putstr(buf);
		}
		if (close(fd) == -1)
			return (-1);
	}
	return (0);
}
