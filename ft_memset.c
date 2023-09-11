/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvapari <alvapari@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 10:23:48 by alvapari          #+#    #+#             */
/*   Updated: 2023/05/31 11:54:24 by alvapari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
*/
#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			count;
	unsigned char	*ptr;
	unsigned char	uc;

	ptr = b;
	uc = c;
	count = 0;
	while (count < len)
	{
		ptr[count] = uc;
		count++;
	}
	return (ptr);
}
/*
int	main(void)
{
	char hola [] = "Holafffffffffffffffffffffffffgsdfsdf";
	printf("%s\n", ft_memset(hola, 65, 15));
	printf("%s", memset(hola, 65, 15));

}*/
