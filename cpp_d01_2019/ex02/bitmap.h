/*
** EPITECH PROJECT, 2018
** The BMP Format
** File description:
** ex02 bitmap.h
*/

#ifndef _BITMAP_H
#define _BITMAP_H

typedef struct __attribute__((packed)) bmp_header
{
    uint16_t magic;
    uint32_t size;
    uint16_t _app1;
    uint16_t _app2;
    uint32_t offset;
} bmp_header_t;

typedef struct __attribute__((packed)) bmp_info_header
{
    uint32_t size;
    uint32_t width;
    uint32_t height;
    uint16_t planes;
    uint16_t bpp;
    uint32_t compression;
    uint32_t raw_data_size;
    uint32_t h_resolution;
    uint32_t v_resolution;
    uint32_t palette_size;
    uint32_t important_colors;
} bmp_info_header_t;

#endif