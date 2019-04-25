/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshara <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 19:12:59 by bshara            #+#    #+#             */
/*   Updated: 2019/04/04 15:58:14 by bshara           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_putchar(char c);

void		ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int			ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

void		ft_print(int argc, char **argv)
{
	int i;

	i = 1;
	if (argc > 1)
	{
		while (i < argc)
		{
			ft_putstr(argv[i]);
			i++;
			ft_putchar('\n');
		}
	}
}

int			main(int argc, char **argv)
{
	int		j;
	int		i;
	char	*key;

	j = 2;
	while (j < argc)
	{
		key = argv[j];
		i = j - 1;
		while (i >= 1 && ft_strcmp(argv[i], key) > 0)
		{
			argv[i + 1] = argv[i];
			i = i - 1;
		}
		argv[i + 1] = key;
		j++;
	}
	ft_print(argc, argv);
	return (0);
}
