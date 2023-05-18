#include	<unistd.h>
#include	<stdio.h>

void	alpha_mirror(char *str)
{
	char c;
	char *l_rev = "zyxwvutsrqponmlkjihgfedcba";
	char *h_rev = "ZYXWVUTSRQPONMLKJIHGFEDCBA";
	//char *h_rev = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	if (str)
	{
		while (*str)
		{
			c = *str;
			//printf("++%d\n", *str);
			if (*str > 96 && *str < 123)
				c = l_rev[*str - 97];
			else if ( *str > 64 && *str < 91)
				c = h_rev[*str - 65];
			else
				c = *str;
			write(1, &c, 1);
			str++;
		}
	}
	return;
}
int	main(int argc, char **argv)
{
	char *str = "My horse is Amazing.";
	//char c;
	//printf("%i\n", argc);
	if (argc == 2)
		alpha_mirror(argv[1]);
	//c = '\n';
	write(1, "\n", 1);
	return (0);
}