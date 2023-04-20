/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelias-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 10:24:06 by aelias-s          #+#    #+#             */
/*   Updated: 2023/03/30 12:13:12 by aelias-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

char	*ft_str_ini(char *str)
{
	if (str)
		return (str);
	return ("");
}

char	*ft_find_rest(char *buf)
{
	char	*rest;

	rest = ft_strchr(buf, '\n');
	if (!rest)
		return (NULL);
	rest = ft_substr(rest, 1, ft_strlen(rest) - 1);
	return (rest);
}

char	*get_next_line(int fd)
{
	char			*buf;
	int				buf_len;
	static char		*rest = NULL;
	char			*line;

	line = ft_strjoin(ft_str_ini(line), ft_str_ini(rest));
	buf = (char *)malloc(sizeof(char) * BUFFER_SIZE + 1);
	if (!buf)
		return (NULL);
	buf_len = read(fd, buf, BUFFER_SIZE);
	rest = ft_find_rest(buf);
	while (!rest && buf_len)
	{
		line = ft_strjoin(line, buf);
		buf_len = read(fd, buf, BUFFER_SIZE);
		rest = ft_find_rest(buf);
	}
	if (buf_len)
	{
		line = ft_strjoin(line, ft_substr(buf, 0, BUFFER_SIZE - ft_strlen(rest)));
		return (line);
	}
	free (buf);
	return (NULL);
}

/*
Falta finiquitar el tema de la última linea. Comprueba que el buf_len
 sea 0 pero que line no este vacía (creo) olvitade de las lineas. Siempre se puede meter
 un hachazo. El tema de los digitos feos que se escriben al principio entiendo que 
 nos dara problema pero tu centrate en que salga todo el texto hasta el final.

 Tienes el git de markel y unos 200 en github tranquilamente.
 Mira muy bien el código antes de tocar cualquier cosa.
 Un beso manin.
 */