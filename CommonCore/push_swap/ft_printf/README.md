*This project has been created as part of the 42 curriculum by hde-albu.*

# Description

	Though not implementing the buffer management, the 'ft_printf()' will mimic the original 'libc printf()', where:

		• '%c' Prints a single character.
		• '%s' Prints a string (as defined by the common C convention).
		• '%p' The void * pointer argument has to be printed in hexadecimal format.
		• '%d' Prints a decimal (base 10) number.
		• '%i' Prints an integer in base 10.
		• '%u' Prints an unsigned decimal (base 10) number.
		• '%x' Prints a number in hexadecimal (base 16) lowercase format.
		• '%X' Prints a number in hexadecimal (base 16) uppercase format.
		• '%%' Prints a percent sign

	The logic that separates each '% place holder' happens in the 'int	ft_printf(const char *str, ...)' function, from there, from a collection of 'if/else if' statements, a functions is called acording to the char passed after the '%' sign.

# Instructions:

	This project includes a Makefile, therefore (in the terminal):
		•'make' will compile all the functions/header to the file libftprintf.a;
		•'make clean' will remove the generated .o files;
		•'make fclean' will run 'clean' and also remove the file libftprintf.a;
		•'make re' will delete everything and re-compile a new libftprintf.a;

# Resources:

	For the conclucion of this project, besides the help of the campus colleagues, were also used references from Stack Overflow, W3Schools. AI tools like Gemini, were used to generate inputs and edge cases for function testing, and a explanation of variadic functions in C.
