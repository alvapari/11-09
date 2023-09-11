/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvapari <alvapari@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 19:06:27 by alvapari          #+#    #+#             */
/*   Updated: 2023/04/21 16:29:18 by alvapari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <unistd.h>
#include <stdio.h>
#include <ctype.h>
*/

int	ft_isdigit(int n)
{
	return (n >= '0' && n <= '9');
}

/*
int	main(void)
{
	printf("%i", isdigit(-5000));
	printf("%i", ft_isdigit(-5000));
	return (0);
}  */