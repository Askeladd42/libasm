# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_strdup.s                                        :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: plam <plam@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/09/28 15:43:20 by plam              #+#    #+#              #
#    Updated: 2020/09/28 15:43:21 by plam             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

global	ft_strdup
extern	__errno_location
extern ft_strlen
extern ft_strcpy
extern malloc

<<<<<<< HEAD
global	ft_strdup
extern	ft_strlen
extern	ft_strcpy
extern	malloc

section	.text

ft_strdup:	push	r8
=======
section	.text

ft_strdup:	xor	rax, rax
			syscall

free:		
>>>>>>> 154de449368aa45e429205ec456ced1c329852f8
