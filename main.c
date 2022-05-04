#include "printf.h"
#include <stdio.h>
#include <limits.h> 

int	main(void)
{
	char	c = 'M';
	char	*s2 = NULL;
	char	str[] = "";
	char	s3[] = " Avec son sabre de merde ";

	printf("		----------------------------------TESTS POUR 'd'----------------------------------------\n\n");
	
	printf("	: %d\n", ft_printf("Random int : %i", 123456789));
	printf("	: %d\n\n", printf("Random int : %i", 123456789));

	printf("	: %d\n", ft_printf("Char en int 'j' (106) : %i", 'j'));
	printf("	: %d\n\n", printf("Char en int 'j' (106) : %i", 'j'));

	printf("	: %d\n", ft_printf("%d", 0));
	printf("	: %d\n\n", printf("%d", 0));

	printf("	: %d\n", ft_printf("int min : %d", INT_MIN));
	printf("	: %d\n\n", printf("int min : %d", INT_MIN));

	printf("	: %d\n", ft_printf("int max : %d", INT_MAX));
	printf("	: %d\n\n", printf("int max : %d", INT_MAX));

	printf("		----------------------------------TESTS POUR 'u'----------------------------------------\n\n");
	
	printf("	: %d\n", ft_printf("Unsigned int max : %u", UINT_MAX));
	printf("	: %d\n\n", printf("Unsigned int max : %u", UINT_MAX));

	printf("	: %d\n", ft_printf("Random unsigned int : %u", -1235));
	printf("	: %d\n\n", printf("Random unsigned int : %u", -1235));

	printf("		----------------------------------TESTS POUR 'c'----------------------------------------\n\n");

	printf("	: %d\n", ft_printf("2 char : %c%c", c, '9'));
	printf("	: %d\n\n", printf("2 char : %c%c", c, '9'));

	printf("	: %d\n", ft_printf("char M + 256 : %c", c + 256));
	printf("	: %d\n\n", printf("char M + 256 : %c", c + 256));

	printf("	: %d\n", ft_printf("char 65 (A) : %c", 65));
	printf("	: %d\n\n", printf("char 65 (A) : %c", 65));

	printf("		----------------------------------TESTS POUR 's'----------------------------------------\n\n");

	printf("	: %d\n", ft_printf("String : %s %s %s", "Yasuo\tc'est un champ de fdp.", s3, "Nikemouk"));
	printf("	: %d\n\n", printf("String : %s %s %s", "Yasuo\tc'est un champ de fdp.", s3, "Nikemouk"));

	printf("	: %d\n", ft_printf("String nulle : %s", s2));
	printf("	: %d\n\n", printf("String nulle : %s", s2));

	printf("	: %d\n", ft_printf("String vide : %s", str));
	printf("	: %d\n\n", printf("String vide : %s", str));

	printf("		----------------------------------TESTS POUR 'X'----------------------------------------\n\n");

	printf("	: %d\n", ft_printf("Random hexa en maj : %X", 2756783));
	printf("	: %d\n\n", printf("Random hexa en maj : %X", 2756783));

	printf("	: %d\n", ft_printf("Max int hexa en maj : %X", INT_MAX));
	printf("	: %d\n\n", printf("Max int hexa en maj : %X", INT_MAX));

	printf("	: %d\n", ft_printf("Random hexa negatif en maj : %X", -6480));
	printf("	: %d\n\n", printf("Random hexa negatif en maj : %X", -6480));

	printf("	: %d\n", ft_printf("Unsigned int Max negatif hexa en maj : %X", -UINT_MAX));
	printf("	: %d\n\n", printf("Unsigned int Max negatif hexa en maj : %X", -UINT_MAX));

	printf("		----------------------------------TESTS POUR 'x'----------------------------------------\n\n");

	printf("	: %d\n", ft_printf("Random hexa en min : %x", 7702));
	printf("	: %d\n\n", printf("Random hexa en min : %x", 7702));
	
	printf("	: %d\n", ft_printf("Max int hexa en min : %x", INT_MAX));
	printf("	: %d\n\n", printf("Max int hexa en min : %x", INT_MAX));

	printf("	: %d\n", ft_printf("Random hexa negatif en min : %x", -66580));
	printf("	: %d\n\n", printf("Random hexa negatif en min : %x", -66580));

	printf("	: %d\n", ft_printf("Unsigned int Max negatif hexa en min : %x", -UINT_MAX));
	printf("	: %d\n\n", printf("Unsigned int Max negatif hexa en min : %x", -UINT_MAX));

	printf("		----------------------------------TESTS POUR '%%'----------------------------------------\n\n");

	printf("	: %d\n", ft_printf("%% Je suis un %%"));
	printf("	: %d\n\n", printf("%% Je suis un %%"));

	printf("	: %d\n", ft_printf("%%%%%%"));
	printf("	: %d\n\n", printf("%%%%%%"));

	// printf("	: %d\n", ft_printf(""));
	// printf("	: %d\n\n", printf(""));
	
	return (0);
}