# Simple shell
## Description (#shellDB$ ) :spiral_notepad:

Write a simple UNIX command interpreter. (BREVE DESCRIPCIÓN)


## List of allowed functions and system calls :pushpin:

|     FUNCTION                          |MANUAL                         |
|----------------|-------------------------------|------------|
|`exceve(2)`            |[Execute program](https://man7.org/linux/man-pages/man2/execve.2.html)  |
|`close(2)`            |[Close a file descriptor](https://man7.org/linux/man-pages/man2/close.2.html) |
|`closedir(3)`            |[Close a directory](https://man7.org/linux/man-pages/man3/closedir.3.html) |
|`fork(2)`            |[Create a child process](https://man7.org/linux/man-pages/man2/fork.2.html) |
|`malloc(3), free(3)`            |[allocate and free dynamic memory](https://man7.org/linux/man-pages/man3/free.3.html) |
|`getline(3)`            |[Delimited string input](https://man7.org/linux/man-pages/man3/getline.3.html) |
|`isatty(3)`            |[Test whether a FD refers to a terminal](https://man7.org/linux/man-pages/man3/isatty.3.html) |
|`opendir(3)`            |[Open a directory](https://man7.org/linux/man-pages/man3/opendir.3.html) |
|`perror(3)`            |[Print a system error message](https://man7.org/linux/man-pages/man3/perror.3.html) |
|`readdir(3)`            |[Read a directory](https://man7.org/linux/man-pages/man3/readdir.3.html) |
|`stat(2)`            |[Get file status](https://man7.org/linux/man-pages/man2/lstat.2.html)|
|`strtok(3)`            |[Extract tokens from strings](https://man7.org/linux/man-pages/man3/strtok.3.html) |
|`wait(2)`            |[Wait for process to change](https://man7.org/linux/man-pages/man2/waitid.2.html) |
|`write(2)`            |[Write to a FD](https://man7.org/linux/man-pages/man2/write.2.html) |


## Tasks :memo:


## Compilation :checkered_flag:

This super shell is compiled with all these flags:
   
     gcc -Wall -Werror -Wextra -pedantic *.c -o hsh

Created on `Ubuntu 14.04 LTS`, compiled with the version `gcc 4.8.4`

## Authors :woman_technologist: :man_technologist:
Diana Parra [GitHub](https://github.com/dianaparr) and
Brian Zapata[GitHub](https://github.com/brian-1989)

**Project to:** 
![](https://www.holbertonschool.com/holberton-logo.png)

