/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmdluli <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 08:48:27 by tmdluli           #+#    #+#             */
/*   Updated: 2020/06/26 08:48:39 by tmdluli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putchar(char c);

void ft_swap(int *a, int *b)
{
    int temp;
    
    if(a && b)
    {
        temp = *a;
        *a = *b;
        *b = temp;
    }
}
