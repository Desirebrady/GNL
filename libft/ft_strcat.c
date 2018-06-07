/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbouchib <nbouchib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 10:07:35 by nbouchib          #+#    #+#             */
/*   Updated: 2014/11/05 11:40:30 by nbouchib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strcat(char *s1, const char *s2)
{
	int		i;
	int		l;
	char	*s2b;

	i = 0;
	l = 0;
	s2b = (char *)s2;
	while (s1[i])
		i++;
	while (s2[l])
	{
		s1[i] = s2b[l];
		l++;
		i++;
	}
	s1[i] = '\0';
	return (s1);
}