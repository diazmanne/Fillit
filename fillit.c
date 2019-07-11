/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lusanche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 11:08:47 by lusanche          #+#    #+#             */
/*   Updated: 2019/07/11 13:04:02 by lusanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include <fcntl.h>

int		main(int argc, char **argv)
{
	if (argc != 2)
	{
		write(1, "usage\n", 6);
		return (0);
	}
	int		fd;
	char	buf[BUFF_SIZE + 1];
	int		n;
	
	fd = open(argv[1], O_RDONLY, 0);
	ft_putnbr(fd);
	ft_putstr("\n");
	n = read(fd, buf, BUFF_SIZE);
	ft_putnbr(n);
	ft_putstr("\n");
	buf[n] = '\0';
	ft_putstr(buf);
	return (0);
}
