/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psanz-pa <psanz-pa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 12:10:32 by psanz-pa          #+#    #+#             */
/*   Updated: 2024/07/23 17:12:52 by psanz-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include "struct.h"
# include <unistd.h>
# include <stdlib.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <stdio.h>

# define BUFFER	10000000000

void		error(void);
void		error_map(void);
void		ft_clean(char **map);
void		ft_clean_map(t_map map);
void		ft_putstr(char *str);
void		ft_putchar(char c);
void		print_map(t_map map);

int			ft_initialize(int argc, char *argv);
int			ft_validate(char **array_map, t_map map);
int			ft_check_values(char **array_map, t_map map);
int			ft_check_len(char **array_map);
int			get_size(t_square square);
int			check_valid_square(t_map map, t_square square);
int			ft_size(char *dictpath, int *file);
int			ft_strlen(char *str);
int			ft_len_printable(char *str);
int			ft_is_printable(char c);
int			ft_is_number(char c);
int			ft_is_whitespace(char c);
int			ft_atoi(char *str);
int			get_col_size(char **matrix);
int			get_row_size(char **matrix);

char		**ft_split(char *str);
char		**ft_read_file(char *dictpath);
char		**ft_read(void);
char		*ft_strdup(char *src);
char		**ft_copy_map(char **array_map);

t_map		ft_get(int argc, char *argv);
t_map		ft_resolv_map(t_map map);
t_map		paint_square(t_map map, t_square square);
t_square	find_square(t_map map, t_square square, int x_init, int y_init);

#endif