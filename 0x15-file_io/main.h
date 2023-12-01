#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>

int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
size_t _strlen(const char *str);
int append_text_to_file(const char *filename, char *text_content);
void print_error(char *message);
void display_elf_header(const char *filename);

#endif /* MAIN_H */
