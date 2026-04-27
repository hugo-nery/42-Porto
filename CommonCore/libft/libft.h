/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-albu <hde-albu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 13:33:18 by hde-albu          #+#    #+#             */
/*   Updated: 2026/04/27 16:12:03 by hde-albu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

/*Will return the pointer to the new node.*/
t_list	*ft_lstnew(void *content);
/*Will add the 'new' node to the front of the list.*/
void	ft_lstadd_front(t_list **lst, t_list *new);
/*Receives the first node and will return the count of nodes in the list.*/
int		ft_lstsize(t_list *lst);
/*Receives the first node and will return the
** pointer to the last node in the list.*/
t_list	*ft_lstlast(t_list *lst);
/*Will add the node 'new' to end of the list 'lst'.*/
void	ft_lstadd_back(t_list **lst, t_list *new);
/*Will delete the content of the node 'lst'.*/
void	ft_lstdelone(t_list *lst, void (*del)(void*));
/*Will run through the whole linked list deleting the
** content and freeing each node.*/
void	ft_lstclear(t_list **lst, void (*del)(void*));
/*Will run through the whole linked list appling
** the function 'f' for each.*/
void	ft_lstiter(t_list *lst, void (*f)(void *));
/*Will return the addres of a coppy of the passed
** list once the function 'f' has been aplied to all nodes.*/
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

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
/*Will copy 'n' bytes from memory area 'src' to 
** memory area 'dest' as if there was a 'temp' array.*/
void	*ft_memmove(void *dest, const void *src, size_t n);
/*Will copy n chars from the string src to dest.*/
int		ft_strlcpy(char *dst, const char *src, size_t size);
/*Will concatenate n chars from the string src to dest.*/
int		ft_strlcat(char *dst, const char *src, size_t size);
/*Will turn 'CAPITAL' into 'small' letter.*/
char	ft_tolower(int c);
/*Will turn 'small' letter to 'CAPITAL'.*/
char	ft_toupper(int c);
/*Will return a pointer to the first match. Or NULL if none.*/
char	*ft_strchr(const char *s, int c);

/*Will return a pointer to the last match. Or NULL if none.*/
char	*ft_strrchr(const char *s, int c);
/*Will return '-x' 0 '+x' after comparing n characters.*/
int		ft_strncmp(const char *s1, const char *s2, size_t n);
/*Will look the initial 'n' bytes of the memory area 
** pointed to by '*s' for the first instance of 'c'.*/
void	*ft_memchr(const void *s, int c, size_t n);
/*Will compare the first 'n' bytes (each interpreted as unsigned char)
** of the memory areas '*s1' and '*s2'.*/
int		ft_memcmp(const void *s1, const void *s2, size_t n);
/*Will return a pointer to first match of the string. Or NULL if none.*/
char	*ft_strnstr(const char *big, const char *sub, size_t len);
/*Will convert the begining of the string into a int.*/
int		ft_atoi(const char *str);

/*Will return a pointer to a new string which is
** a duplicate of the string '*str'.*/
char	*ft_strdup(const char *str);
/*Will allocate memory for an array of 'nmemb' elements
**of 'size' bytes each and return a pointer to the
**allocated memory. The memory is set to zero.*/
void	*ft_calloc(size_t nmemb, size_t size);

/*Will return a new 'sub' string of length 'len' starting at 'start'.*/
char	*ft_substr(char const *s, unsigned int start, size_t len);
/*Will return a new string with '*s2' joint to '*s1'.*/
char	*ft_strjoin(char const *s1, char const *s2);
/*Will use char/s in '*set' to clean a string's left and right.*/
char	*ft_strtrim(char const *s1, char const *set);
/*Will return an **arr, from one single string separated by 'c'.*/
char	**ft_split(char const *s, char c);
/*Will convert any 'int' to a string.*/
char	*ft_itoa(int n);
/*Will apply the function 'f' to each character of the string 's',
**passing its index as the first argument and
**the character itself as the second.*/
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
/*UMA BOSTAAAAAA*/
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
/*Will print the char 'c' to the specified file descriptor 'fd'.*/
void	ft_putchar_fd(char c, int fd);
/*Will output the string 's' to the specified file descriptor 'fd'.*/
void	ft_putstr_fd(char *s, int fd);
/*Will output the string 's' with a line break,
**to the specified file descriptor 'fd'.*/
void	ft_putendl_fd(char *s, int fd);
/*Will output the number 'n' to the specified file descriptor 'fd'.*/
void	ft_putnbr_fd(int n, int fd);

#endif