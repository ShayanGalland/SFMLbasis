#pragma once
#include "Sprite.hpp"

class Character : public Sprite_s {
public:
    Character(const std::string &filepath, float health, float speed);

    void TakeDamage(float damage);
    void Heal(float amount);
    void SetSpeed(float speed);
    float GetSpeed() const;

    bool IsAlive() const;
    float GetHealth() const;
    void Update(float deltaTime);

private:
    float _health;
    float _speed;
};

