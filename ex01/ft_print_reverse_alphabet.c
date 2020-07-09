/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapule <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 12:26:55 by mapule            #+#    #+#             */
/*   Updated: 2020/07/09 13:29:47 by mapule           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

 void ft_print_reverse_alphabet()
{

		char word;
	word ='z';

		while (word >='a')
{
	ft_putchar (word);
	word --;
}

}

