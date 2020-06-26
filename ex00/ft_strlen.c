/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmdluli <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 08:48:09 by tmdluli           #+#    #+#             */
/*   Updated: 2020/06/26 08:48:12 by tmdluli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strlen(char *str)
{
    int i;
    
    i = 0;
    while(*str != '\0')
    {
        i++;
        *str++;
    }
    
    return (i);
}