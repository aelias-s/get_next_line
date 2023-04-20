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

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>
# include <stddef.h>
# include <fcntl.h>
# include <string.h>
# include <stddef.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

char	    *get_next_line(int fd);
char	    *ft_strchr(const char *s, int c);
size_t      ft_strlen(const char *str);
char	    *ft_strjoin(const char *s1, const char *s2);
char	    *ft_substr(const char *s, unsigned int start, size_t len);
char	    *ft_strdup(const char *s);
size_t	    ft_strlcat(char *dest, const char *src, size_t size);

#endif