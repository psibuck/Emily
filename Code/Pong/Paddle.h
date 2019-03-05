//
//  Paddle.h
//  Emily
//
//  Created by Archie Buck on 02/03/2019.
//  Copyright © 2019 Archie Buck. All rights reserved.
//

#ifndef Paddle_h
#define Paddle_h

#include "Code/Types/Entity.h"
#include <SFML/Graphics.hpp>

enum class DIRECTION : short int
{
    UP,
    DOWN
};

class Paddle : public EMILY::Entity
{
public:
    Paddle( const float x_in, const float y_in );
    
    void draw( sf::RenderWindow* window ) const;
    void update( void );
    void handle_keypress( const sf::Keyboard::Key key );
    void handle_key_release( const sf::Keyboard::Key key );
    sf::RectangleShape* get_paddle( void );
    
private:
    void move_up( void );
    void move_down( void );
    
    std::unique_ptr<sf::RectangleShape> paddle{ nullptr };
    float x{ 0.0f };
    float y{ 0.0f };
    const float height{ 150.0f };
    const float width{ 15.0f };
    const float speed{ 0.5f };
    bool in_motion{ false };
    DIRECTION current_direction{ DIRECTION::UP };
};

#endif /* Paddle_hpp */
