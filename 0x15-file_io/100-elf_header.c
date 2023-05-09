#include <elf.h>
#include "main.h"
/**
 * print_err_usg - prints usage error
*/
void print_err_usg(void)
{
	dprintf(STDERR_FILENO, "Error: elf_header elf_filename");
	exit(98);
}
/**
 * print_f_acc_err - prints file access error
 * @fd: file descriptor
 * @h: pointer to elf header struct
*/
void print_f_acc_err(int fd, Elf64_Ehdr *h)
{
	dprintf(STDERR_FILENO, "Error: unable to access file");
	if (h)
		free(h);
	if (fd != -1)
		close(fd);
	exit(98);
}
/**
 * print_mem_alloc_err - prints memory allocation error
 * @fd: file descriptor of file to close
*/
void print_mem_alloc_err(int fd)
{
	dprintf(STDERR_FILENO, "Error: unable to allocate meory");
	close(fd);
	exit(98);
}
/**
 * iself - checks if file is an elf file
 * @e_indent: e_indent
 * Return: 0 if not elf, 1 if true
*/
int iself(unsigned char *e_indent)
{
	if (!e_indent)
		return (0);
	return (e_indent[0] == 127 && e_indent[1] == 'E' && e_indent[2] == 'L'
	 && e_indent[3] == 'F');
}
/**
 * print_not_elf - prints not elf error
 * @fd: file descriptor
 * @h: pointer to elf header struct
*/
void print_not_elf(int fd, Elf64_Ehdr *h)
{
	dprintf(STDERR_FILENO, "Error: Not an elf file");
	if (h)
		free(h);
	if (fd != -1)
		close(fd);
	exit(98);
}
/**
 * print_mag_num - prints the magic numbers
 * @s: elf e_indent character array
*/
void print_mag_num(unsigned char *s)
{
	int i;

	printf("  Magic:   ");
	for (i = 0; i < EI_NIDENT ; i++)
	{
		printf("%02x", s[i]);
		if (i == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}
/**
 * print_class - prints class
 * @s: elf e_indent character array
*/
void print_class(unsigned char *s)
{
	printf("  %35s", "Class:");

	switch (s[EI_CLASS])
	{
	case ELFCLASSNONE:
		printf("none\n");
		break;
	case ELFCLASS32:
		printf("ELF32\n");
		break;
	case ELFCLASS64:
		printf("ELF64\n");
		break;
	default:
		printf("<unknown: %x>\n", s[EI_CLASS]);
	}
}
/**
 * print_data- prints data
 * @s: elf e_indent character array
*/
void print_data(unsigned char *s)
{
	printf("  %35s", "Data:");

	switch (s[EI_DATA])
	{
	case ELFDATANONE:
		printf("none\n");
		break;
	case ELFDATA2LSB:
		printf("2's complement, little endian\n");
		break;
	case ELFDATA2MSB:
		printf("2's complement, big endian\n");
		break;
	default:
		printf("<unknown: %x>\n", s[EI_DATA]);
	}
}
/**
 * print_version- prints version
 * @s: elf e_indent character array
*/
void print_version(unsigned char *s)
{
	printf("  %35s", "Version:");

	switch (s[EI_VERSION])
	{
	case EV_NONE:
		printf("0 (invalid)\n");
		break;
	case EV_CURRENT:
		printf("1 (current)\n");
		break;
	default:
		printf("<unknown: %x>\n", s[EI_VERSION]);
	}
}
/**
 * print_osabi- prints OS/ABI
 * @s: elf e_indent character array
*/
void print_osabi(unsigned char *s)
{
	printf("  %35s", "OS/ABI:");

	switch (s[EI_OSABI])
	{
	case ELFOSABI_NONE:
		printf("UNIX - System V\n");
		break;
	case ELFOSABI_HPUX:
		printf("UNIX - HP-UX\n");
		break;
	case ELFOSABI_NETBSD:
		printf("UNIX - NetBSD\n");
		break;
	case ELFOSABI_LINUX:
		printf("UNIX - Linux\n");
		break;
	case ELFOSABI_SOLARIS:
		printf("UNIX - Solaris\n");
		break;
	case ELFOSABI_IRIX:
		printf("UNIX - IRIX\n");
		break;
	case ELFOSABI_FREEBSD:
		printf("UNIX - FreeBSD\n");
		break;
	case ELFOSABI_TRU64:
		printf("UNIX - TRU64\n");
		break;
	case ELFOSABI_ARM:
		printf("ARM\n");
		break;
	case ELFOSABI_STANDALONE:
		printf("Standalone App\n");
		break;
	default:
		printf("<unknown: %x>\n", s[EI_OSABI]);
	}
}
/**
 * print_abi- prints ABI version
 * @s: elf e_indent character array
*/
void print_abi(unsigned char *s)
{
	printf("  %35s", "ABI Version:");
	printf("%d\n", s[EI_ABIVERSION]);
}
/**
 * main - program that prints ELF header
 * @av: arguement vector
 * @ac: arguement count
 * Return: 0;
*/
int main(int ac, char **av)
{
	Elf64_Ehdr *h = NULL;
	int fd = -1, j;

	if (ac != 2)
		print_err_usg();
	fd = open(av[1], O_RDONLY);
	if (fd == -1)
		print_f_acc_err(fd, h);
	h = malloc(sizeof(Elf64_Ehdr));
	if (!h)
		print_mem_alloc_err(fd);
	j = read(1, h, sizeof(Elf64_Ehdr));
	if (j == -1)
		print_f_acc_err(fd, h);
	if (!iself(h->e_ident))
		print_not_elf(fd, h);
	print_mag_num(h->e_ident);
	printf("ELF Header:\n");
	print_class(h->e_ident);
	print_data(h->e_ident);
	print_version(h->e_ident);
	print_osabi(h->e_ident);
	free(h);
	close(fd);
	return (0);
}
