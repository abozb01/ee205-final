#include <iostream>
#include <SFML/Graphics.hpp>
#include "button.h"

using namespace std;


Button::Button(int x, int y,string s) : _shape(sf::Vector2f(Button_wide,Button_high))
{
    _shape.setFillColor(sf::Color::White);
    _shape.setOrigin(Button_wide/2,Button_high/2);
    _shape.setPosition(x, y);
    _font.loadFromFile("FiraCode-VF.ttf");
    _text.setFont(_font); // font is a sf::Font
    _text.setString(s);
    _text.setCharacterSize(Menu_Font_Size); // in pixels, not points!
    _text.setFillColor({20, 20, 50});
    _text.setStyle(sf::Text::Bold);
    _text.setOrigin(Button_wide/2,Button_high/2);
}

void Button::update(sf::Time deltaTime) {
    float seconds = deltaTime.asSeconds();
    
    if (Selected) {

    }

    if (Enabled) {
    }
}
