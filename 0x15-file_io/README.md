line and exits with code 98.
 * Where NAME_OF_THE_FILE is the first argument passed to the program.
 * If files cannot be created or if write to file_to fails, the function print
 Error: Can't write NAME_OF_FILE, followed by a new line and exits with code 99.
 * Where NAME_OF_THE_FILE is the second argument passedto the program.
 * If the user cannot close a file descriptor, the function prints Error:
 Can't close fd FD_VALUE, foolowed by a new line on the POSIX standard
 error and exits with code 100.
 * Where FD_VALUE is the value of the file descriptor.

* 4. elf
 * [100-elf_header.c](./100-elf_header.c): C program that displays the information contained in the ELF header at the start of an ELF file.
 * Usage elf_header elf_filename
 * Displayed information:
  * Magic
  * Class
  * Data
  * Version
  * OS/ABI
  * ABI Version
  * Type
  * Entry point address
 * Format is identical to readelf -h (version 2.26.1).
 * If an error occurs or the file is not an ELF file, the function displays a corresponding error message to stderr and exits with a status value of 98.
