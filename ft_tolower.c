/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvapari <alvapari@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 09:51:02 by alvapari          #+#    #+#             */
/*   Updated: 2023/08/14 12:17:23 by alvapari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <unistd.h>
#include <stdio.h>
#include <ctype.h> 
*/
int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
	{
		c = c + 32;
		return (c);
	}
	else
	{
		return (c);
	}
}
/*
int	main(void)
{
	printf("%c", tolower(116));
	printf("%c", ft_tolower(116));	
} 
*/
