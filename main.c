/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 15:32:58 by plam              #+#    #+#             */
/*   Updated: 2021/02/23 11:19:28 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libasm.h"

void	ft_len(void)
{
	printf("-----------FT_STRLEN----------\n");
	printf("mine = |%zd|\n", ft_strlen("hello"));
	printf("real = |%zd|\n\n", strlen("hello"));
	printf("mine = |%zd|\n", ft_strlen("hello_world !"));
	printf("real = |%zd|\n\n", strlen("hello_world !"));
	printf("mine = |%zd|\n", ft_strlen("#stayathome"));
	printf("real = |%zd|\n\n", strlen("#stayathome"));
	printf("mine = |%zd|\n", ft_strlen("#42atom"));
	printf("real = |%zd|\n\n", strlen("#42atom"));
	printf("mine = |%zd|\n", ft_strlen(""));
	printf("real = |%zd|\n\n", strlen(""));
	printf("mine = |%zd|\n", ft_strlen("\n"));
	printf("real = |%zd|\n\n", strlen("\n"));
	printf("mine = |%zd|\n", ft_strlen("asdfasdf''///##!!@"));
	printf("real = |%zd|\n\n", strlen("asdfasdf''///##!!@"));
	printf("mine = |%zd|\n", ft_strlen("the\0hidden"));
	printf("real = |%zd|\n\n", strlen("the\0hidden"));
	printf("mine = |%zd|\n", ft_strlen("Lorem \bipsum\vdollar"));
	printf("real = |%zd|\n\n", strlen("Lorem \bipsum\vdollar"));
	printf("------------------------------\n\n");
}

void	ft_cmp(void)
{
	printf("-----------FT_STRCMP----------\n");
	printf("mine = |%d|\n", ft_strcmp("hello", "hello"));
	printf("real = |%d|\n\n", strcmp("hello", "hello"));
	printf("mine = |%d|\n", ft_strcmp("hello", "HELLA"));
	printf("real = |%d|\n\n", strcmp("hello", "HELLA"));
	printf("mine = |%d|\n", ft_strcmp("hello_world !", "Bonjour le monde !"));
	printf("real = |%d|\n\n", strcmp("hello_world !", "Bonjour le monde !"));
	printf("mine = |%d|\n", ft_strcmp("#stayathome", "#restezchezvous"));
	printf("real = |%d|\n\n", strcmp("#stayathome", "#resterchezvous"));
	printf("mine = |%d|\n", ft_strcmp("Hi", "Hi"));
	printf("real = |%d|\n\n", strcmp("HI", "HI"));
	printf("mine = |%d|\n", ft_strcmp("#42atom", "#42MAISON"));
	printf("real = |%d|\n\n", strcmp("#42atom", "#42MAISON"));
	printf("mine = |%d|\n", ft_strcmp("", "vide"));
	printf("real = |%d|\n\n", strcmp("", "vide"));
	printf("mine = |%d|\n", ft_strcmp("\n", "rien"));
	printf("real = |%d|\n\n", strcmp("\n", "rien"));
	printf("mine = |%d|\n", ft_strcmp("the\0hidden", "thehidden"));
	printf("real = |%d|\n\n", strcmp("the\0hidden", "thehidden"));
	printf("mine = |%d|\n", ft_strcmp("asdklfjasdfj////asdf'''asdf3##",
				"asdklfjasdfj////asdf'''asdf3##"));
	printf("real = |%d|\n\n", strcmp("asdklfjasdfj////asdf'''asdf3##",
				"asdklfjasdfj////asdf'''asdf3##"));
	printf("------------------------------\n\n");
}

void	ft_cpy(void)
{
	char	s0[5] = "hello";
	char	s1[60] = "hello_world !";
	char	s2[60] = "stayathome";
	char	s3[60] = "Hi";
	char	s4[60] = "HI";
	char	s5[60] = "";
	char	s6[60] = "\n";
	char	s7[60] = "the\0hidden";
	char	s8[128] = "asdklfjasdfj////asdf'''asdf3##";
	
	printf("-----------FT_STRCPY----------\n");
	printf("mine = |%s|\n", ft_strcpy(s0, "hello"));
	printf("real = |%s|\n", strcpy(s0, "hello"));
	printf("mine = |%s|\n", ft_strcpy(s0, "HELLA"));
	printf("real = |%s|\n", strcpy(s0, "HELLA"));
	printf("mine = |%s|\n", ft_strcpy(s1, "Bonjour le monde !"));
	printf("real = |%s|\n", strcpy(s1, "Bonjour le monde !"));
	printf("mine = |%s|\n", ft_strcpy(s2, "#restezchezvous"));
	printf("real = |%s|\n", strcpy(s2, "#resterchezvous"));
	printf("mine = |%s|\n", ft_strcpy(s3, "Hi"));
	printf("real = |%s|\n", strcpy(s3, "HI"));
	printf("mine = |%s|\n", ft_strcpy(s4, "#42aAISON"));
	printf("real = |%s|\n", strcpy(s4, "#42MAISON"));
	printf("mine = |%s|\n", ft_strcpy(s5, "vide"));
	printf("real = |%s|\n", strcpy(s5, "vide"));
	printf("mine = |%s|\n", ft_strcpy(s6, "rien"));
	printf("real = |%s|\n", strcpy(s6, "rien"));
	printf("mine = |%s|\n", ft_strcpy(s7, "thehidden"));
	printf("real = |%s|\n", strcpy(s7, "thehidden"));
	printf("mine = |%s|\n", ft_strcpy(s8,
				"asdklfjasdfj////asdf'''asdf3##"));
	printf("real = |%s|\n", strcpy(s8,
				"asdklfjasdfj////asdf'''asdf3##"));
	printf("------------------------------\n\n");
}

void	ft__write(void)
{
	int fd;

	fd = 1;
	errno = 0;
	printf("-----------FT_WRITE-----------\n");
	printf("mine = %ld errno = %d\n", ft_write(5000, "hello world\n", 12), errno);
	errno = 0;
	printf("real = %ld errno = %d\n", write(5000, "hello world\n", 12), errno);
	errno = 0;
	printf("mine = %ld errno= %d\n", ft_write(fd, "hi\n", 3), errno);
	errno = 0;
	printf("real = %ld erno = %d\n", write(fd, "hi\n", 3), errno);
	errno = 0;
	printf("mine = %ld errno = %d\n", ft_write(50000, "hola, como estas ?\n", 19),
			errno);
	errno = 0;
	printf("real = %ld errno = %d\n", write(50000, "hola, como estas ?\n", 19),
			errno);
	errno = 0;
	printf("mine = %ld errno = %d\n", ft_write(fd, "welcome hi\n", 10), errno);
	errno = 0;
	printf("real = %ld errno = %d\n", write(fd, "welcome hi\n", 10), errno);
	printf("------------------------------\n\n");
}

void	ft__read(void)
{
	int	fd;

	fd = 1;
	errno = 0;
	printf("-----------FT_READ-----------\n");
	printf("mine = %ld errno = %d\n", ft_read(1, "Makefile", 12), errno);
	errno = 0;
	printf("real = %ld errno = %d\n", read(1, "Makefile", 12), errno);
	errno = 0;
	printf("------------------------------\n\n");
}

void	ft_dup(void)
{
	printf("-----------FT_STRDUP----------\n");
	printf("mine = |%s|\n", ft_strdup("hello"));
	printf("real = |%s|\n", strdup("hello"));
	printf("mine = |%s|\n", ft_strdup("HELLA"));
	printf("real = |%s|\n", strdup("HELLA"));
	printf("mine = |%s|\n", ft_strdup("Bonjour le monde !"));
	printf("real = |%s|\n", strdup("Bonjour le monde !"));
	printf("mine = |%s|\n", ft_strdup("#restezchezvous"));
	printf("real = |%s|\n", strdup("#resterchezvous"));
	printf("mine = |%s|\n", ft_strdup("Hi"));
	printf("real = |%s|\n", strdup("HI"));
	printf("mine = |%s|\n", ft_strdup("#42aAISON"));
	printf("real = |%s|\n", strdup("#42MAISON"));
	printf("mine = |%s|\n", ft_strdup("vide"));
	printf("real = |%s|\n", strdup("vide"));
	printf("mine = |%s|\n", ft_strdup("rien"));
	printf("real = |%s|\n", strdup("rien"));
	printf("mine = |%s|\n", ft_strdup("thehidden"));
	printf("real = |%s|\n", strdup("thehidden"));
	printf("mine = |%s|\n", ft_strdup(
				"asdklfjasdfj////asdf'''asdf3##"));
	printf("real = |%s|\n", strdup(
				"asdklfjasdfj////asdf'''asdf3##"));
	printf("------------------------------\n\n");
}

int		main(void)
{
	ft_len();
	ft_cmp();
	ft_cpy();
	ft__write();
	ft__read();
	ft_dup();
	return (0);
}