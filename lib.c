#include <unistd.h>
#include <stdio.h>

const char interp_path[] __attribute__((section(".interp"))) = "/lib64/ld-linux-x86-64.so.2";

void print_version()
{
    printf("Library version 1.0\n");
    _exit(0);
}
