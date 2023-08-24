#include <unistd.h>
void ft_putnbr(int nb);

void ft_putnbr(int nb)
{ 
	char NB = (char)nb;
	write(1,&NB,1);
}

int main()
{ 
	ft_putnbr(42);
	
	ft_putnbr(10000);
}
