//
// EPITECH PROJECT, 2019
// Rush3
// File description:
// sfml.hpp
//

#ifndef SFML_H
#define SFML_H

enum SPRITE{
    BG = 0,
    CURVE,
    NB_SPRITE,
};

enum TEXTES{
    HOSTNAME = 0,
    USERNAME,
    KERNEL,
    NETWORK,
    OS,
    FREE_RAM,
    CPU,
    TIME,
    RAM_MAX,
    UPTIME,
    RAM_USED,
    RAM_PERCENT,
    NBR_CPU,
    CACHE,
    CPU_LOAD,
    NB_TEXTE,
};

static const float POS_TEXTS_[NB_TEXTE][2] = {
    {60, 120},  // ok hostname
    {60, 170}, // ok username
    {60, 270}, // ok kernel
    {60, 320}, // ok network
    {60, 220}, ///ok os
    {60, 610},  //ok free ram
    {580, 610},  //ok cpu
    {70, 50},  //ok time
    {60, 560},    //ok ram max
    {360, 410}, //ok uptime
    {60, 510},  //used ram
    {440, 510}, //ok ram percent
    {580, 560}, // ok nbr_cpu
    {880, 560}, // ok cache
    {880, 510}, //ok load cpu
};

static const std::string PATH_FONT_ = "rsrc/yugothib.ttf";

static const std::string PATH_SPRITE_[NB_SPRITE] = {
    "rsrc/bg.png",
    "rsrc/curve.png"
};

class rsrc {    
    public:
        rsrc();
        ~rsrc();
        void edit_static_texts();
        void edit_dynamic_texts();
        std::vector<sf::Sprite> _sprites;
        sf::Texture _textures;
        std::vector<sf::Text> _textes;
        sf::Font _font;
};

#endif
