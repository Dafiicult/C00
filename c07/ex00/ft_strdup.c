#include <unistd.h>
#include <stdlib.h>

char ft_str_length(char * str)
{
	int	index;

	index = 0;
	while (str[index])
		index++;
	return (index);
}
char *ft_strdup(char *src)
{
	int	index;
	char *dest;
	char *i;

	index = 0;
	i = ((dest = (char *)malloc(ft_str_length(src) * sizeof(char) + 1)));
	if (!i)
	{
		return (0);
	}
	while (src[index])
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}
/*
int	main()
{
	char *stc;
	char *alloc;
	stc= "future is loding now!";
    printf("%s %p \n", stc, stc);
	alloc = ft_strdup(stc);
	printf("%s %p \n", alloc, alloc);
	free(alloc);
}
*/
