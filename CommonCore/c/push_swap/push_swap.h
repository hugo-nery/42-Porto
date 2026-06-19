/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-albu <hde-albu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/12 20:48:43 by hde-albu          #+#    #+#             */
/*   Updated: 2026/05/16 12:01:48 by hde-albu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "./sources/mini_lib/mini_lib.h"
# include <limits.h>

/* Macro definition */
# define BENCH_MARK "--bench"
# define STRA_SIMPLE "--simple"
# define STRA_MEDIUM "--medium"
# define STRA_COMPLEX "--complex"
# define STRA_ADAPTIVE "--adaptive"

/* node onde serão guardados os numeros*/
typedef struct s_stack
{
	int				content;
	int				rank;
	int				position;
	int				cost_a;
	int				cost_b;
	int				total_cost;
	struct s_stack	*target_node;
	struct s_stack	*next;
}					t_stack;

/* Struct onde serão guardados os dados da benchmark*/
typedef struct s_bench
{
	int		on_off;
	char	*strategy;
	size_t	len;
	double	dis;
	int		total_moves;
	int		pa;
	int		pb;
	int		rra;
	int		rrb;
	int		rrr;
	int		ra;
	int		rb;
	int		rr;
	int		sa;
	int		sb;
	int		ss;
}			t_bench;

/* utils_lists */
t_stack	*ft_node_new(int number);
t_stack	*ft_stack_last(t_stack *stack);
int		ft_stack_delall(t_stack *head);
void	ft_stack_addfront(t_stack **stack, t_stack *node);
void	ft_stack_addback(t_stack **stack, t_stack *node);
size_t	ft_stack_size_print(t_stack *stack, int true_false);

/* parsing */
int		ft_no_dup(t_stack *stack);
int		is_valid_number(char **args);
int		ft_atoi_overflow(char *str, int *final_result);
t_stack	*main_parsing(char **argv, t_bench *bench);

/* benchmark */
void	ft_bench_initiate(t_bench *bench);
void	ft_polish_strategy(t_bench *bench, char *adap_strategy);
void	ft_print_benchmark(t_bench *bench);
void	ft_print_benchmark_moves(t_bench *bench);

/*stratey_selector*/
void	ft_strategy_selector(int *this_argc, char ***this_argv, t_bench *bench);

/*compute_disorder*/
double	ft_compute_disorder(t_stack *stack_a);
int		ft_is_ordered(t_stack *stack_a);

/*target_turk*/
int		ft_get_target_node_a(t_stack **stack_a, t_stack **stack_b);
t_stack	*ft_get_target_node_b(t_stack **stack_b, int rank_a);

/*utils_turk*/
int		ft_set_rank(t_stack *stack_a);
int		ft_find_positions(t_stack **stack_a);
t_stack	*ft_find_cheapest_node(t_stack *stack_a);
t_stack	*ft_get_target_node_b(t_stack **stack_b, int rank_a);
int		ft_add_targets(t_stack **stack_a, t_stack **stack_b);
int		ft_calculate_cost(t_stack **stack_a, t_stack **stack_b);

/* sorting */
t_stack	*ft_find_smallest(t_stack *stack);
void	ft_min_to_top(t_stack **stack_a, t_bench *bench);
int		ft_tinysort(t_stack **stack_a, t_bench *bench);
int		ft_smallsort(t_stack **stack_a, t_stack **stack_b, t_bench *bench);
void	ft_bucket_to_a(t_stack **stack_a, t_stack **stack_b, t_bench *bench);
int		ft_bucketsort(t_stack **stack_a, t_stack **stack_b, t_bench *bench);
int		ft_turksort(t_stack **stack_a, t_stack **stack_b, t_bench *bench);
int		ft_radixsort(t_stack **stack_a, t_stack **stack_b, t_bench *bench);

/*(swap a): Swap the first two elements at the top of stack a.*/
int		sa(t_stack **stack_a, t_bench *bench);

/*(swap b): Swap the first two elements at the top of stack b.*/
int		sb(t_stack **stack_b, t_bench *bench);

/*(sa and sb) at the same time.*/
int		ss(t_stack **stack_a, t_stack **stack_b, t_bench *bench);

/*(push a): Take the first element at the top of 'b' 
and put it at the top of 'a'.*/
int		pa(t_stack **stack_a, t_stack **stack_b, t_bench *bench);

/*(push b): Take the first element at the top of a and put it at the top of b.*/
int		pb(t_stack **stack_b, t_stack **stack_a, t_bench *bench);

/*(rotate a): Shift up all elements of stack a by one. The first 
element becomes the last.*/
int		ra(t_stack **stack_a, t_bench *bench);

/*(rotate b): Shift up all elements of stack b by one. 
The first element becomes the last.*/
int		rb(t_stack **stack_b, t_bench *bench);

/*(ra and rb) at the same time.*/
int		rr(t_stack **stack_a, t_stack **stack_b, t_bench *bench);

/* (reverse rotate a): Shift down all elements of stack a by one. 
The last element becomes the first one*/
int		rra(t_stack **stack_a, t_bench *bench);

/* (reverse rotate b): Shift down all elements of stack b by one. 
The last element becomes the first one*/
int		rrb(t_stack **stack_b, t_bench *bench);

/*(rra and rrb) at the same time.*/
int		rrr(t_stack **stack_a, t_stack **stack_b, t_bench *bench);

#endif