//
// EPITECH PROJECT, 2019
// Rush3
// File description:
// sfml.cpp
//

#include <SFML/Graphics.hpp>
#include "../include/sfml.hpp"
#include "../include/system.hpp"
#include <iostream>

rsrc::rsrc()
{

    _textes.resize(NB_TEXTE);
    _sprites.resize(NB_SPRITE);
    _font.loadFromFile(PATH_FONT_);

    for (int i = 0 ; i < NB_SPRITE ; i++) {
        _textures.loadFromFile(PATH_SPRITE_[0]);
        _sprites[i].setTexture(_textures);    
    }
    
    for (int i = 0 ; i < NB_TEXTE ; i++) {
        _textes[i].setFont(_font);
        _textes[i].setString("...");
        _textes[i].setCharacterSize(25);
    }
}

rsrc::~rsrc() {}

void rsrc::edit_static_texts()
{
    computer y;

    _textes[CPU].setString(y.getCpu());
    _textes[OS].setString("Os  : " + y.getOs());
    _textes[KERNEL].setString("Kernel  : " + y.getKernel());
    _textes[HOSTNAME].setString("Hostname  : " + y.getHostname());
    _textes[USERNAME].setString("Username  : " + y.getUsername());
    _textes[RAM_MAX].setString("Capacity ram  : " + y.getRamMax());
    _textes[NETWORK].setString("Network  : Received : " + y.getNetwork_received() + " Bytes\n                  Transmited : " + y.getNetwork_transmited() + " Bytes");
    _textes[NBR_CPU].setString("Nbr of Cpu  : " + y.getNbrCpu());
    _textes[CACHE].setString("Cache  : " + y.getCache());
}

void rsrc::edit_dynamic_texts()
{
    computer y;

    if (_textes[TIME].getString() != y.getTime())
        _textes[CPU_LOAD].setString(y.getCpuLoad());
    _textes[FREE_RAM].setString("Free ram  : " + y.getRamFree());
    _textes[TIME].setString(y.getTime());
    _textes[UPTIME].setString("Uptime   " + y.getUptime());
    _textes[RAM_USED].setString("Used ram  : " + y.getRamUsed());
    _textes[RAM_PERCENT].setString(y.getRamPercent());
}

int graphic()
{
    rsrc r;
    sf::RenderWindow window(sf::VideoMode(1280, 720), "MyGkrellm");
    r.edit_static_texts();
    while (window.isOpen())
    {
        sf::Event event;
        r.edit_dynamic_texts();
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(r._sprites[BG]);
        for (int i = 0 ; i < NB_TEXTE ; i++) {
            r._textes[i].setPosition(sf::Vector2f(POS_TEXTS_[i][0], POS_TEXTS_[i][1]));
    
            window.draw(r._textes[i]);
        }
        window.display();
    }
    return 0;
}
