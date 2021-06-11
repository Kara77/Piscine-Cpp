/*
** EPITECH PROJECT, 2019
** file
** File description:
** file
*/

#include "DisplayNcurses.hpp"

DisplayNcurses::DisplayNcurses()
{}

DisplayNcurses::~DisplayNcurses()
{}

void DisplayNcurses::InitResources(MonitorModule *module, WINDOW **window)
{
    module->setAll();
    mvwprintw(window[0], 1, 1,("Date: " + module->getTime()).c_str());
    mvwprintw(window[1], 1, 1,("HOST-NAME: " + module->getHostname()).c_str());
    mvwprintw(window[2], 1, 1, ("LOGIN: " + module->getLogin()).c_str());
    mvwprintw(window[3], 1, 1, ("KERNEL: " + module->getKernel()).c_str());
    mvwprintw(window[4], 1, 1, ("OS: " + module->getNameOS()).c_str());
    mvwprintw(window[5], 1, 1, ("cpu: " + module->getCPU()).c_str());
    //wrefresh(window[0]);
}

bool DisplayNcurses::Graphic(MonitorModule *module)
{
        WINDOW *window[6];
        int c;
        initscr();
        curs_set(0);
        nodelay(stdscr, true);
        bool end = false;

        window[0] = subwin(stdscr, LINES/6, COLS, 0, 0);
        window[1] = subwin(stdscr, LINES/6, COLS, LINES / 6, 0);
        window[2] = subwin(stdscr, LINES/6, COLS, 2 * LINES / 6, 0);
        window[3] = subwin(stdscr, LINES/6, COLS, 3 * LINES / 6, 0);
        window[4] = subwin(stdscr, LINES/6, COLS, 4 * LINES / 6, 0);
        window[5] = subwin(stdscr, LINES/6, COLS, 5 * LINES / 6, 0);

        box(window[0], ACS_VLINE, ACS_HLINE);
        box(window[1], ACS_VLINE, ACS_HLINE);
        box(window[2], ACS_VLINE, ACS_HLINE);
        box(window[3], ACS_VLINE, ACS_HLINE);
        box(window[4], ACS_VLINE, ACS_HLINE);
        box(window[5], ACS_VLINE, ACS_HLINE);

        while (c != 'q' && c != 'c') {
            InitResources(module, window);
            c = getch();
        }
        endwin();
        if (c == 'c')
            return (true);
        else
            return (false);
}