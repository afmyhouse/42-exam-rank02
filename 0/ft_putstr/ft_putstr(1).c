#include <unistd.h>
void	ft_putstr(char *str)
{
	char *ptrstr;
	ptrstr = str;
	while (*ptrstr)
	{
		write(1, ptrstr, 1);
		ptrstr++;
	}
}
/*int	main(void)
{
	char *str = "1234567890";
	ft_putstr(str);
	return (0);
}*/