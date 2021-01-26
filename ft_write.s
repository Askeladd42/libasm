# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_write.s                                         :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: plam <plam@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/09/28 15:43:27 by plam              #+#    #+#              #
#    Updated: 2020/09/28 15:43:28 by plam             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

global	ft_write
extern	__errno_location

section	.text

ft_write:	push	r8
			push	rsi
			mov		rsi, 0x0
			mov		rax, 0x05
			syscall
			pop		rsi
			cmp		rax, 9
			jz		ret_err
			mov		rax, 0x01
			syscall
			cmp		rax, 0
			jl		ret_err
			pop		r8
			ret

ret_err:	neg		rax
			mov		r8, rax
			call	__errno_location
			mov		[rax], r8
			pop		r8
			ret