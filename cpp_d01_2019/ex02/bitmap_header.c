/*
** EPITECH PROJECT, 2018
** The BMP Format
** File description:
** ex02 bitmap_header
*/

#include  <stdint.h>
#include  <stdlib.h>
#include  <unistd.h>
#include  <fcntl.h>
#include "bitmap.h"

void make_bmp_header(bmp_header_t *header, size_t size)
{
    int x = 1;
    int length = sizeof(bmp_header_t) + sizeof(bmp_info_header_t);

    if (*(char *) & x == 1)
        header -> magic = 0x4D42;
    else
        header -> magic = 0x424D;
    header -> size = size * size * sizeof(int) + length;
    header -> _app1 = 0;
    header -> _app2 = 0;
    header -> offset = length;
}

void make_bmp_info_header(bmp_info_header_t *header, size_t size)
{
    header -> size = sizeof(bmp_info_header_t);
    header -> width = size;
    header -> height = size;
    header -> planes = 1;
    header -> bpp = 32;
    header -> compression = 0;
    header -> raw_data_size = sizeof(uint32_t) * size * size;
    header -> h_resolution = 0;
    header -> v_resolution = 0;
    header -> palette_size = 0;
    header -> important_colors = 0;
}