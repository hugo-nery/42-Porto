*This project has been created as part of the 42 curriculum by hde-albu.*

# Description

	- This project's goal is to read an input from a 'fd' (File Descriptor) and handle it in a way that it'll return the first line (until '\n') and with a static variable save the remaining content to be handled the next time the function is called.

	- As per required by the project instructions, the file is read and processed after each time the read() was called, therefore treating the text already read before the end of the file (in case of a BUFFER smaller then the count of chars, of course). This way decreasing the amount of space the static variable will occupy in memory.

	- The actual filtering is done using the ft_strchr() function that will return NULL until it finds a '\n' in the static variable 'text' where the content from the read() buffer is saved, if the static variable has no line ('\n') then the function read() is called again. This process will repeat until there's a '\n' (line breaker) or the end of the file (fd) passed, read() will return (0);


# Instructions:

	At the header file a macro BUFFER_SIZE is definied, so the program can be compiled without passing this argument.

	To compile the function(s), and already execute:
	
	- For the mandatory part:

		- Without passing a Buffer:
			cc -Wall -Wextra -Werror get_next_line.c get_next_line_utils.c && ./a.out
		- Passing a Buffer:
			cc -Wall -Wextra -Werror -D BUFFER_SIZE=42 get_next_line.c get_next_line_utils.c && ./a.out

	- For the bonus part:

		- Without passing a Buffer:
			cc -Wall -Wextra -Werror get_next_line_bonus.c get_next_line_utils_bonus.c && ./a.out

		- Passing a Buffer:
			cc -Wall -Wextra -Werror -D BUFFER_SIZE=42 get_next_line_bonus.c get_next_line_utils_bonus.c && ./a.out


# Resources:

	- For the conclusion of this project, besides the help of greatest QA in the campus ddias-fe (Diogo Dias Ferreira) to fix a segfault no one could find, the help of the campus colleagues, and the use of functions from previous projects, were also used references from Stack Overflow, W3Schools, Linux man page.
	
	- AI tools like Gemini, were used to help to identify edge cases for functions testing, a tutorial do use GDB so I could debug line by line, and also to clarify the issues from Memory Leak and the importance of avoiding/treating it.
