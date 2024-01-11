#include <SFML/Graphics.hpp>

int main()
{
    sf::RenderWindow window(sf::VideoMode(1000, 500), "Vampire Survivors?");
    sf::CircleShape shape(100.f);
    shape.setFillColor(sf::Color::Green);
    sf::Texture playertexture;
    sf::Sprite player;
    if (!playertexture.loadFromFile("img/player1.png")){
        return 1;
    }
    player.setTexture(playertexture);
 
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(shape);
        window.draw(player);

        window.display();
    }

    return 0;
}