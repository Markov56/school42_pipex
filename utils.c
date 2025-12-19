/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarkov <rmarkov@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 15:05:15 by rmarkov           #+#    #+#             */
/*   Updated: 2025/12/19 15:05:17 by rmarkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

void	free_args(char **args)
{
	int	i;

	i = 0;
	if (!args)
		return ;
	while (args[i])
		free(args[i++]);
	free(args);
}

static char	*get_cmd_pth(char *cmd, char **envp)
{
	char	**envp_paths;
	char	*cmd_path;
	char	*path;
	int		i;

	i = 0;
	while (ft_strnstr(envp[i], "PATH=", 5) == 0)
		i++;
	envp_paths = ft_split(envp[i] + 5, ':');
	i = 0;
	while (envp_paths[i])
	{
		path = ft_strjoin(envp_paths[i], "/");
		cmd_path = ft_strjoin(path, cmd);
		free(path);
		if (access(cmd_path, F_OK) == 0)
		{
			free_args(envp_paths);
			return (cmd_path);
		}
		free(cmd_path);
		i++;
	}
	free_args(envp_paths);
	return (NULL);
}

void	execute_cmd(char *cmd, char **envp)
{
	char	**args;
	char	*cmd_path;

	args = ft_split(cmd, ' ');
	cmd_path = get_cmd_pth(args[0], envp);
	if (!cmd_path)
	{
		free_args(args);
		exit(127);
	}
	if (execve(cmd_path, args, envp) == -1)
	{
		free_args(args);
		free(cmd_path);
		perror("execve");
		exit(1);
	}
}
