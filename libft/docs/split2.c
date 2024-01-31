#include "libft.h"

/*int	w_count(const char *s, char c)
{
	int	i;
	int	count;


	i = 0;

	count = 0;
	if (s[i] != '\0')
		count = 1;
	while (s[i] != '\0')
	{
		if (s[i] == c && s[i + 1] != c && s[i + 1] != '\0')
			count++;
		i++;
	}
	return (count);
}*/

int	char_count(const char *s, char c)
{
	int	i;
	int	count;

	if (c == '\0')
		return (0);
	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
			count++;
		else if ((s[i] == c && s[i + 1] != c) || s[i + 1] == '\0')
			count++;
		i++;
	}
	return (count);
}

int	w_len(const char *s, char c, int j)
{
	int	count;

	count = 0;
	while (s[j] == c)
		j++;
	while (s[j] != c && s[j] != '\0')
	{
		count++;
		j++;
	}
	return (count);
}

int	w_start(const char *s, char c, int j, int word_l)
{
	j = j + word_l;
	while (s[j] == c)
		j++;
	return (j);
}

char	**ft_split(const char *s, char c)
{
	int		char_c;
	int		word_l;
	int		i;
	int		j;
	char	**matrix;

	if (!s)
		return (NULL);
	char_c = char_count(s, c);
	matrix = malloc(sizeof(char *) * char_c);
	if (!matrix)
		return (NULL);
	i = 0;
	j = 0;
	word_l = 0;
	while (i < word_c)
	{
		j = w_start(s, c, j, word_l);
		word_l = w_len(s, c, j);
		matrix[i] = ft_substr(s, j, word_l);
		if (!matrix[i])
		{
			while (i-- >= 0)
				free(matrix[i]);
			return (matrix);
		}
//		printf("i = %d   j = %d   word length = %d   -->%s\n", i, j, word_l, matrix[i]);
		i++;
	}
	matrix[word_c] = NULL;
//	printf("i = %d  -->%s\n", i, matrix[i]);
	return (matrix);
}

/*int	main(void)
{
	const char	s[] = "";
	char		c = 'z';
	ft_split(s, c);
	return (0);
}*/
