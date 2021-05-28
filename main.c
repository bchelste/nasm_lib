/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artempot <artempot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 14:28:11 by artempot          #+#    #+#             */
/*   Updated: 2021/05/28 11:44:29 by artempot         ###   ########.fr       */
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
    printf("|%s|\n   strlen = %d\nft_strlen = %d\n", empty_str, i, j);
    if (i == j)
        printf(GREEN("OK\n"));
    else
        printf("ERROR!\n");
    i = strlen(long_str);
    j = ft_strlen(long_str);
    printf("|%s|\n   strlen = %d\nft_strlen = %d\n", long_str, i, j);
    if (i == j)
        printf(GREEN("OK\n"));
    else
        printf("ERROR!\n");
    i = strlen(str);
    j = ft_strlen(str);
    printf("|%s|\n   strlen = %d\nft_strlen = %d\n", str, i, j);
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

static void check_ft_strcmp()
{
    char    *str1 = "qwertyuiopasdfghjklzxcvbnm1234567890";
    char    *str2 = "qwertyuiopasdfghjklzxcvbnm1234567890";
    char    *empty_str1 = "";
    char    *empty_str2 = "";
    char    *str3 = "hello";
    char    *str4 = "hell";
    char    *str5 = "helo";
    int     i;
    int     j;

    printf(BLUE("check ft_strcmp:\n"));
    printf("|%s|\n", empty_str1);
    printf("|%s|\n", empty_str2);
    i = ft_strcmp(empty_str1, empty_str2);
    j = strcmp(empty_str1, empty_str2);
    printf("ft_strcmp result: %d\n", i);
    printf("   strcmp result: %d\n", j);
    if (i == j)
        printf(GREEN("OK\n"));
    else
        printf("ERROR!\n");
    printf("|%s|\n", empty_str1);
    printf("|%s|\n", str1);
    i = ft_strcmp(empty_str1, str1);
    j = strcmp(empty_str1, str1);
    printf("ft_strcmp result: %d\n", i);
    printf("   strcmp result: %d\n", j);
    if (i == j)
        printf(GREEN("OK\n"));
    else
        printf("ERROR!\n");
    printf("|%s|\n", str1);
    printf("|%s|\n", empty_str2);
    i = ft_strcmp(str1, empty_str2);
    j = strcmp(str1, empty_str2);
    printf("ft_strcmp result: %d\n", i);
    printf("   strcmp result: %d\n", j);
    if (i == j)
        printf(GREEN("OK\n"));
    else
        printf("ERROR!\n");
    printf("|%s|\n", str1);
    printf("|%s|\n", str2);
    i = ft_strcmp(str1, str2);
    j = strcmp(str1, str2);
    printf("ft_strcmp result: %d\n", i);
    printf("   strcmp result: %d\n", j);
    if (i == j)
        printf(GREEN("OK\n"));
    else
        printf("ERROR!\n");
    printf("|%s|\n", str3);
    printf("|%s|\n", str4);
    i = ft_strcmp(str3, str4);
    j = strcmp(str3, str4);
    printf("ft_strcmp result: %d\n", i);
    printf("   strcmp result: %d\n", j);
    if (i == j)
        printf(GREEN("OK\n"));
    else
        printf("ERROR!\n");
    printf("|%s|\n", str4);
    printf("|%s|\n", str5);
    i = ft_strcmp(str4, str5);
    j = strcmp(str4, str5);
    printf("ft_strcmp result: %d\n", i);
    printf("   strcmp result: %d\n", j);
    if (i == j)
        printf(GREEN("OK\n"));
    else
        printf("ERROR!\n");
    printf("|%s|\n", str3);
    printf("|%s|\n", str5);
    i = ft_strcmp(str3, str5);
    j = strcmp(str3, str5);
    printf("ft_strcmp result: %d\n", i);
    printf("   strcmp result: %d\n", j);
    if (i == j)
        printf(GREEN("OK\n"));
    else
        printf("ERROR!\n");
    printf("|%s|\n", str5);
    printf("|%s|\n", str3);
    i = ft_strcmp(str5, str3);
    j = strcmp(str5, str3);
    printf("ft_strcmp result: %d\n", i);
    printf("   strcmp result: %d\n", j);
    if (i == j)
        printf(GREEN("OK\n"));
    else
        printf("ERROR!\n");
    printf("-----\n\n");
}

int         main()
{
    printf("---------\nCheck functions libasm\n----------\n");
    check_ft_strlen();
    check_ft_strcpy();
    check_ft_strcmp();
    return (0);
}