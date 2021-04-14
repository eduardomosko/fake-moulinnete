/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoncalv <vgoncalv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 14:09:11 by vgoncalv          #+#    #+#             */
/*   Updated: 2021/04/14 14:10:52 by vgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int offset;

	offset = 0;
	while (s1[offset] == s2[offset] && s1[offset] != '\0' && s2[offset] != '\0')
		offset++;
	return ((unsigned char)s1[offset] - (unsigned char)s2[offset]);
}
