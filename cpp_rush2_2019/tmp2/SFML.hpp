
#ifndef Init_font_h
#define Init_font_h

#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <iostream>
#include <vector>

int Graphic_loop();

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
    NB_SPRITE,
};

enum TEXTES{
    HOSTNAME = 0,
    USERNAME,
    KERNEL,
    OS,
    TIME,
    NB_TEXTE
};

static const float POS_TEXTS_[NB_TEXTE][2] = {
    {60, 120},  // ok hostname
    {60, 170}, // ok username
    {60, 270}, // ok kernel
    {60, 220}, ///ok os
    {60, 50},  //ok time
};

static const std::string PATH_FONT_FUTURA_LIGHT = "Resources/Fonts/futura_light_bt.ttf";
static const std::string PATH_FONT_FUTURA_MEDIUM = "Resources/Fonts/futura_medium_bt.ttf";
static const std::string PATH_FONT_FUTURA_MEDIUM_ITALIC = "Resources/Fonts/Futura_Medium_Italic_font.ttf";

static const std::string PATH_SPRITE_[NB_SPRITE] = {
    "./Resources/Images/background.png",
};

#endif //Init_font_h//
