#include "ft_printf.h"
#include <stdio.h>
#include <limits.h> 

int	main(void)
{
	char			c = 'M';
	char			*s2 = NULL;
	char			str[] = "";
	char			s3[] = " Avec son sabre de merde ";
	unsigned int	r_ui = 12345;

	printf("		----------------------------------TESTS POUR 'd'----------------------------------------\n\n");


	printf("	: %d\n", ft_printf("2 Random int : %i	%d", 123456789, 9876543));
	printf("	: %d\n\n", printf("2 Random int : %i	%d", 123456789, 9876543));

	printf("	: %d\n", ft_printf("Char en int 'j' (106) : %i", 'j'));
	printf("	: %d\n\n", printf("Char en int 'j' (106) : %i", 'j'));

	printf("	: %d\n", ft_printf("Int 0 : %d", 0));
	printf("	: %d\n\n", printf("Int 0 : %d", 0));

	printf("	: %d\n", ft_printf("Int min : %d", INT_MIN));
	printf("	: %d\n\n", printf("Int min : %d", INT_MIN));

	printf("	: %d\n", ft_printf("Int max : %d", INT_MAX));
	printf("	: %d\n\n", printf("Int max : %d", INT_MAX));


	printf("		----------------------------------TESTS POUR 'u'----------------------------------------\n\n");


	printf("	: %d\n", ft_printf("2 Random unsigned int : %u	%u", r_ui, 2023769403));
	printf("	: %d\n\n", printf("2 Random unsigned int : %u	%u", r_ui, 2023769403));

	printf("	: %d\n", ft_printf("-1 unsigned int negatif (renvoie UINT_MAX -1): %u", -1));
	printf("	: %d\n\n", printf("-1 unsigned int negatif (renvoie UINT_MAX -1): %u", -1));

	printf("	: %d\n", ft_printf("unsigned int 0 : %u", 0));
	printf("	: %d\n\n", printf("unsigned int 0 : %u", 0));

	printf("	: %d\n", ft_printf("Unsigned int max : %u", UINT_MAX));
	printf("	: %d\n\n", printf("Unsigned int max : %u", UINT_MAX));


	printf("		----------------------------------TESTS POUR 'c'----------------------------------------\n\n");


	printf("	: %d\n", ft_printf("2 char : %c%c", c, '9'));
	printf("	: %d\n\n", printf("2 char : %c%c", c, '9'));

	printf("	: %d\n", ft_printf("Char 65 (A) : %c", 65));
	printf("	: %d\n\n", printf("Char 65 (A) : %c", 65));

	printf("	: %d\n", ft_printf("Char M + 256 : %c", c + 256));
	printf("	: %d\n\n", printf("Char M + 256 : %c", c + 256));


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

	printf("	: %d\n", ft_printf("2 Random hexa en maj : %X	%X", 2756783, 86795));
	printf("	: %d\n\n", printf("2 Random hexa en maj : %X	%X", 2756783, 86795));

	printf("	: %d\n", ft_printf("Max int hexa en maj : %X", INT_MAX));
	printf("	: %d\n\n", printf("Max int hexa en maj : %X", INT_MAX));

	printf("	: %d\n", ft_printf("Random hexa negatif en maj : %X", -6480));
	printf("	: %d\n\n", printf("Random hexa negatif en maj : %X", -6480));

	printf("	: %d\n", ft_printf("Unsigned int Max negatif hexa en maj : %X", -UINT_MAX));
	printf("	: %d\n\n", printf("Unsigned int Max negatif hexa en maj : %X", -UINT_MAX));


	printf("		----------------------------------TESTS POUR 'x'----------------------------------------\n\n");


	printf("	: %d\n", ft_printf("Random hexa en min : %x", 7702));
	printf("	: %d\n\n", printf("Random hexa en min : %x", 7702));

	printf("	: %d\n", ft_printf("2 Random hexa en min : %x	%x", 7702, 50924));
	printf("	: %d\n\n", printf("2 Random hexa en min : %x	%x", 7702, 50924));
	
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

	return (0);
}