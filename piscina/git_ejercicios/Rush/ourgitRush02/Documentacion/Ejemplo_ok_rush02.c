/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susamani <susamani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 00:00:00 by susamani          #+#    #+#             */
/*   Updated: 2023/10/28 00:00:00 by susamani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

#define FT_INT_MAX 2147483647

int ft_is_number(char c)
{
    return c >= '0' && c <= '9';
}

int ft_does_overflow(char c, int number, int sign)
{
    if (number > (FT_INT_MAX / 10))
        return 1;
    if (number == (FT_INT_MAX / 10))
        return (sign > 0) ? (c - '0') > (FT_INT_MAX % 10) : (c - '0') > (FT_INT_MAX % 10 + 1);
    return 0;
}

int ft_atoi(const char *str, int *result) {
    int i;
    int sign;

    if (!str || !result)
        return 0;
    i = 0;
    sign = 1;
    *result = 0;
    while (str[i] == ' ')
        i++;
    if (str[i] == '-' || str[i] == '+')
        sign = (str[i++] == '-') ? -1 : 1;
    while (str[i] != '\0') {
        if (!ft_is_number(str[i]) || ft_does_overflow(str[i], *result, sign))
            return 0;
        *result = (*result * 10) + (str[i] - '0');
        i++;
    }
    *result *= sign;
    return 1;
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(const char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

char *ones[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
char *tens[] = {"", "", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};
char *teens[] = {"ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};

void ft_spell_number(int n) {
    if (n >= 1000000000) {
        ft_spell_number(n / 1000000000);
        ft_putstr(" billion ");
        n %= 1000000000;
    }
    if (n >= 1000000) {
        ft_spell_number(n / 1000000);
        ft_putstr(" million ");
        n %= 1000000;
    }
    if (n >= 1000) {
        ft_spell_number(n / 1000);
        ft_putstr(" thousand ");
        n %= 1000;
    }
    if (n >= 100) {
        ft_spell_number(n / 100);
        ft_putstr(" hundred ");
        n %= 100;
    }
    if (n >= 20) {
        ft_putstr(tens[n / 10]);
        n %= 10;
    }
    if (n >= 10) {
        ft_putstr(teens[n - 10]);
        n = 0;
    }
    if (n > 0) {
        ft_putstr(ones[n]);
    }
}

int main(int argc, char *argv[]) {
    /*if (argc != 2) {
        ft_putstr("2 arguments are needed");
        return 1;
    }*/

    int number;

    //if (!ft_atoi(argv[1], &number))
    if (!ft_atoi("2147483647", &number))
        ft_putstr("Conversion error");
    if (number == 0)
        ft_putstr(ones[0]);
    else
        ft_spell_number(number);
    ft_putchar('\n');
    return 0;
}
