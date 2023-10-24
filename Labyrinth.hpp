#pragma once
#include <vector>
#include "Cell.hpp"

class Labyrinth {
public:
    Labyrinth(const std::string& mapFile);
    ~Labyrinth();

    void LoadMap();
    void Draw(sf::RenderWindow& window);

private:
    std::string _mapFilePath;
    std::vector<std::vector<Cell>> _mapGrid;
};
