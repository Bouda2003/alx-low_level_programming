#include "main.h"
/**
 * create_file - Creates a file.
 * @filename: A pointer to the name of the file to create.
 * @text_content: A pointer to a string to write to the file.
 *
 * Return: If the function fails - -1.
 *         Otherwise - 1.
 */
int create_file(const char *filename, char *text_content)
{
	 int file_descriptor;
    ssize_t write_status;

    if (filename == NULL)
        return (-1);

    file_descriptor = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
    if (file_descriptor == -1)
        return (-1);

    if (text_content != NULL) {
        write_status = write(file_descriptor, text_content, strlen(text_content));
        if (write_status == -1)
            return (-1);
    }

    close(file_descriptor);
    return (1);
}
