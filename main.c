/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelias-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 10:34:07 by aelias-s          #+#    #+#             */
/*   Updated: 2023/03/30 11:45:04 by aelias-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "get_next_line.h"

int	main (void)
{
	int fd = open("arc.txt", O_RDONLY);
	if (fd == -1)
	{
		printf("ERROR, no se ha podido leer el archivo.txt");
		return (0);
	}
	
	char *line;
	while ((line = get_next_line(fd)))
	{
		printf("%s", line);
		free(line);
	}
	
/*
char *str = get_next_line(fd);
printf("%s\n", str);
*/
	close(fd);
	return (0);
}
