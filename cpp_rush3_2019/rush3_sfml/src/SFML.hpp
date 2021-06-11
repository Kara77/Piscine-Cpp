
#ifndef Init_font_h
#define Init_font_h

#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <iostream>
#include <vector>

class InitResources {
    public:
        InitResources();
        ~InitResources();
        void EditStaticTexts();
        void EditDynamicTexts();
        std::vector<sf::Sprite> _sprites;
        sf::Texture _textures;
        std::vector<sf::Text> _textes;
        sf::Font _font;
};

class Graphic {
    sf::RenderWindow window;
    sf::Event event;
};

enum SPRITE{
    BG = 0,
    ABOUT_BTN_OFF,
    ABOUT_BTN_ON,
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

static const std::string PATH_FONT_FUTURA_LIGHT = "/Users/antonin/Desktop/Epitech/CPP_pool/Exercices/rush3/rush3 sfml/rush3 sfml/Resources/Fonts/futura_light_bt.ttf";
static const std::string PATH_FONT_FUTURA_MEDIUM = "/Users/antonin/Desktop/Epitech/CPP_pool/Exercices/rush3/rush3 sfml/rush3 sfml/Resources/Fonts/futura_medium_bt.ttf";
static const std::string PATH_FONT_FUTURA_MEDIUM_ITALIC = "/Users/antonin/Desktop/Epitech/CPP_pool/Exercices/rush3/rush3 sfml/rush3 sfml/Resources/Fonts/Futura_Medium_Italic_font.ttf";

static const std::string PATH_SPRITE_[NB_SPRITE] = {
    "/Users/antonin/Desktop/Epitech/CPP_pool/Exercices/rush3/rush3 sfml/rush3 sfml/Resources/Images/background.png",
    "/Users/antonin/Desktop/Epitech/CPP_pool/Exercices/rush3/rush3 sfml/rush3 sfml/Resources/Images/about_btn_off.png",
    "/Users/antonin/Desktop/Epitech/CPP_pool/Exercices/rush3/rush3 sfml/rush3 sfml/Resources/Images/about_btn_on.png",
};

#endif //Init_font_h//
