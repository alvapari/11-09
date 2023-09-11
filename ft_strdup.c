/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvapari <alvapari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 14:40:21 by alvapari          #+#    #+#             */
/*   Updated: 2023/08/29 22:32:47 by alvapari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*sdup;
	int		size;

	size = 1 + (strlen(s));
	sdup = malloc(sizeof(char) * size);
	if (s == NULL || sdup == NULL)
		return (NULL);
	ft_strlcpy(sdup, s, size);
	return (sdup);
}
/*
int main ()
{
	char *p = "hola123456789";
	char *pp = "hola123456789";
	printf("%s\n", ft_strdup (p));
	printf("%s", strdup(pp));
}*/
