/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: surkim <surkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 18:48:29 by surkim            #+#    #+#             */
/*   Updated: 2023/04/03 17:46:22 by surkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 3
# endif

# include <stdlib.h>
# include <fcntl.h>
# include <unistd.h>

typedef struct s_list{
	int				fd;
	char			*str;
	struct s_list	*next;
}t_list;

char	*get_next_line(int fd);
char	*ft_strdup(const char *s1);
char	*ft_strjoin(char *s1, char *s2, size_t s1_len, size_t s2_len);
char	*ft_strchr(char *s, int c);
t_list	*find_fd_list(int fd, t_list **head);
char	*ft_free(t_list **list, char **s1, char *s2, int fd);

#endif