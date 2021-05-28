/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchelste <bchelste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 14:28:11 by bchelste          #+#    #+#             */
/*   Updated: 2021/05/28 19:09:55 by bchelste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libasm.h"

#define BLUE(string) "\x1b[36m" string "\x1b[0m"
#define GREEN(string) "\x1b[32m" string "\x1b[0m"
#define YELLOW(string) "\x1b[33m" string "\x1b[0m"
#define PURPLE(string) "\x1b[35m" string "\x1b[0m"

static void check_ft_strlen()
{
    char    *empty_str = "";
    char    *long_str = "qwertyuiopasdfghjklzxcvbnm1234567890_long_string";
    char    *str = "string";
    int     i;
    int     j;
    
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

static void clean_buf(char *dst1, char *dst2, int n)
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
    clean_buf(dst1, dst2, 100);
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
    clean_buf(dst1, dst2, 100);
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

static void check_ft_write()
{
    char    *str1 = "qwertyuiopasdfghjklzxcvbnm";
    char    *empty_str = "";
    int     i;
    int     j;
    
    printf(BLUE("check ft_write:\n"));
    printf("|%s|\n", str1);
    i = ft_write(1, str1, 26);
    printf("\nreturn value ft_write: %d\n", i);
    j = write(1, str1, 26);
    printf("\nreturn value    write: %d\n", j);
    if (i == j)
        printf(GREEN("OK\n"));
    else
        printf("ERROR!\n");
    printf("|%s|\n", empty_str);
    i = ft_write(1, empty_str, 0);
    printf("\nreturn value ft_write: %d\n", i);
    j = write(1, empty_str, 0);
    printf("\nreturn value    write: %d\n", j);
    if (i == j)
        printf(GREEN("OK\n"));
    else
        printf("ERROR!\n");
    printf("wrong fd:\n");
    printf("|%s|\n", str1);
    i = ft_write(-10, str1, 26);
    printf("\nreturn value ft_write: %d\n", i);
    printf("errno value: %s\n", strerror(errno));
    j = write(-10, str1, 26);
    printf("\nreturn value    write: %d\n", j);
    printf("errno value: %s\n", strerror(errno));
    if (i == j)
        printf(GREEN("OK\n"));
    else
        printf("ERROR!\n");
    printf(YELLOW("check ft_write to file\n"));
    printf(YELLOW("check file_1(ft_write) and file_2(write)\n"));
    int fd1 = open("file_1", O_CREAT | O_WRONLY | O_TRUNC);
    int fd2 = open("file_2", O_CREAT | O_WRONLY | O_TRUNC);
    ft_write(fd1, str1, 26);
    close(fd1);
    write(fd2, str1, 26);
    close(fd2);
    printf("-----\n\n");    
}

static void check_ft_read()
{
    char    buff_1[100];
    char    buff_2[100];
    int     fd;
    int     r1;
    int     r2;

    printf(BLUE("check ft_read:\n"));
    fd = open("file_2", O_RDONLY);
    r1 = ft_read(fd, buff_1, 50);
    close(fd);
    fd = open("file_2", O_RDONLY);
    r2 = read(fd, buff_2, 50);
    close(fd);
    printf("reading from file_2:");
    if (r1 == r2)
        printf(GREEN("OK\n"));
    else
        printf("ERROR!\n");
    clean_buf(buff_1, buff_2, 100);
    printf("check the wrong fd:\n");
    r1 = ft_read(-10, buff_1, 50);
    printf("return ft_read: %d\n", r1);
    printf("errno value: %s\n", strerror(errno));
    r2 = read(-10, buff_2, 50);
    printf("return    read: %d\n", r2);
    printf("errno value: %s\n", strerror(errno));
    if (r1 == r2)
        printf(GREEN("OK\n"));
    else
        printf("ERROR!\n");
    clean_buf(buff_1, buff_2, 100);
    printf(YELLOW("check ft_read from STDIN:\n"));
    printf(PURPLE("put some symbols to check ft_read with stdin:"));
    printf("\n");
    r1 = ft_read(1, buff_1, 100);
    printf("the number of byte: %d\n", r1);
    printf("the string: %s", buff_1);
    printf(PURPLE("put some symbols for read with stdin:"));
    printf("\n");
    r2 = ft_read(1, buff_2, 100);
    printf("the number of byte: %d\n", r2);
    printf("the string: %s", buff_2);
    if (r1 == r2)
        printf(GREEN("OK\n"));
    else
        printf("ERROR!\n");
    printf("-----\n\n");   
}

static void check_ft_strdup()
{
    char    *empty_str = "";
    char    *long_str = "qwertyuiopasdfghjklzxcvbnm1234567890";
    int     i;
    char    *p;
    char    *q;

    printf(BLUE("check ft_strdup:\n"));
    printf("|%s|\n", empty_str);
    p = ft_strdup(empty_str);
    q = strdup(empty_str);
    printf("ft_strdup result: %s\n", p);
    printf("   strdup result: %s\n", q);
    i = strcmp(p, q);
    if (i == 0)
        printf(GREEN("OK\n"));
    else
        printf("ERROR!\n");
    free(p);
    free(q);
    printf("|%s|\n", long_str);
    p = ft_strdup(long_str);
    q = strdup(long_str);
    printf("ft_strdup result: %s\n", p);
    printf("   strdup result: %s\n", q);
    i = strcmp(p, q);
    if (i == 0)
        printf(GREEN("OK\n"));
    else
        printf("ERROR!\n");
    free(p);
    free(q);
    printf("-----\n\n"); 
}

int         main()
{
    printf(BLUE("---------\nCheck functions libasm\n----------\n"));
    check_ft_strlen();
    check_ft_strcpy();
    check_ft_strcmp();
    check_ft_write();
    check_ft_read();
    check_ft_strdup();
    printf(BLUE("---------------\nFinish_tests\n"));
    return (0);
}