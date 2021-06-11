

#include "SFML.hpp"

InitResources::InitResources()
{
      _textes.resize(NB_TEXTE);
      _sprites.resize(NB_SPRITE);
    _font.loadFromFile("/Users/antonin/Desktop/Epitech/CPP_pool/Exercices/rush3/rush3 sfml/rush3 sfml/Resources/Fonts/futura_light_bt.ttf");

      for (int i = 0 ; i < NB_SPRITE ; i++) {
          _textures.loadFromFile(PATH_SPRITE_[i]);
          _sprites[i].setTexture(_textures);
      }

      for (int i = 0 ; i < NB_TEXTE ; i++) {
          _textes[i].setFont(_font);
          _textes[i].setString("...");
          _textes[i].setFillColor(sf::Color(255, 255, 0));
          _textes[i].setCharacterSize(25);
      }
}

InitResources::~InitResources() {}

void InitResources::EditStaticTexts()
{
    _textes[OS].setString("lzjedhozehfzp");
}

int Graphic()
{
    InitResources rsrc;
    sf::RenderWindow window(sf::VideoMode(1280, 720), "MyGkrellm");
    rsrc.EditStaticTexts();
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(rsrc._sprites[BG]);
        for (int i = 0 ; i < NB_TEXTE ; i++) {
            rsrc._textes[i].setPosition(sf::Vector2f(POS_TEXTS_[i][0], POS_TEXTS_[i][1]));

            window.draw(rsrc._textes[i]);
        }
        for (int i = 0 ; i < NB_SPRITE ; i++) {
            //window.draw(rsrc._sprites[i]);
        }
        window.display();
    }
    return 0;
}
