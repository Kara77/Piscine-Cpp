/*
** EPITECH PROJECT, 2019
** Rush3
** File description:
** main cpp
*/

#include <iostream>
#include <unistd.h>
#include <time.h>
#include <SFML/Graphics.hpp>
#include "../step.hpp"

void GraphicWindow(Step system)
{
    std::string Login = system.getLogin();
    std::string Hostname = system.getHostname();
    std::string Time = system.getTime();
    std::string Kernel = system.getKernel();
    std::string Name_os = system.getNameOS();

    // Variable Text

    sf::Text Login_text;
    sf::Text Hostname_text;
    sf::Text Time_text;
    sf::Text Kernel_text;
    sf::Text Name_os_text;

    // Creation window

    sf::RenderWindow window(sf::VideoMode(800, 600), "My window", sf::Style::Close);
    window.setVerticalSyncEnabled(true);

    // Creation texture

    sf::Texture fd_texture;
    sf::Sprite fd_sprite;
    if (!fd_texture.loadFromFile("fondecran.png", sf::IntRect(800, 481, 1000, 1000)))
        exit(EXIT_FAILURE);
    fd_sprite.setTexture(fd_texture);
    fd_texture.update(window);

    // Creation text

sf::Font MyFont;
    if (!MyFont.loadFromFile("Aller_Bd.ttf"))
        exit(EXIT_FAILURE);
    
    // Creation login

    Login_text.setFont(MyFont);
    Login_text.setString(system.getLogin());
    Login_text.setCharacterSize(16);
    Login_text.setFillColor(sf::Color::White);
    Login_text.setStyle(sf::Text::Bold);
    Login_text.move(50.f, 1.f);

    // Creation Hostname

    Hostname_text.setFont(MyFont);
    Hostname_text.setString(system.getHostname());
    Hostname_text.setCharacterSize(16);
    Hostname_text.setFillColor(sf::Color::White);
    Hostname_text.setStyle(sf::Text::Bold);
    Hostname_text.move(50.f, 40.f);

    // Creation Time

    Time_text.setFont(MyFont);
    Time_text.setString(system.getTime());
    Time_text.setCharacterSize(16);
    Time_text.setFillColor(sf::Color::White);
    Time_text.setStyle(sf::Text::Bold);
    Time_text.move(50.f, 80.f);

    // Creation Kernel

    Kernel_text.setFont(MyFont);
    Kernel_text.setString(system.getKernel());
    Kernel_text.setCharacterSize(16);
    Kernel_text.setFillColor(sf::Color::White);
    Kernel_text.setStyle(sf::Text::Bold);
    Kernel_text.move(50.f, 120.f);

    // Creation Name_os

    Name_os_text.setFont(MyFont);
    Name_os_text.setString(system.getNameOS());
    Name_os_text.setCharacterSize(16);
    Name_os_text.setFillColor(sf::Color::White);
    Name_os_text.setStyle(sf::Text::Bold);
    Name_os_text.move(50.f, 160.f);

    while (window.isOpen()) {
        
        // Creation event
        
        sf::Event event;

        // Gestion event

        while (window.pollEvent(event)) {
            switch (event.type) {
                case sf::Event::Closed:
                    window.close();
                    break;
                case sf::Event::KeyPressed:
                    if (event.key.code == sf::Keyboard::Escape) {
                        window.close();
                    }
                default:
                    break;
            }
        }
        window.clear(sf::Color::Black);
        window.draw(fd_sprite);
        window.draw(Login_text);
        window.draw(Hostname_text);
        window.draw(Time_text);
        window.draw(Kernel_text);
        window.draw(Name_os_text);
        window.display();
        //window.refresh();
        sleep(3);
        system.setAll(getTimeval(), getHostnameval(), getLoginval(),
            getKernelVersion(), getNameOs());
    }
}