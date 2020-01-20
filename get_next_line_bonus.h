/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phperrot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 13:23:00 by phperrot          #+#    #+#             */
/*   Updated: 2019/12/04 13:23:03 by phperrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	ifndef __GET_NEXT_LINE_BONUS_H
#	define __GET_NEXT_LINE_BONUS_H
#	include <unistd.h>
#	include <fcntl.h>
#	include <stdlib.h>
#	ifndef BUFFER_SIZE
#	define BUFFER_SIZE 42
#	endif

int				get_next_line(const int fd, char **line);
size_t			ft_strlen(const char *s);
char			*ft_strchr(const char *s, int c);
char			*ft_strdup(const char *s1);
char			*ft_strjoin(char const *s1, char const *s2);
char			*ft_strsub(char *str, int start, int len);

#	endif
