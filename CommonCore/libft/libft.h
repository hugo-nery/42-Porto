/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-albu <hde-albu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 13:33:18 by hde-albu          #+#    #+#             */
/*   Updated: 2026/04/20 22:35:19 by hde-albu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

/*Will return 1 if True, 0 if False.*/
int		ft_isalpha(int c);
/*Will return 1 if True, 0 if False.*/
int		ft_isdigit(int c);
/*Will return 1 if True, 0 if False.*/
int		ft_isalnum(int c);
/*Will return 1 if True, 0 if False.*/
int		ft_isascii(int c);
/*Will return 1 if True, 0 if False.*/
int		ft_isprint(int c);
/*Will return the string length.*/
size_t	ft_strlen(const char *str);
/*Will fill  the  first  'n'  bytes of '*s' with the constant byte 'c'.*/
void	*ft_memset(void *s, int c, size_t n);
/**/
void ft_bzero(void *s, size_t n);

/**/
/**/
/*Will copy n chars from the string src to dest.*/
int		ft_strlcpy(char *dst, const char *src, size_t size);
/*Will concatenate n chars from the string src to dest.*/
int		ft_strlcat(char *dst, const char *src, size_t size);
/*Will turn Capital into Small letter.*/
char	ft_tolower(int c);
/*Will turn Small letter to Capital.*/
char	ft_toupper(int c);
/*Will return a pointer to the first match. Or NULL if none.*/
char	*ft_strchr(const char *s, int c);

/*Will return a pointer to the last match. Or NULL if none.*/
char	*ft_strrchr(const char *s, int c);
/*Will return a pointer to first match of the string. Or NULL if none.*/
char	*ft_strnstr(const char *big, const char *sub, size_t len);
/*Will return '-x' 0 '+x' after comparing n characters.*/
int		ft_strncmp(const char *s1, const char *s2, size_t n);
/*Will convert the begining of the string into a int.*/
int		ft_atoi(const char *str);

#endif