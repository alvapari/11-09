/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvapari <alvapari@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 14:54:04 by alvapari          #+#    #+#             */
/*   Updated: 2023/04/28 12:40:48 by alvapari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
#include <unistd.h>
#include <ctype.h>
#include <string.h>
*/
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	count;

	count = ft_strlen((char *)s);
	while (count > 0 && s[count] != (char)c)
	{
		count--;
	}
	if (s[count] == (char)c)
		return ((char *) &s[count]);
	return (0);
}
/*
int	main (void)
{
	char ey[] = "hola";
	printf("%s", strrchr(ey, 'h'));
	printf("\n");
	printf("%s", ft_strrchr(ey, 'h'));
}*/
