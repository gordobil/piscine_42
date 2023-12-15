
#include <unistd.h>

#include <unistd.h>

int	main(int argc, char **argv)
{
	argc = 1;
	*argv = "hola";
	write(1, "z", 1);
	return (0);
}
