/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-albu <hde-albu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 13:33:18 by hde-albu          #+#    #+#             */
/*   Updated: 2026/04/22 13:10:09 by hde-albu         ###   ########.fr       */
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
/*Will fill  the  first  'n'  bytes of '*s' with '\0'.*/
void	ft_bzero(void *s, size_t n);

/*Will copy 'n' bytes from memory area 'src' to memory area 'dest'.*/
void	*ft_memcpy(void *dest, const void *src, size_t n);
/*Will copy 'n' bytes from memory area 'src' to memory area 'dest' as if there was a 'temp' array.*/
void	*ft_memmove(void *dest, const void *src, size_t n);
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
/*Will return '-x' 0 '+x' after comparing n characters.*/
int		ft_strncmp(const char *s1, const char *s2, size_t n);
/*Will look the initial 'n' bytes of the memory area pointed to by '*s' for the first instance of 'c'.*/
void	*ft_memchr(const void *s, int c, size_t n);
/*Will compare the first 'n' bytes (each interpreted as unsigned char) of the memory areas '*s1' and '*s2'.*/
int		ft_memcmp(const void *s1, const void *s2, size_t n);
/*Will return a pointer to first match of the string. Or NULL if none.*/
char	*ft_strnstr(const char *big, const char *sub, size_t len);
/*Will convert the begining of the string into a int.*/
int		ft_atoi(const char *str);

/*Will return a pointer to a new string which is a duplicate of the string '*str'.*/
char	*ft_strdup(const char *str);
/*Will allocate memory for an array of 'nmemb' elements of 'size' bytes each 
and return a pointer to the allocated memory. The memory is set to zero.*/
void	*ft_calloc(size_t nmemb, size_t size);

/*Will return a new 'sub' string of length 'len' starting at 'start'.*/
char	*ft_substr(char const *s, unsigned int start, size_t len);
/*Will return a new string with '*s2' joint to '*s1'.*/
char	*ft_strjoin(char const *s1, char const *s2);
/**/
char	*ft_strtrim(char const *s1, char const *set);
/**/
char **ft_split(char const *s, char c);

#endif