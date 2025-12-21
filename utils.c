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

static void	free_args(char **args)
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

	if (ft_strchr(cmd, '/'))
		return (ft_strdup(cmd));
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
		if (access(cmd_path, X_OK) == 0)
			return (free_args(envp_paths), cmd_path);
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
	if (!args)
		exit(1);
	cmd_path = get_cmd_pth(args[0], envp);
	if (!cmd_path)
	{
		ft_putstr_fd("pipex: ", 2);
		ft_putstr_fd(args[0], 2);
		ft_putendl_fd(": command not found", 2);
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
