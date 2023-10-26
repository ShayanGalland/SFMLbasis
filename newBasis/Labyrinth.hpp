#pragma once
#include <vector>
#include <string>
#include "Wall.hpp"
#include "Path.hpp"
#include "Window.hpp"
#include "sstream"
#include "fstream"

class Labyrinth {
public:
    Labyrinth(const std::string& mapFilePath) : _mapFilePath(mapFilePath) {}
    void LoadMap(Window_s& window);
    
    bool isCollidingWithWalls(const sf::FloatRect& characterBounds) const {
        for(const auto& wall : _walls) {
            if(wall.getBounds().intersects(characterBounds)) {
                return true;
            }
        }
        return false;
    }

private:
    std::vector<std::vector<bool>> _mapGrid;
    std::string _mapFilePath;
    std::vector<Wall> _walls;
    std::vector<Path> _paths;
};
