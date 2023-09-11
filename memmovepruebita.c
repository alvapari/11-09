/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmovepruebita.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvapari <alvapari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 23:59:21 by alvapari          #+#    #+#             */
/*   Updated: 2023/09/09 12:41:30 by alvapari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, char (*f)(unsigned int, char *))
{
	unsigned int	count;
	char			*ptr;

	while (count < ft_strlen(s))
	{
		ptr = &s[count];
		*ptr = f(count, &s[count]);
		count++;
	}
}

char	f(unsigned int i, char *c)
{
	char	*ptr;

	ptr = &c;
	*ptr = i - 32;
}

int	main(void)
{
	char ey[] = "hola";
	ft_striteri(ey, f(0, &f));
	printf("%s", ey);
}