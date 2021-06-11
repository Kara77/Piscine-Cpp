
#include <cstring>
#include "IMonitorModule.hpp"
#include "SFML.hpp"

#define SCREEN_WIDTH 1024
#define SCREEN_HEIGHT 1024

InitResources::InitResources()
{
      _textes.resize(NB_TEXTE);
      _sprites.resize(NB_SPRITE);
    _font.loadFromFile(PATH_FONT_FUTURA_LIGHT);

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
    IMonitorModule *module;

    _textes[OS].setString(("OS:  " + module->getNameOS()));
    _textes[USERNAME].setString(("Login:  " + module->getLogin()));
    _textes[HOSTNAME].setString(("Hostname:  " + module->getHostname()));
    _textes[KERNEL].setString(("Kernel:  " + module->getKernel()));
}
void InitResources::EditDynamicTexts()
{
    IMonitorModule *module;
    
    _textes[TIME].setString(("Time:  " + module->getTime()));
}

int Graphic_loop()
{

  	std::cout << "MyGKrellm: Graphic Interface" << std::endl;
    InitResources rsrc;
    sf::RenderWindow window(sf::VideoMode(1280, 720), "MyGkrellm");
    rsrc.EditStaticTexts();
    while (window.isOpen())
    {
        sf::Event event;
        rsrc.EditDynamicTexts();
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed) {
                window.close();
                return false;
              }
            else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Space)) {
              window.close();
              return true;
            }
        }
        window.clear();
        window.draw(rsrc._sprites[BG]);
        for (int i = 0 ; i < NB_TEXTE ; i++) {
            rsrc._textes[i].setPosition(sf::Vector2f(POS_TEXTS_[i][0], POS_TEXTS_[i][1]));

            window.draw(rsrc._textes[i]);
        }
        window.display();
    }
    return 0;
}
