/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odursun <odursun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 09:59:02 by mboy              #+#    #+#             */
/*   Updated: 2022/02/16 13:11:06 by odursun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H
# include <unistd.h>
# include <stdlib.h>
# include <sys/types.h>
# include <signal.h>
# include <stdio.h>

typedef struct s_list
{
	int		pid_server;
}				t_list;

t_list	*client_initiate(void);
void	client_send(t_list *talk, unsigned char *mess);
int		ft_strlen(char *str);
t_list	*server_initiate(void);
void	server_receive(int binary);
void	ft_putstr(char *str);
void	ft_putnbr(int n);
int		ft_atoi(const char *str);

#endif
