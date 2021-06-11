//
// EPITECH PROJECT, 2019
// cpp pool rush3
// File description:
// ncurses part
//

#include "../include/system.hpp"
#include <ncurses.h>
#include <ctime>
#include <string.h>

static void init_window()
{
    std::string color;
    int color1;
    int color2;

    std::cout << "Enter the number corresponding to the color desired (characters) :" << std::endl;
    std::cout << "0. Black" << std::endl;
    std::cout << "1. Red" << std::endl;
    std::cout << "2. Green" << std::endl;
    std::cout << "3. Yellow" << std::endl;
    std::cout << "4. Blue" << std::endl;
    std::cout << "5. Magenta" << std::endl;
    std::cout << "6. Cyan" << std::endl;
    std::cout << "7. White" << std::endl;
    std::cout << "8. Grey" << std::endl;
    std::cout << "9. Pink" << std::endl;
HERE:
    std::getline(std::cin, color);
    if (color[0] < '0' || color[0] > '9') {
	std::cout << "Out of range. Try again" << std::endl;
	goto HERE;
    }
    color1 = std::stoi(color, nullptr, 10);
    std::cout << std::endl;
    std::cout << "Enter the number corresponding to the color desired (background) :" << std::endl;
    std::cout << "0. Black" << std::endl;
    std::cout << "1. Red" << std::endl;
    std::cout << "2. Green" << std::endl;
    std::cout << "3. Yellow" << std::endl;
    std::cout << "4. Blue" << std::endl;
    std::cout << "5. Magenta" << std::endl;
    std::cout << "6. Cyan" << std::endl;
    std::cout << "7. White" << std::endl;
    std::cout << "8. Grey" << std::endl;
    std::cout << "9. Pink" << std::endl;
HERE2:
    std::getline(std::cin, color);
    if (color[0] < '0' || color[0] > '9') {
        std::cout << "Out of range. Try again" << std::endl;
        goto HERE2;
    }
    color2 = std::stoi(color, nullptr, 10);
    initscr();
    curs_set(FALSE);
    noecho();
    keypad(stdscr, TRUE);
    attron(COLOR_PAIR(1));
    start_color();
    init_pair(1, color1, color2);
    bkgd(COLOR_PAIR(1));
//    init_pair(1, COLOR_YELLOW, COLOR_BLACK);
}

int ncurses()
{
    computer pc;
    std::string tmp;

    init_window();
    while (1) {
	clear();
	mvprintw(0, COLS / 2 - 5, "MyGKrellm");
	tmp = pc.getHostname();
	mvprintw(0, 1, "Hostname :");
	mvprintw(1, 1, tmp.c_str());
	tmp = pc.getTime();
	tmp.erase(tmp.begin() + 11, tmp.end() - 8);
	mvprintw(0, COLS - tmp.size() - 1, "Date :     Time :");
	mvprintw(1, COLS - tmp.size() - 1, tmp.c_str());
	tmp = pc.getUsername();
	mvprintw(3, COLS / 2 - (strlen("Username :") / 2), "Username :");
	mvprintw(4, COLS / 2 - (tmp.size() / 2), tmp.c_str());
	tmp = pc.getOs() + " " + pc.getKernel();
	mvprintw(6, COLS / 2 - (strlen("OS & Version :") / 2), "OS & Version :");
	mvprintw(7, COLS / 2 - (tmp.size() / 2), tmp.c_str());
	tmp = pc.getCpu();
	mvprintw(9, COLS / 2 - (strlen("CPU Model :") / 2), "CPU Model :");
	mvprintw(10, COLS / 2 - (tmp.size() / 2), tmp.c_str());
	tmp = "Number of CPU : " + pc.getNbrCpu();
	mvprintw(12, COLS / 2 - (tmp.size() / 2), tmp.c_str());
	tmp = "RAM Capacity : " + pc.getRamMax();
	mvprintw(14, COLS / 2 - (tmp.size() / 2), tmp.c_str());
	tmp = "RAM Used : " + pc.getRamUsed() + " (" + pc.getRamPercent() + ")";
	mvprintw(16, COLS / 2 - (tmp.size() / 2), tmp.c_str());
	tmp = "RAM Free : " + pc.getRamFree() + " (" + std::to_string(100.00 - std::stof(pc.getRamPercent())) + " %)";
	tmp.erase(tmp.begin() + 25, tmp.end() - 3);
	mvprintw(18, COLS / 2 - (tmp.size() / 2), tmp.c_str());
	tmp = "CPU Usage : " + pc.getCpuLoad() + " %";
	mvprintw(20, COLS / 2 - (tmp.size() / 2), tmp.c_str());
	tmp = "Cache size : " + pc.getCache();
	mvprintw(22, COLS / 2 - (tmp.size() / 2), tmp.c_str());
	tmp = "Bytes received : " + pc.getNetwork_received() + "     Bytes transmited : " + pc.getNetwork_transmited();
	mvprintw(24, COLS / 2 - (strlen("Network usage :") / 2), "Network usage :");
	mvprintw(25, COLS / 2 - (tmp.size() / 2), tmp.c_str());
	tmp = pc.getUptime();
	mvprintw(LINES - 2, COLS - 16, "Uptime :");
	mvprintw(LINES - 1, COLS - 16, tmp.c_str());
	napms(1000);
	refresh();
    }
    endwin();
    return 0;
}
