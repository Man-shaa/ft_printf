#include "printf.h"
#include <stdio.h>

int	main(void)
{
	char			c = 'M';
	char			*s2 = NULL;
	unsigned int	ui_max = 4294967295;
	int				i_min = -23;
	int				*ptr;
	char			*s3 = " Avec son sabre de merde ";

	printf("	: %d\n", ft_printf("Random int : %i", 123456789));
	printf("	: %d\n\n", printf("Random int : %i", 123456789));

	printf("	: %d\n", ft_printf("%d", 0));
	printf("	: %d\n\n", printf("%d", 0));

	printf("	: %d\n", ft_printf("int min : %d", i_min));
	printf("	: %d\n\n", printf("int min : %d", i_min));

	printf("	: %d\n", ft_printf("int max : %d", 2147483647));
	printf("	: %d\n\n", printf("int max : %d", 2147483647));

	printf("	: %d\n", ft_printf("Unsigned int max : %u", ui_max));
	printf("	: %d\n\n", printf("Unsigned int max : %u", ui_max));

	printf("	: %d\n", ft_printf("2 pour100 'c' : %c%c", c, '9'));
	printf("	: %d\n\n", printf("2 pour100 'c' : %c%c", c, '9'));

	printf("	: %d\n", ft_printf("String : %s %s %s", "Yasuo\tc'est un champ de fdp.", s3, "Nikemouk"));
	printf("	: %d\n\n", printf("String : %s %s %s", "Yasuo\tc'est un champ de fdp.", s3, "Nikemouk"));

	printf("	: %d\n", ft_printf("String nulle : %s", s2));
	printf("	: %d\n\n", printf("String nulle : %s", s2));

	printf("	: %d\n", ft_printf("Hexa en maj : %X", 2756783));
	printf("	: %d\n\n", printf("Hexa en maj : %X", 2756783));

	printf("	: %d\n", ft_printf("Hexa en min : %x", 7));
	printf("	: %d\n\n", printf("Hexa en min : %x", 7));
	
	printf("	: %d\n", ft_printf("Char in int %i", 'j'));
	printf("	: %d\n\n", printf("Char in int %i", 'j'));
	
	printf("	: %d\n", ft_printf("%% Je suis un %%"));
	printf("	: %d\n\n", printf("%% Je suis un %%"));

	printf("	: %d\n", ft_printf("%%%%%%"));
	printf("	: %d\n\n", printf("%%%%%%"));

	printf("	: %d\n", ft_printf("%p", ptr));
	printf("	: %d\n\n", printf("%p", ptr));
	
	// plusieurs % d'affiles ne fonctionne pas, ca prend que le premier en compte en le repetant
	return (0);
}