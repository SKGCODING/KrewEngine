//
//  Game.cpp
//  KrewEngine
//
//  Created by Diego Revilla Rubiera on 19/09/2018.
//  Copyright © 2018 SKG. All rights reserved.
//

#include <stdio.h>

#include "Krew_Engine.h"

#define APPNAME     "KrewEngine" //Your App Name Here

using namespace KrewEngine;
using namespace Graphics;
class App : public Krew_Engine {
    
private:
    Window* window;
    Layer* layer;
    Label* fps;
    Sprite* sprite;
    Shader* shader;
public:
    App() {
        
    }
    
    ~App() {
        
        delete layer;
        
    }
    
    void Init() override {
        
        window = CreateWindow(APPNAME, 960, 540);
        
    }
    
    void Tick() override {
        
        std::cout << "Krew Engine -> " << UPS() << " UPS, " << FPS() << " fps" << std::endl;
        
        
    }
    
    void Update() override {
        
        double x, y;
        window->getMousePosition(x, y);
        
    }
    
    void Render() override {
        
    }
};

int main() {
    
    App app;
    app.Start();
    
    return 0;
}
