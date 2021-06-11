/*
** EPITECH PROJECT, 2019
** Back to basics
** File description:
** ex00
*/

#ifndef EXO00_H_
#define EXO00_H_

typedef struct s_cthulhu
{
    int m_power;
    char *m_name;

} cthulhu_t;


typedef struct s_koala
{
    cthulhu_t m_parent;
    char m_is_a_legend;

} koala_t;

#endif /* !EXO00_H_ */