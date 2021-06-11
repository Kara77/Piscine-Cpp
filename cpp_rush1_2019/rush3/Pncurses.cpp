/*
** EPITECH PROJECT, 2019
** file
** File description:
** file
*/

#include <curses.h>
#include <iostream>
#include <ncurses.h>
#include "step.hpp"
#include <time.h>

void GraphicWindow(Step system);

void color(int c)
{
        if (c == 'a') { 
                bkgd(COLOR_PAIR(1));
        } else if (c == 'z') {
                bkgd(COLOR_PAIR(2));
        } else if (c == 'e') {
                bkgd(COLOR_PAIR(3));
        } else if (c == 'r') {
                bkgd(COLOR_PAIR(4));
        } else if (c == 't') {
                bkgd(COLOR_PAIR(5));
        } else if (c == 'y') {
                bkgd(COLOR_PAIR(6));
        } else if (c == 'u') {
                bkgd(COLOR_PAIR(7));
        }
}


void openWindow(Step system)
{
        WINDOW *my_time, *host_name, *login, *kernel, *name_os;
        int c;
        initscr();
        curs_set(0);
        nodelay(stdscr, true);

        start_color();

        init_pair(1, COLOR_RED, COLOR_BLACK);
        init_pair(2, COLOR_GREEN, COLOR_BLACK);
        init_pair(3, COLOR_YELLOW, COLOR_BLACK);
        init_pair(4, COLOR_BLUE, COLOR_BLACK);
        init_pair(5, COLOR_MAGENTA, COLOR_BLACK);
        init_pair(6, COLOR_CYAN, COLOR_BLACK);
        init_pair(7, COLOR_WHITE, COLOR_BLACK);

        my_time= subwin(stdscr, LINES/5, COLS, 0, 0);
        my_time= subwin(stdscr, LINES/5, COLS, 0, 0);
        host_name= subwin(stdscr, LINES/5, COLS, LINES/5, 0);
        login= subwin(stdscr, LINES/5, COLS, 2 * LINES/5, 0);
        kernel= subwin(stdscr, LINES/5, COLS,3 * LINES/5, 0);
        name_os= subwin(stdscr, LINES/5, COLS, 4 *LINES/5, 0);

        box(my_time, ACS_VLINE, ACS_HLINE);
        box(host_name, ACS_VLINE, ACS_HLINE);
        box(login, ACS_VLINE, ACS_HLINE);
        box(kernel, ACS_VLINE, ACS_HLINE);
        box(name_os, ACS_VLINE, ACS_HLINE);

        

        while (c != 'q') {
                system.setAll(getTimeval(), getHostnameval(), getLoginval(), getKernelVersion(), getNameOs());
                color(c);
                mvwprintw(my_time, 1, 1,("Date: " + system.getTime()).c_str());
                mvwprintw(host_name, 1, 1,("HOST-NAME: " + system.getHostname()).c_str());
                mvwprintw(login, 1, 1, ("LOGIN: " + system.getLogin()).c_str());
                mvwprintw(kernel, 1, 1, ("KERNEL: " + system.getKernel()).c_str());
                mvwprintw(name_os, 1, 1, ("OS: " + system.getNameOS()).c_str());
                wrefresh(my_time);
                c  = getch();
                if (c == 'c')
                GraphicWindow(system);
                
        }
        endwin();
}

int main(void) {
        Step system;
        openWindow(system);
        return 0;
}


