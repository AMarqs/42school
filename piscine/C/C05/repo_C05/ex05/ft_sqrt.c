/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albmarqu <albmarqu@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 13:52:31 by albmarqu          #+#    #+#             */
/*   Updated: 2023/11/13 20:00:09 by albmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	while (i <= (nb / 2))
	{
		if (i * i == nb)
		{
			return (i);
		}
		i++;
	}
	return (0);
}
/*
int main(void)
{
	printf("%d", ft_sqrt(1000000));
	return (0);
}
*/