/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvapari <alvapari@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 16:13:08 by alvapari          #+#    #+#             */
/*   Updated: 2023/04/21 16:28:34 by alvapari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <unistd.h>
#include <stdio.h>
#include <ctype.h>
*/

int	ft_isalnum(int x)
{
	return ((x >= 48 && x <= 57) || (x >= 65 && x <= 90)
		|| (x >= 97 && x <= 122));
}

/*
int	main(void)
{
	printf("%i", isalnum(122));
	printf("%i", ft_isalnum(122));
	return (0);
} */