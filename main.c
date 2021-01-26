/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 15:32:58 by plam              #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2021/01/22 11:30:38 by user42           ###   ########.fr       */
=======
/*   Updated: 2021/01/21 17:22:50 by plam             ###   ########.fr       */
>>>>>>> d060908bee895665e763f0c1d2d59df199d06fbf
/*                                                                            */
/* ************************************************************************** */

#include "libasm.h"

/*void	ft_len(void)
{
	printf("-----------FT_STRLEN----------\n");
	printf("mine = |%zd|\n", ft_strlen("hello"));
	printf("real = |%zd|\n", strlen("hello"));
	printf("mine = |%zd|\n", ft_strlen("hello_world !"));
	printf("real = |%zd|\n", strlen("hello_world !"));
	printf("mine = |%zd|\n", ft_strlen("#stayathome"));
	printf("real = |%zd|\n", strlen("#stayathome"));
	printf("mine = |%zd|\n", ft_strlen("#42atom"));
	printf("real = |%zd|\n", strlen("#42atom"));
	printf("mine = |%zd|\n", ft_strlen(""));
	printf("real = |%zd|\n", strlen(""));
	printf("mine = |%zd|\n", ft_strlen("\n"));
	printf("real = |%zd|\n", strlen("\n"));
	printf("mine = |%zd|\n", ft_strlen("asdfasdf''///##!!@"));
	printf("real = |%zd|\n", strlen("asdfasdf''///##!!@"));
	printf("mine = |%zd|\n", ft_strlen("the\0hidden"));
	printf("real = |%zd|\n", strlen("the\0hidden"));
	printf("mine = |%zd|\n", ft_strlen("Lorem \bipsum\vdollar"));
	printf("real = |%zd|\n", strlen("Lorem \bipsum\vdollar"));
	printf("------------------------------\n\n");
}

void	ft_cmp(void)
{
	printf("-----------FT_STRCMP----------\n");
	printf("mine = |%d|\n", ft_strcmp("hello", "hello"));
	printf("real = |%d|\n", strcmp("hello", "hello"));
	printf("mine = |%d|\n", ft_strcmp("hello", "HELLA"));
	printf("real = |%d|\n", strcmp("hello", "HELLA"));
	printf("mine = |%d|\n", ft_strcmp("hello_world !", "Bonjour le monde !"));
	printf("real = |%d|\n", strcmp("hello_world !", "Bonjour le monde !"));
	printf("mine = |%d|\n", ft_strcmp("stayathome", "#restezchezvous"));
	printf("real = |%d|\n", strcmp("#stayathome", "#resterchezvous"));
	printf("mine = |%d|\n", ft_strcmp("Hi", "Hi"));
	printf("real = |%d|\n", strcmp("HI", "HI"));
	printf("mine = |%d|\n", ft_strcmp("#42atom", "#42aAISON"));
	printf("real = |%d|\n", strcmp("#42atom", "#42MAISON"));
	printf("mine = |%d|\n", ft_strcmp("", "vide"));
	printf("real = |%d|\n", strcmp("", "vide"));
	printf("mine = |%d|\n", ft_strcmp("\n", "rien"));
	printf("real = |%d|\n", strcmp("\n", "rien"));
	printf("mine = |%d|\n", ft_strcmp("the\0hidden", "thehidden"));
	printf("real = |%d|\n", strcmp("the\0hidden", "thehidden"));
	printf("mine = |%d|\n", ft_strcmp("asdklfjasdfj////asdf'''asdf3##",
				"asdklfjasdfj////asdf'''asdf3##"));
	printf("real = |%d|\n", strcmp("asdklfjasdfj////asdf'''asdf3##",
				"asdklfjasdfj////asdf'''asdf3##"));
	printf("------------------------------\n\n");
}

void	ft_cpy(void)
{
	/*char	str[5] = "hello";
	char	str[60] = "hello_world !";
	char	str[60] = "stayathome";
	char	str[60] = "Hi";
	char	str[60] = "HI";
	char	str[60] = "";
	char	str[60] = "\n";
	char	str[60] = "the\0hidden";*/
	char	str[128] = "asdklfjasdfj////asdf'''asdf3##";
	
	printf("-----------FT_STRCPY----------\n");
	printf("mine = |%s|\n", ft_strcpy(str, "hello"));
	printf("real = |%s|\n", strcpy(str, "hello"));
	printf("mine = |%s|\n", ft_strcpy(str, "HELLA"));
	printf("real = |%s|\n", strcpy(str, "HELLA"));
	printf("mine = |%s|\n", ft_strcpy(str, "Bonjour le monde !"));
	printf("real = |%s|\n", strcpy(str, "Bonjour le monde !"));
	printf("mine = |%s|\n", ft_strcpy(str, "#restezchezvous"));
	printf("real = |%s|\n", strcpy(str, "#resterchezvous"));
	printf("mine = |%s|\n", ft_strcpy(str, "Hi"));
	printf("real = |%s|\n", strcpy(str, "HI"));
	printf("mine = |%s|\n", ft_strcpy(str, "#42aAISON"));
	printf("real = |%s|\n", strcpy(str, "#42MAISON"));
	printf("mine = |%s|\n", ft_strcpy(str, "vide"));
	printf("real = |%s|\n", strcpy(str, "vide"));
	printf("mine = |%s|\n", ft_strcpy(str, "rien"));
	printf("real = |%s|\n", strcpy(str, "rien"));
	printf("mine = |%s|\n", ft_strcpy(str, "thehidden"));
	printf("real = |%s|\n", strcpy(str, "thehidden"));
	printf("mine = |%s|\n", ft_strcpy(str,
				"asdklfjasdfj////asdf'''asdf3##"));
	printf("real = |%s|\n", strcpy(str,
				"asdklfjasdfj////asdf'''asdf3##"));
	printf("------------------------------\n\n");
}
*/

void	ft__write(void)
{
	int fd;

	fd = 1;
	errno = 0;
	printf("-----------FT_WRITE-----------\n");
	printf("mine = %ld errno = %d\n", ft_write(5000, "hello world", 11), errno);
	errno = 0;
	printf("real = %ld errno = %d\n", write(5000, "hello world", 11), errno);
	errno = 0;
	printf("mine = %ld errno= %d\n", ft_write(fd, "hi", 2), errno);
	errno = 0;
	printf("real = %ld erno = %d\n", write(fd, "hi", 2), errno);
	errno = 0;
	printf("mine = %ld errno = %d\n", ft_write(50000, "hola, como estas ?", 18),
			errno);
	errno = 0;
	printf("real = %ld errno = %d\n", write(50000, "hola, como estas ?", 18),
			errno);
	errno = 0;
	printf("mine = %ld errno = %d\n", ft_write(fd, "welcome hi", 9), errno);
	errno = 0;
	printf("real = %ld errno = %d\n", write(fd, "welcome hi", 9), errno);
	printf("------------------------------\n\n");
}

int		main(void)
{
	//ft_len();
	//ft_cmp();
	ft__write();
	//ft__read();
	//ft_cpy();
	//ft_dup();
	return (0);
}