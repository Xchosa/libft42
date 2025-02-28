/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poverbec <poverbec@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 15:39:06 by poverbec          #+#    #+#             */
/*   Updated: 2024/10/15 11:21:44 by poverbec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

/*
DESCRIPTION
     The strchr() function locates the first occurrence of c (converted to a
     char) in the string pointed to by s.  The terminating null character is
     considered to be part of the string; therefore if c is `\0', the functions
     locate the terminating `\0'.

     The strrchr() function is identical to strchr(), except it locates the
     last occurrence of c.

RETURN VALUES
     The functions strchr() and strrchr() return a pointer to the located char-
     acter, or NULL if the character does not appear in the string.
	*/
char	*ft_strrchr(const char *s, int c)
{
	size_t	len;

	len = ft_strlen(s);
	while (len >= 0)
	{
		if (s[len] == (c))
		{
			return ((char *)&s[len]);
		}
		len--;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char	*test;
// 	int		c;
// 	char	*result;
// 	char	*result2;

// 	test = "Hollo";
// 	c = 'o';
// 	result = ft_strrchr(test, c);
// 	printf("%p\n", result);
// 	result2 = strrchr(test, c);
// 	printf("%p", result2);
// }
