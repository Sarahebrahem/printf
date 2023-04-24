#include "main.h"

void print_buffer(char buffer[], int *buff_ind);

/**
 * _printf - Printf function
 * @format: format.
 * Return: Printed chars.
 */
int _printf(const char *format, ...)
{
	int i, printed = 0, printed_chars = 0;
	int flags, width, precision, size, buff_ind = 0;
	va_list list;
	char buffer[BUFF_SIZE];

	if (format == NULL)
		return (-1);
<<<<<<< HEAD
	va_start(list, format);
=======

	va_start(list, format);

>>>>>>> 716c088d20dab0559da2621cfacf31b8be34707f
	for (i = 0; format && format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			buffer[buff_ind++] = format[i];
			if (buff_ind == BUFF_SIZE)
				print_buffer(buffer, &buff_ind);
<<<<<<< HEAD
=======
			/* write(1, &format[i], 1);*/
>>>>>>> 716c088d20dab0559da2621cfacf31b8be34707f
			printed_chars++;
		}
		else
		{
			print_buffer(buffer, &buff_ind);
			flags = get_flags(format, &i);
			width = get_width(format, &i, list);
			precision = get_precision(format, &i, list);
			size = get_size(format, &i);
			++i;
			printed = handle_print(format, &i, list, buffer,
				flags, width, precision, size);
			if (printed == -1)
				return (-1);
			printed_chars += printed;
		}
	}

	print_buffer(buffer, &buff_ind);
<<<<<<< HEAD
	va_end(list);
	return (printed_chars);
}
=======

	va_end(list);

	return (printed_chars);
}

>>>>>>> 716c088d20dab0559da2621cfacf31b8be34707f
/**
 * print_buffer - Prints the contents of the buffer if it exist
 * @buffer: Array of chars
 * @buff_ind: Index at which to add next char, represents the length.
 */
void print_buffer(char buffer[], int *buff_ind)
{
	if (*buff_ind > 0)
		write(1, &buffer[0], *buff_ind);
<<<<<<< HEAD
=======

>>>>>>> 716c088d20dab0559da2621cfacf31b8be34707f
	*buff_ind = 0;
}
