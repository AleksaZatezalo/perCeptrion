#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

#define BUFFER_SIZE 1024

int main(int argc, char *argv[])
{
    if (argc!=3){
        fprintf(stderr, "USAGE: files input_file output_file");
        return -1;
    }

    int fd1 = open(argv[1], O_RDONLY);
    int fd2 = open(argv[2], O_WRONLY | O_CREAT);
    char buff[BUFFER_SIZE];
    int bytes;

    while ((bytes = read(fd1, buff, BUFFER_SIZE)) !=0) {
        for (int i = 0; i < bytes; i++) {
            write(fd2, buff, bytes);
        }
    }

    close(fd1);
    close(fd2);
    return 0;
}