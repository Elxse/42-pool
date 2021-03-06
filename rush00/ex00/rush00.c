/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/08 14:40:35 by echin             #+#    #+#             */
/*   Updated: 2020/08/08 14:47:26 by echin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_car(int l, int c, int lmax, int cmax)
{
	if (l == 0 && c == 0)
		ft_putchar('o');
	else if (l == 0 && c > 0 && c < cmax - 1)
		ft_putchar('-');
	else if (l == 0 && c == cmax - 1)
		ft_putchar('o');
	else if (l > 0 && l < lmax - 1 && c == 0)
		ft_putchar('|');
	else if (l > 0 && l < lmax - 1 && c == cmax - 1)
		ft_putchar('|');
	else if (l == lmax - 1 && c == 0)
		ft_putchar('o');
	else if (l == lmax - 1 && c > 0 && c < cmax - 1)
		ft_putchar('-');
	else if (l == lmax - 1 && c == cmax - 1)
		ft_putchar('o');
	else
		ft_putchar(' ');
}

void	rush(int x, int y)
{
	int l;
	int c;

	l = 0;
	c = 0;
	while (l < y)
	{
		while (c < x)
		{
			print_car(l, c, y, x);
			c++;
		}
		ft_putchar('\n');
		l++;
		c = 0;
	}
}
