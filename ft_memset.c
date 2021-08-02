#include "libft.h"

void	*ft_memset(void *b, int c, size_t count)
{
	char *str;

	str = b;
	while(count)
	{
		*str = (unsigned char)c;
		str++;
		count--;
	}
	return(b);
}

int	main(void)
{
	char str[50];

	strcpy(str, "Bonjour mes bros c'est LRB");
	puts(str);
	
	ft_memset(str, 'i', 8);
	puts(str);

	return(0);
}
