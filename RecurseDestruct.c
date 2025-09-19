#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <sys/mman.h>
#include <sys/ioctl.h>
#include <linux/fb.h>


/*Open framebuffer device, fb.h*/

/*Get screen properties, resolution (width * height), color depth(bits per pixel), i will use ioctl*/

/*make a struct*/

/*Use mmap to get a pointer to the framebuffer*/


/*Manipulate the new address space as an array writing pixel by pixel, row by row, using recursion the same colour*/