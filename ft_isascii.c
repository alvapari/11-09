/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvapari <alvapari@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 16:51:20 by alvapari          #+#    #+#             */
/*   Updated: 2023/04/23 11:28:31 by alvapari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int x)
{
	if (x >= 0 && x <= 127)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
