#pragma once

#include <SFML/Graphics.hpp>


class GameObject {
public:
    GameObject() = default;

    virtual ~GameObject() = default;


    virtual void update(float deltaTime) = 0;
    virtual void render(sf::RenderWindow& window) = 0;

    virtual void setPosition(const sf::Vector2f& newPosition) = 0;
    virtual sf::Vector2f getPosition() const = 0;
    virtual void setRotation(float newRotation) = 0;
    virtual float getRotation() const = 0;

private:
    sf::Vector2f position;
    float rotation;
};
