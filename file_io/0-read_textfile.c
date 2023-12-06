#include "main.h"
/*
 * read_textfile - Reads a text file and prints it to the POSIX standard output
 * @filename: name of the file to read
 * @letters: number of letters to read and print
 * Return: 0 if filename is NULL
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_descriptor; /* Entier utlisé pour stocker le file descriptor */
	ssize_t nb_read, nb_write; /* int nombre de letters lu et affiché/écrit */
	char *buffer; /* Pointeur qui va stocker tmp les caractères lus du fichier */

	if (filename == NULL)
		return (0);

	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL) /* ERR : si l'allocation échoue */
	{
		close(file_descriptor);
		return (0); /* on retourne 0 */
	}
	/* Lecture du fichier et stockage du nombre de caractères lus dans nb_read */
	nb_read = read(file_descriptor, buffer, letters);
	if (nb_read == -1) /* ERR : si la lecture échoue */
	{
		free(buffer); /* on libère la mémoire allouée pour le buffer */
		close(file_descriptor);
		return (0); /* on retourne 0 */
	}
	/* et stockage du nombre de caractères écrits dans nb_write */
	nb_write = write(STDOUT_FILENO, buffer, nb_read);
	if (nb_write == -1 || nb_write != nb_read) /* ERR : si l'écriture échoue */
	{
		free(buffer); /* on libère la mémoire allouée pour le buffer */
		close(file_descriptor);
		return (0); /* on retourne 0 */
	}
	free(buffer); /* Libération de la mémoire allouée pour le buffer */
	close(file_descriptor);
	return (nb_write); /*On return le nombre de caractères écrits dans stdout*/
}
