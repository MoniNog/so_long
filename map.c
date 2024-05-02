#include "get_next_line.h"
#define MAX_WIDTH 100

typedef struct s_list {
	char 			*line;
	struct s_list 	*next;
}	t_list;

//int	check_map(int fd)
// {
// 	if (!fd)
// 		printf("Error\nMap vide");
// 	return(0);
// }

t_list	*create_new_pearl(void *line_text)
{
	t_list	*new_pearl;

	new_pearl = (t_list *)malloc(sizeof(t_list));
	if (new_pearl == NULL)
		return (NULL);
	new_pearl->line = line_text;
	new_pearl->next = NULL;
	return (new_pearl);
}
void attach_pearl_at_end(t_list **necklace, t_list *new_pearl)
{
	if (!*necklace)
		*necklace = new_pearl;
	else
	{
		t_list *current = *necklace;
		while (current->next)
			current = current->next;
		current->next = new_pearl;
	}
}
void free_necklace(t_list *necklace)
{
	t_list	*temp;

	while (necklace)
	{
		temp = necklace;
		necklace = necklace->next;
		free(temp->line);
		free(temp);
	}
}

t_list *string_lines_to_necklace(char *filename)
{
	t_list	*necklace;
	char	*line;
	int		fd;
	t_list	*pearl;

	necklace = NULL;
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		perror("Error opening file");
		return NULL;
	}
	while ((line = get_next_line(fd)))
	{
		pearl = create_new_pearl(line);
		if (!pearl)
		{
			free_necklace(necklace);
			close(fd);
			return NULL;
		}
		attach_pearl_at_end(&necklace, pearl);
	}
	close(fd);
	return necklace;
}

int main(int argc, char **argv)
{
	t_list	*current;
	t_list	*necklace;
	
	necklace = string_lines_to_necklace(argv[1]);
	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s <filename>\n", argv[0]);
		return EXIT_FAILURE;
	}
	if (!necklace)
	{
		fprintf(stderr, "Error\nMap empty\n");
		return EXIT_FAILURE;
	}
	current = necklace;
	while (current != NULL)
	{
		printf("%s", current->line);
		current = current->next;
	}
	free_necklace(necklace);
	return EXIT_SUCCESS;
}

// fonctionne !!!