/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmossaid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 03:44:19 by hmossaid          #+#    #+#             */
/*   Updated: 2024/09/19 11:14:34 by hmossaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
int	ft_str_length(char *str)
{
	int	indx;

	indx = 0;
	while (str[indx])
		indx++;
	return (indx);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	indx;

	indx = 0;
	while (src[indx] != '\0')
	{
		dest[indx] = src[indx];
		indx++;
	}
	dest[indx] = '\0';
	return (dest);
}

int	ft_compute_final_length(char **strings, int size, int sep_length)
{
	int	final_length;
	int	indx;

	final_length = 0;
	indx = 0;
	while (indx < size)
	{
		final_length += ft_str_length(strings[indx]);
		final_length += sep_length;
		indx++;
	}
	final_length -= sep_length;
	return (final_length);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		full_length;
	int		indx;
	char	*string;
	char	*i;

	if (size == 0)
		return ((char *)malloc(sizeof(char)));
	full_length = ft_compute_final_length(strs, size, ft_str_length(sep));
	i = (string = (char *)malloc((full_length + 1) * sizeof(char)));
	if (!i)
		return (0);
	indx = 0;
	while (indx < size)
	{
		ft_strcpy(i, strs[indx]);
		i += ft_str_length(strs[indx]);
		if (indx < size - 1)
		{
			ft_strcpy(i, sep);
			i += ft_str_length(sep);
		}
		indx++;
	}
	*i = '\0';
	return (string);
}

int	main(void)
{
	int		indx;
	char	**strs;
	char	*result;
	char	*separator;
	int	size;

	size = 2;
	strs = (char **)malloc(3 * sizeof(char *));
	strs[0] = (char *)malloc(sizeof(char) * 5 + 1);
	strs[1] = (char *)malloc(sizeof(char) * 7 + 1);
	strs[0] = "future is";
	strs[1] = "loading";
	separator = " ";
	result = ft_strjoin(size, strs, separator);
	printf("%s \n", result);
}
