/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapule <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 14:38:49 by mapule            #+#    #+#             */
/*   Updated: 2020/07/09 16:30:44 by mapule           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void ft_putchar(char a)

void ft_print_numbers(void)
{
	int b;
 	b = '0';
 	while (b <= '9')
		{	
			ft_putchar(b);
	 		b-=-1;	
		}	 
}

