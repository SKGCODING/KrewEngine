//
//  AudioManager.h
//  KrewEngine
//
//  Created by Diego Revilla Rubiera on 16/09/2018.
//  Copyright © 2018 SKG. All rights reserved.
//

#ifndef AudioManager_h
#define AudioManager_h

#include <stdio.h>

#pragma once

#include <vector>
#include "Audio.h"
#define GAU_THREAD_POLICY_MULTI 2
#include "ga.h"
#include "gau.h"

namespace KrewEngine {
    namespace Audio {
        
    class AudioManager {
        
    private:
        friend class Audio;
        static gau_Manager* m_Manager;
        static ga_Mixer* m_Mixer;
        static std::vector<Audio*> m_Audios;
        AudioManager() { }
        
    public:
        static void Init();
        static void Add(Audio* Audio);
        static Audio* Get(const std::string& name);
        static void Update();
        static void Clean();
        
        };
    }
}

#endif /* AudioManager_h */
