//
//  Audio.h
//  KrewEngine
//
//  Created by Diego Revilla Rubiera on 16/09/2018.
//  Copyright © 2018 SKG. All rights reserved.
//

#ifndef Audio_h
#define Audio_h

#include <stdio.h>

#pragma once

#include <iostream>
#include <string>
#include "StringUtilities.h"
#include "ga.h"
#include "gau.h"
namespace KrewEngine {
    namespace Audio {
        
    class Audio {
        
    private:
        std::string m_Name;
        std::string m_Filename;
        ga_Sound* m_Audio;
        ga_Handle* m_Handle;
        gc_int32 m_Position;
        bool m_Playing;
        float m_Gain;
        
    public:
        Audio(const std::string& name, const std::string& filename);
        ~Audio();
        
        void Play();
        void Loop();
        void Pause();
        void Resume();
        void Stop();
        void SetGain(float gain);
        
        inline const bool IsPlaying() const {
            
            return m_Playing;
            
        }
        
        inline const float GetGain() const {
            return m_Gain;
            
        }
        
        inline const std::string& GetName() const {
            
            return m_Name;
            
        }
        
        inline const std::string& GetFileName() const {
            
            return m_Filename;
            
        }
        
        friend void DestroyOnFinish(ga_Handle* in_handle, void* in_context);
        friend void LoopOnFinish(ga_Handle* in_handle, void* in_context);
        };
    }
}

#endif /* Audio_h */
