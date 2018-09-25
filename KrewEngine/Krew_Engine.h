//
//  KrewEngine.h
//  KrewEngine
//
//  Created by Diego Revilla Rubiera on 19/09/2018.
//  Copyright © 2018 SKG. All rights reserved.
//

#ifndef KrewEngine_h
#define KrewEngine_h

#include <stdio.h>

#pragma once

#ifndef KrewInDefines
#define KrewInDefines
#include "Sprite.h"
#include "Window.h"
#include "Timer.h"
#include "Layer.h"
#include "Maths.h"
#include "RenderPass2D.h"
#include "BatchRenderer2D.h"
#include "Label.h"
#include "MathFunctions.h"
#include "Audio.h"
#include "AudioManager.h"
#include "FileUtilities.h"
#include "Timer.h"
#include "LoadImage.h"
#include "StringUtilities.h"
#include "TileLayer.h"
#include "Group.h"
#include "Shader.h"
#include "Render2D.h"
#include "RenderData2D.h"
#include "Sprite.h"
#include "StaticSprite.h"
#include "Texture.h"
#include "Font.h"
#include "FontManager.h"
#endif

#ifndef KrewExDefines
#define KrewExDefines
#include "glew.h"
#include "ga.h"
#include "gau.h"
#include "al.h"
#include "freetype-gl.h"
#include "FreeImage.h"
#include "FreeImagePlus.h"
#include "glfw3.h"
#include "agl.h"
#include "AdressBook.h"
#include "QuartzCore.h"
#include "IOKitLib.h"
#endif

namespace KrewEngine {
    
    class Krew_Engine {
        
    private:
        Graphics::Window* m_Window;
        Timer* m_Timer;
        unsigned int framespersecond, updatespersecond;
        
        void Run() {
            
            float timer = 0.0f;
            float updatetimer = 0.0f;
            float updatetick = 1.0f / 60.0f;
            unsigned int frames = 0;
            unsigned int updates = 0;
            
            m_Timer = new Timer();
            
            while (!m_Window->closed()) {
                
                m_Window->clear();
                
                if (m_Timer->Elapsed() - updatetimer > updatetick) {
                    
                    Update();
                    updatetimer += updatetick;
                    updates++;
                    
                }
                
                Render();
                m_Window->update();
                frames++;
                
                if (m_Timer->Elapsed() - timer > 1.0f) {
                    
                    Tick();
                    timer += 1.0f;
                    framespersecond = frames;
                    updatespersecond = updates;
                    frames = 0;
                    updates = 0;
                    
                }
            }
        }
        
    protected:
        Krew_Engine() : framespersecond(0), updatespersecond(0) {
            
            
            
        }
        
        virtual ~Krew_Engine() {
            
            std::cout << "Krew Engine -> Goodbye!" << std::endl;
            delete m_Window;
            delete m_Timer;
            
        }
        
        virtual void Init() = 0;
        virtual void Tick() {
            
        }
        
        virtual void Update() {
            
            
            
        }
        
        virtual void Render() = 0;
        
    public:
        
        Graphics::Window* CreateWindow(const char *name, int width, int height) {
            
            m_Window = new Graphics::Window(name, width, height);
            
            return m_Window;
            
        }
        
        const unsigned int FPS() const {
            
            return framespersecond;
            
        }
        
        const unsigned int UPS() const {
            
            return updatespersecond;
            
        }
        
        void Start () {
            
            Init();
            Run();
            
        }
    };
}

#endif /* KrewEngine_h */
