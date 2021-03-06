/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdait-m <abdait-m@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 13:13:50 by abdait-m          #+#    #+#             */
/*   Updated: 2020/12/10 14:07:45 by abdait-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "assembly.h"

int     main(int argc, char **argv)
{
    int a,b;
    int n;
    int bz = -1;
    char *s = malloc(10);
    char *d = malloc(20);
    errno = 0;
    printf("================= WRITE FUNC : ================ \n");
    write(1,"ASM : \n", 7);
    ft_write(1,"|that's hahahah|\n", 17);
	printf("| errno | = |%d|\n", errno);
    write(1," C : \n", 6);
    write(1,"|that's hahahah|\n", 17);
	printf("| errno | = |%d|\n", errno);
    printf("================ READ FUNC : ================= \n");
    errno = 0;
    int fd1 = open("test1", O_CREAT|O_RDWR, S_IRUSR|S_IWUSR);
	int fd2 = open("test2", O_CREAT|O_RDWR, S_IRUSR|S_IWUSR);
	n = ft_read(fd1, s, bz);
	printf("\n|ASM| ==> |%d| and |%s|\n", n, s);
	printf("| errno | = |%d|\n", errno);
	n =    read(fd2, s, bz);
	printf("\n  |C| ==> |%d| and |%s|\n", n, s);
	printf("| errno | = |%d|\n", errno);
	close(fd1);
	close(fd2);
    printf("================== STRLEN FUNC ================ \n");
    printf("ft_strlen.s ==> |%lu|\n", ft_strlen("hello world"));
    printf("     strlen ==> |%lu|\n", strlen("hello world"));
    printf("=================== STRCMP FUNC =============== \n");
    printf("ft_strcmp.s ==> |%d|\n", ft_strcmp("hello world", "hello world"));
    printf("     strcmp ==> |%d|\n", strcmp("hello world", "hello world"));
    printf("=================== STRCPY FUNC =============== \n");
    printf("ft_strcpy.s ==> |%s|\n", ft_strcpy(d, "hahhahhahha"));
    printf("     strcpy ==> |%s|\n", strcpy(d, "hahhahhahha"));
    printf("=================== STRDUP FUNC =============== \n");
    printf("ft_strdup.s ==> |%s|\n", ft_strdup("hello world its me "));
    printf("     strdup ==> |%s|\n", strdup("hello world its me "));
    
}