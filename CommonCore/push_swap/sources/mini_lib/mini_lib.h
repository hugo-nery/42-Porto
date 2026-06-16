/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mini_lib.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-albu <hde-albu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/09 19:31:44 by andrcard          #+#    #+#             */
/*   Updated: 2026/06/12 17:39:50 by hde-albu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINI_LIB_H
# define MINI_LIB_H

# include <stdlib.h>
# include <unistd.h>

int		ft_abs(int nb);
int		ft_atoi(const char *str);
int		ft_isdigit(int c);
void	ft_putnbr_fd(int n, int fd);
void	ft_putstr_fd(char *s, int fd);
char	**ft_split(char const *s, char c);
int		ft_sqrt_prox(int nb);
int		ft_strcmp(const char *s1, const char *s2);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
void	ft_free(int i, char **arr);

#endif