/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artempot <artempot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 14:28:11 by artempot          #+#    #+#             */
/*   Updated: 2021/05/25 19:25:42 by artempot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libasm.h"

static void check_ft_strlen()
{
    char    *empty_str = "";
    char    *long_str = "qwertyuiopasdfghjklzxcvbnm1234567890_long_string";
    char    *str = "string";
    int     i;
    int     j;
    
    i = 0;
    j = 0;
    printf("check ft_strlen:/n");
    i = strlen(empty_str);
    j = ft_strlen(empty_str);
    printf("%s strlen = %d ft_strlen = %d\n", empty_str, i, j);
    if (i == j)
        printf("OK\n");
    else
        printf("ERROR!\n");
    i = strlen(long_str);
    j = ft_strlen(long_str);
    printf("%s strlen = %d ft_strlen = %d\n", long_str, i, j);
    if (i == j)
        printf("OK\n");
    else
        printf("ERROR!\n");
    i = strlen(str);
    j = ft_strlen(str);
    printf("%s strlen = %d ft_strlen = %d\n", empty_str, i, j);
    if (i == j)
        printf("OK\n");
    else
        printf("ERROR!\n");
    printf("-----\n\n");
}

int         main()
{
    printf("---------\nCheck functions\n----------\n");
    check_ft_strlen();
    return (0);
}