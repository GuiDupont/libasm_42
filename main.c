#include <stdio.h>

extern int addit(int, int);
extern int ft_strlen(char *);
extern int ft_strlen_2(char *);
extern int ft_strcpy(char *, char *);

int main(void)
{
	char *s1;
	char *s2;

	s1 = "salut";
	printf("%s\n", ft_strcpy(s2, s1));
	return(0);
}
