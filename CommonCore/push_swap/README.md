*This project has been created as part of the 42 curriculum by hde-albu, andrcard.*

# PUSH_SWAP

## Description
- **Project goal:** Implement a program that sorts a list of integers using a limited set of stack operations. The objective is to output a sequence of operations that will sort the numbers while minimizing the total number of operations.
- **Overview:** This repository contains an implementation of the 42 "push_swap" project. It uses two stacks (commonly named `a` and `b`) and a set of operations (push, swap, rotate, reverse rotate) to reorder values. Several sorting strategies are implemented (small sort, radix sort, bucket sort, and turksort) to handle different input sizes and complexity.

- **Algorithms Justification:**
	### Choosing between the algorithms:
		- Lists with disorder <= 20%: Radix
		- Lists with disorder > 20% e <= 50%: Bucket
		- Lists with disorder > 50%: Turk

	### Bucket Sort with Window O(n^2)
	- Idea: Partition the ranks (1..len) into consecutive ranges (windows/buckets). Move elements from stack a to stack b window by window so b accumulates a near-sorted block for that range. After processing windows, move elements back to a in the correct order. It works by moving related items together. This reduces random rotations and keeps b partially ordered to make reassembly cheaper. Good for medium-sized inputs (50–300).
	
	### Radix Sort (binary based on ranks) O(n log n)
	- Idea: Sort by processing bits from least-significant to most-significant. For each pass (bit), partition elements between a and b according to that bit. Restore them and repeat for next bit. Using ranks (1..len) ensures contiguous and stable keys. Excellent for large inputs (≥ 300). Very costy for small lists.

	### Turksort (project-specific heuristic hybrid) 
	- Idea: A hybrid, target focused strategy, distance-to-top optimization, small-block direct sorts, and reverse ordering of b. Turksort is not a standard algorithm — it’s a name for a tailored approach that tries to minimize real move counts by exploiting local patterns. Use minimal rotations combining rotates or rotates into rr/rrr to bring the target to top.

## Instructions
- **Prerequisites:** `gcc`, `make` (standard Linux toolchain).


- **Compile:** run `make` in the project root. This builds the `push_swap` program.
```
$ make
```

- **Run:** execute the program with a sequence of integers as arguments:

```
$ ./push_swap 4 2 3 1
sa
ra
...
```

- **Cleaning:** typical Makefile targets available (for example `make fclean` or `make clean`) — check the repository `Makefile`.

## Files
- **Top-level:** `push_swap.h`, `push_swap.c`, `push_swap` (binary after build), `Makefile`.
- **Sorting implementations:** `ft_smallsort.c`, `ft_radixsort.c`, `ft_bucketsort.c`, `ft_turksort.c`.
- **Sources and helpers:** `sources/` (parsing, utils, ops, mini_lib, turk_utils).

- **Contributions**
	### hde-albu
	- Tiny_sort & Small_sort
	- Bucket sort
	- Radix sort

	### andrcard
	- Turk Sort
	- Int overflow
	- Benchmark function
	
	### Both
	- Rotate
	- Reverse Rotate
	- Push
	- Swap
	- Disorder calculation
	- Algorithm choice discussion 
	- Optimization
	- Code restructuring and cleanup
	- Debugging
	- Utils
	- Main function
	- Header
	- Makefile

## Resources

### 
- 42 School `push_swap` project subject and evaluation criteria (reference material provided by the curriculum).
- Classic references on algorithms and stacks: "Introduction to Algorithms", GeeksforGeeks articles on sorting algorithms and stack data structures.
- Online references for specific techniques: articles about Radix, Bucket and Turk.

- **AI usage:** We used AI tools to help draft this README and to explain the Logic for each Algorithm used in this project, and also to suggest small clarifications and documentation. All core algorithmic implementation and final code decisions were written and verified by us.
---
