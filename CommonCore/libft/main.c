/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-albu <hde-albu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 16:28:19 by hde-albu          #+#    #+#             */
/*   Updated: 2026/04/27 16:19:21 by hde-albu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <stdio.h>
#include "libft.h"

void ft_putstr(char *str)
{
	ft_putstr_fd(str, 1);
	write(1, "\n", 1);
}

void	ft_maiscula(unsigned int x, char *c)
{
	x = 0;
	if (c[x] >= 'a' && c[x] <= 'z' )
		c[x] = (c[x]) - 32;
	write(1, &c[x], 1);
}

void *ft_strupper(void *content)
{
	size_t i;
	char *str;

	str = ft_strdup((char *) content);
	if (!str)
		return NULL;
	
	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z' )
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}

void ft_delcontent(void *content)
{
	printf("\nNode '%s' is being deleted!", (char *)content);
	free(content);
}


int main(int argc, char **argv)
{
	// char str[100];
	char **av;
	// av = argv;
	
	if (argc < 2)
	{
		printf("\nForgotX inputX\n");

		// printf("%s\n", (char *)ft_calloc(5, sizeof(char)));
	}
	else if (argc == 3)
	{
		// printf("%d\n", ft_strncmp(argv[1], argv[2], atoi(argv[3])));
		// printf("%s\n", ft_strnstr(argv[1], argv[2], atoi(argv[3])));
		// printf("%d\n", ft_atoi(argv[1]));
		// printf("%s", ft_strchr(argv[1], *argv[2]));
		// printf("%s", ft_strrchr(argv[1], *argv[2]));
		
		// printf("str = %s\n", str);
		
		// ft_bzero(str, ft_atoi(argv[1]));
		
		// ft_memset(str, *argv[1], ft_atoi(argv[2]));
		// str[ft_atoi(argv[2])] = '\0';
		
		// ft_memcpy(dest, argv[1], ft_strlen(argv[1]) + 1);
		
		// ft_strlcpy(str, "42-is-cool", 20);
		// printf("%s\n\n", str);

		// printf("before = %s\n", str);
		// ft_memmove(str, argv[1], ft_atoi(argv[2]));
		// printf("after = %s\n", str);

		// printf ("%d\n", ft_memcmp(argv[1], argv[2], ft_atoi(argv[3])));
		
		// ft_strlcpy(str, "123456789", 10);
		// ft_memmove(&str[2], str, 5);
		// printf("dest = %s\n", str);

		// printf("%s\n", ft_substr(argv[1], ft_atoi(argv[2]), ft_atoi(argv[3])));

		// printf("%s\n", ft_strjoin(argv[1], argv[2]));

		// printf("%s", ft_strtrim(argv[1], argv[2]));

		// av = ft_split(argv[1], argv[2][0]);	
		// while (*av)
		// 	printf("%s\n", *(av++));
		
		// printf("%s\n", ft_itoa(ft_atoi(argv[1])));

		// printf("%s", ft_strmapi(argv[1], &ft_coco));
		
		// ft_strlcpy(str, argv[1], 20);

		// ft_striteri(str,);
		
		// ft_striteri(argv[1], &ft_maiscula);

		// ft_strlcat(argv[1], "\n", ft_strlen(argv[1]) + 2);
		
		// ft_putstr_fd(argv[1], 1);printf("%d\n", ft_strncmp(argv[1], argv[2], atoi(argv[3])));
		// printf("%s\n", ft_strnstr(argv[1], argv[2], atoi(argv[3])));
		// printf("%d\n", ft_atoi(argv[1]));
		// printf("%s", ft_strchr(argv[1], *argv[2]));
		// printf("%s", ft_strrchr(argv[1], *argv[2]));
		
		// printf("str = %s\n", str);
		
		// ft_bzero(str, ft_atoi(argv[1]));
		
		// ft_memset(str, *argv[1], ft_atoi(argv[2]));
		// str[ft_atoi(argv[2])] = '\0';
		
		// ft_memcpy(dest, argv[1], ft_strlen(argv[1]) + 1);
		
		// ft_strlcpy(str, "42-is-cool", 20);
		// printf("%s\n\n", str);

		// printf("before = %s\n", str);
		// ft_memmove(str, argv[1], ft_atoi(argv[2]));
		// printf("after = %s\n", str);

		// printf ("%d\n", ft_memcmp(argv[1], argv[2], ft_atoi(argv[3])));
		
		// ft_strlcpy(str, "123456789", 10);
		// ft_memmove(&str[2], str, 5);
		// printf("dest = %s\n", str);

		// printf("%s\n", ft_substr(argv[1], ft_atoi(argv[2]), ft_atoi(argv[3])));

		// printf("%s\n", ft_strjoin(argv[1], argv[2]));

		// printf("%s", ft_strtrim(argv[1], argv[2]));

		av = ft_split(argv[1], argv[2][0]);	
		
		while (*av)
		{
			while (**av)
			{
				printf("%c", ft_tolower(**av));
				(*av)++;
			}
			printf("\n");
			av++;
		}			
		
		// printf("%s\n", ft_itoa(ft_atoi(argv[1])));

		// printf("%s", ft_strmapi(argv[1], &ft_coco));
		
		// ft_strlcpy(str, argv[1], 20);

		// ft_striteri(str,);
		
		// ft_striteri(argv[1], &ft_maiscula);

		// ft_strlcat(argv[1], "\n", ft_strlen(argv[1]) + 2);
		
		// ft_putstr_fd(argv[1], 1);
		// ft_putendl
		// ft_putendl_fd(argv[1], 1);

		// ft_putnbr_fd(ft_atoi(argv[1]), 1);

	}
	else
	{
		t_list *my_list = NULL;

		char *content = NULL;
		char text[50];
		int i = 0;
		while (i < 5)
		{
			ft_strlcpy(text, "Node", 8);
			ft_strlcat(text, ft_itoa(i), 10);
			content = ft_strdup(text);
			ft_lstadd_back(&my_list, ft_lstnew(content));
			i++;
		}
		printf("\n - %d nodes at 'my_list'.\n", ft_lstsize(my_list));
		ft_lstiter(my_list, (void *)&ft_putstr);

		char *test = ft_strdup("test");
		ft_lstadd_front(&my_list, ft_lstnew(test));

		printf("\n - %d nodes at 'my_list'.\n", ft_lstsize(my_list));
		ft_lstiter(my_list, (void *)&ft_putstr);

		printf("\n-last node: %s\n", (char *)ft_lstlast(my_list)->content);

		t_list *atual = my_list;
		while (atual->next->next != NULL)
			atual = atual->next;
		
		if(ft_lstlast(my_list) == atual->next)
			printf ("\n%s == %s\n", (char *)ft_lstlast(my_list)->content, (char *)atual->next->content);
		ft_lstdelone(atual->next, &ft_delcontent);
		atual->next = NULL;

		/* ft_lstdelone(ft_lstlast(my_list), &ft_delcontent);*/
		//will delete the last, but the second to last will still point to it,
		//so it'll seg fault because the address exist but the node is gone!

		printf("\n\n - %d nodes at 'my_list'.\n", ft_lstsize(my_list));
		ft_lstiter(my_list, (void *)&ft_putstr);

		t_list *copy_lst;
		copy_lst = ft_lstmap(my_list, &ft_strupper ,&ft_delcontent);
		ft_lstadd_back(&copy_lst, ft_lstnew("hugo"));

		ft_lstclear(&my_list, &ft_delcontent);

		printf("\n\n - %d nodes at 'my_list'.\n", ft_lstsize(my_list));
		ft_lstiter(my_list, (void *)&ft_putstr);

		printf("\n - %d nodes at 'copy_lst'.\n", ft_lstsize(copy_lst));
		ft_lstiter(copy_lst, (void *)&ft_putstr);

		printf ("\n\nThat was Linked List, so maybe not enough args maybe!?\n");
	}
	return 0;
}