#include "main.h"

/**
 * main -  displays the information contained in the ELF
 * header at the start of an ELF file.
 * @argc: The number of arguments.
 * @argv: The array of arguments.
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
		exit(98);
	}
	display_elf_header(argv[1]);
	return (0);
}

/**
 * print_error - Prints an error message to
 * stderr and exits with status code 98.
 * @message: The error message.
 */
void print_error(char *message)
{
	fprintf(stderr, "Error: %s\n", message);
	exit(98);
}

/**
 * display_elf_header - Displays information from the
 * ELF header of an ELF file.
 * @filename: The name of the ELF file.
 */
void display_elf_header(const char *filename)
{
	int fd;

	Elf64_Ehdr elf_header;
	/* Open the ELF file for reading */
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		print_error("Can't open ELF file");
	/* Read the ELF header */
	if (read(fd, &elf_header, sizeof(Elf64_Ehdr)) != sizeof(Elf64_Ehdr))
		print_error("Can't read ELF header");
	/* Check if the file is an ELF file */
	if (elf_header.e_ident[EI_MAG0] != ELFMAG0 ||
			elf_header.e_ident[EI_MAG1] != ELFMAG1 ||
			elf_header.e_ident[EI_MAG2] != ELFMAG2 ||
			elf_header.e_ident[EI_MAG3] != ELFMAG3)
		print_error("Not an ELF file");
	/* Display ELF header information */
	printf("ELF Header:\n");
	printf("  Magic:   %02x %02x %02x %02x\n",
			elf_header.e_ident[EI_MAG0], elf_header.e_ident[EI_MAG1],
			elf_header.e_ident[EI_MAG2], elf_header.e_ident[EI_MAG3]);
	printf("  Class:                             %s\n",
			(elf_header.e_ident[EI_CLASS] == ELFCLASS32) ? "ELF32" :
			(elf_header.e_ident[EI_CLASS] == ELFCLASS64) ? "ELF64" : "Invalid class");
	printf("  Data:                              %s\n",
			(elf_header.e_ident[EI_DATA] == ELFDATA2LSB)
			? "2's complement, little endian" :
			(elf_header.e_ident[EI_DATA] == ELFDATA2MSB)
			? "2's complement, big endian" : "Invalid data encoding");
	printf("  Version:                           %d (current)\n",
			elf_header.e_ident[EI_VERSION]);
	printf("  OS/ABI:                            %d\n",
			elf_header.e_ident[EI_OSABI]);
	printf("  ABI Version:                       %d\n",
			elf_header.e_ident[EI_ABIVERSION]);
	printf("  Type:                              %d\n",
			elf_header.e_type);
	printf("  Entry point address:               %lx\n",
			(unsigned long)elf_header.e_entry);
}
