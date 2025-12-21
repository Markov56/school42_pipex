/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarkov <rmarkov@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 15:05:06 by rmarkov           #+#    #+#             */
/*   Updated: 2025/12/19 15:05:09 by rmarkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

static int	exit_status(int status)
{
	if (WIFSIGNALED(status))
		return (128 + WTERMSIG(status));
	return (WEXITSTATUS(status));
}

static void	exec_cmd1(char **argv, char **envp, int *fd)
{
	int	infile;

	infile = open(argv[1], O_RDONLY);
	if (infile == -1)
	{
		perror("open file1");
		close(fd[0]);
		close(fd[1]);
		exit(1);
	}
	dup2(infile, STDIN_FILENO);
	dup2(fd[1], STDOUT_FILENO);
	close(fd[0]);
	close(fd[1]);
	close(infile);
	execute_cmd(argv[2], envp);
}

static void	exec_cmd2(char **argv, char **envp, int *fd)
{
	int	outfile;

	outfile = open(argv[4], O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (outfile == -1)
	{
		perror("open file2");
		exit(1);
	}
	dup2(fd[0], STDIN_FILENO);
	dup2(outfile, STDOUT_FILENO);
	close(fd[0]);
	close(fd[1]);
	close(outfile);
	execute_cmd(argv[3], envp);
}

int	main(int argc, char **argv, char **envp)
{
	int		fd[2];
	pid_t	pid1;
	pid_t	pid2;
	int		status1;
	int		status2;

	if (argc != 5)
		return (ft_putstr_fd("usage: ./pipex infile cmd cmd outfile\n", 2), 1);
	if (pipe(fd) == -1)
		return (1);
	pid1 = fork();
	if (pid1 == -1)
		return (perror("fork"), 1);
	if (pid1 == 0)
		exec_cmd1(argv, envp, fd);
	pid2 = fork();
	if (pid2 == -1)
		return (perror("fork"), 1);
	if (pid2 == 0)
		exec_cmd2(argv, envp, fd);
	close(fd[0]);
	close(fd[1]);
	waitpid(pid1, &status1, 0);
	waitpid(pid2, &status2, 0);
	return (exit_status(status2));
}
