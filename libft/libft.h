/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbetz <rbetz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 11:33:22 by rbetz             #+#    #+#             */
/*   Updated: 2022/03/25 18:35:27 by rbetz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);
int		ft_strlen(const char *s);
void	*ft_memcpy(void *dst, const void *src, unsigned int n);
void	*ft_memmove(void *dst, const void *src, unsigned int len);
void	*ft_memset(void *b, int c, unsigned int len);
void	ft_bzero(void *s, unsigned int n);

#endif
