# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_read.s                                          :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: plam <plam@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/09/28 15:43:01 by plam              #+#    #+#              #
#    Updated: 2020/09/28 15:43:07 by plam             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

global	ft_read
extern	__errno_location

section	.text

ft_read:	xor	rax, rax
			syscall
			cmp	rax, 0
			jle	err
			ret

err:		neg	rax
			mov	r8,	rax
			call	__errno_location
			mov	[rax], r8
			mov	rax, -1
			ret
