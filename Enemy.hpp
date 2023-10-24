#pragma once
#include "Character.hpp"

class Player; // Forward declaration

class Enemy : public Character {
public:
    Enemy(const std::string &filepath, float health, float speed, float detectionRange);

    void SetTarget(Player* target);
    void Chase(float deltaTime); 
    void Attack();

    float GetDetectionRange() const;

private:
    Player* _target;  // Pointeur vers le joueur pour la poursuite
    float _detectionRange; 
};