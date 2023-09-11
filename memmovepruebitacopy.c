/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmovepruebitacopy.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvapari <alvapari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 23:59:21 by alvapari          #+#    #+#             */
/*   Updated: 2023/09/01 12:07:44 by alvapari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	char_compare(char s1_char, char const *set)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (s1_char == set[i])
		{
			return (1);
		}
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*new_str;
	int		start;
	int		end;
	int		i;

	start = 0;
	end = ft_strlen(s1);
	i = 0;
	while (s1[start] && char_compare(s1[start], set))
		start++;
	while (end > start && char_compare(s1[end - 1], set))
		end--;
	new_str = (char *)malloc(sizeof(*s1) * (end - start + 1));
	if (new_str == NULL)
		return (NULL);
	while (start < end)
	{
		new_str[i] = s1[start];
		start++;
		i++;
	}
	new_str[i] = 0;
	return (new_str);
}

int	main(void)
{
	char	*s1;
	char	*set;

	s1 = "";
	set = "cdef";
	printf("%s\n", ft_strtrim (s1, set));
}