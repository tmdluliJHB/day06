/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmdluli <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 08:51:35 by tmdluli           #+#    #+#             */
/*   Updated: 2020/06/26 08:51:39 by tmdluli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    ft_putchar(char c);

int main(int argc, char const *argv[])
{
    int i;

    i = 0;
    if (argc > 0)
    {
        while (argv[0][i] != '\0')
        {
            ft_putchar(argv[0][i]);
            ++i;
        }
        ft_putchar('\n');
    }
    return (0);
}
