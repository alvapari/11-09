/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvapari <alvapari@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 17:46:00 by alvapari          #+#    #+#             */
/*   Updated: 2023/08/25 01:27:35 by alvapari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	count;
	size_t	count_src;
	size_t	result;

	result = ft_strlen(dst) + ft_strlen(src);
	if (dstsize <= ft_strlen(dst))
		return (ft_strlen(src) + dstsize);
	count = ft_strlen(dst);
	count_src = 0;
	while (count < dstsize - 1 && src[count_src] != '\0')
	{
		dst[count] = src[count_src];
		count++;
		count_src++;
	}
	dst[count] = '\0';
	return (result);
}

int main (void)
{
	char pr[]	 = "jhhhh";
	const char pr2[]	 = "STGGGGR";
	printf("%lu\n", ft_strlcat(pr, pr2, 30));
	printf("%s\n", pr);
}