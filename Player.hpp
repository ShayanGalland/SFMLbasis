#pragma once
#include "Character.hpp"

class Player : public Character {
public:
    Player(const std::string &filepath, float health, float speed);

    void Shoot();
    void IncreaseScore(int value);
    int GetScore() const;

    void TakeDamage(float damage);

private:
    int _score;
};
