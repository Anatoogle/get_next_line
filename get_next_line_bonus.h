/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asemykin <asemykin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 12:50:30 by asemykin          #+#    #+#             */
/*   Updated: 2024/12/13 12:50:39 by asemykin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

# include <fcntl.h>
# include <limits.h>
# include <stdio.h>
# include <stdlib.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>

char	*get_next_line(int fd);
char	*ft_set_first_chunk(int fd, char *str_long, char **buffer_tmp);
char	*ft_read_line(int fd, char *str_long, char **buffer_tmp, size_t *len);
char	*ft_split_end(char *str_long);
char	*ft_set_last_to_first_chunk(char *str_startchunk);
char	*ft_combine(const char *str_chunk, int byte, char *str_long,
			size_t *len);
int		ft_strchr(const char *s, int c);
size_t	ft_strlen(const char *s);
char	*ft_strdup(const char *s, size_t byte_len);
void	ft_bzero(void *s, size_t n);

#endif
