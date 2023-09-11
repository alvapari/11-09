/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvapari <alvapari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 20:09:15 by alvapari          #+#    #+#             */
/*   Updated: 2023/09/11 12:25:20 by alvapari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdio.h>
# include <ctype.h>
# include <string.h>
# include <stdlib.h>

int				ft_isalnum(int x);
int				ft_isalpha(int c);
int				ft_isascii(int x);
int				ft_isdigit(int n);
int				ft_isprint(int x);
char			*ft_strrchr(const char *s, int c);
char			*ft_strchr(const char *s, int c);
int				ft_tolower(int c);
int				ft_toupper(int c);
int				ft_strncmp(const char *s1, const char *s2, size_t n);
unsigned int	ft_strlen(const char *str);
void			*ft_memset(void *b, int c, size_t len);
void			ft_bzero(void *s, unsigned int n);
void			*ft_memcpy(void *dst, const void *src, size_t n);
int				ft_memcmp(const void *s1, const void *s2, size_t n);
void			*ft_memchr(const void *s, int c, size_t n);
void			*ft_memmove(void *dst, const void *src, size_t len);
size_t			ft_strlcpy(char *dst, const char *src, size_t dstsize);
char            *ft_strnstr(const char *haystack, const char *needle, size_t len);
size_t			ft_strlcat(char *dst, const char *src, size_t dstsize);
int             ft_atoi(const char *str);
void            *ft_calloc(size_t nmemb, size_t size);
char			*ft_strdup(const char *s);
char 			*ft_substr(char const *s, unsigned int start, size_t len);
char            *ft_strjoin(char const *s1, char const *s2);
char            *ft_strtrim(char const *s1, char const *set);
char	        *ft_strmapi(char const *s, char (*f)(unsigned int, char));
void            ft_striteri(char *s, void (*f)(unsigned int, char*));
char            *ft_itoa(int n);


#endif