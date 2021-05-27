/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artempot <artempot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 14:28:11 by artempot          #+#    #+#             */
/*   Updated: 2021/05/27 17:31:18 by artempot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libasm.h"

#define BLUE(string) "\x1b[36m" string "\x1b[0m"
#define GREEN(string) "\x1b[32m" string "\x1b[0m"

static void check_ft_strlen()
{
    char    *empty_str = "";
    char    *long_str = "qwertyuiopasdfghjklzxcvbnm1234567890_long_string";
    char    *str = "string";
    int     i;
    int     j;
    
    i = 0;
    j = 0;
    printf(BLUE("check ft_strlen:\n"));
    i = strlen(empty_str);
    j = ft_strlen(empty_str);
    printf("|%s|\nstrlen = %d ft_strlen = %d\n", empty_str, i, j);
    if (i == j)
        printf(GREEN("OK\n"));
    else
        printf("ERROR!\n");
    i = strlen(long_str);
    j = ft_strlen(long_str);
    printf("|%s|\nstrlen = %d ft_strlen = %d\n", long_str, i, j);
    if (i == j)
        printf(GREEN("OK\n"));
    else
        printf("ERROR!\n");
    i = strlen(str);
    j = ft_strlen(str);
    printf("|%s|\nstrlen = %d ft_strlen = %d\n", str, i, j);
    if (i == j)
        printf(GREEN("OK\n"));
    else
        printf("ERROR!\n");
    printf("-----\n\n");
}

static void clean_dst(char *dst1, char *dst2, int n)
{
    int     i;

    i = 0;
    while (i < n)
    {
        dst1[i] = 0;
        dst2[i] = 0;
        i++;
    }
}

static void check_ft_strcpy()
{
    char    *empty_str = "";
    char    *long_str = "qwertyuiopasdfghjklzxcvbnm1234567890_long_string";
    char    *str = "string";
    char    dst1[100];
    char    dst2[100];
    char    *p;
    char    *q;
    int     i;

    printf(BLUE("check ft_strcpy:\n"));
    printf("|%s|\n", empty_str);
    p = ft_strcpy(dst1, empty_str);
    q = strcpy(dst2, empty_str);
    printf("ft_strcpy result: |%s|\n", p);
    printf("   strcpy result: |%s|\n", q);
    i = strcmp(p, q);
    if (i == 0)
        printf(GREEN("OK\n"));
    else
        printf("ERROR!\n");
    printf("-----\n\n");
    clean_dst(dst1, dst2, 100);
    printf("|%s|\n", long_str);
    p = ft_strcpy(dst1, long_str);
    q = strcpy(dst2, long_str);
    printf("ft_strcpy result: |%s|\n", p);
    printf("   strcpy result: |%s|\n", q);
    i = strcmp(p, q);
    if (i == 0)
        printf(GREEN("OK\n"));
    else
        printf("ERROR!\n");
    printf("-----\n\n");
    clean_dst(dst1, dst2, 100);
    printf("|%s|\n", str);
    p = ft_strcpy(dst1, str);
    q = strcpy(dst2, str);
    printf("ft_strcpy result: |%s|\n", p);
    printf("   strcpy result: |%s|\n", q);
    i = strcmp(p, q);
    if (i == 0)
        printf(GREEN("OK\n"));
    else
        printf("ERROR!\n");
    printf("-----\n\n");
}

int         main()
{
    printf("---------\nCheck functions\n----------\n");
    check_ft_strlen();
    check_ft_strcpy();
    return (0);
}