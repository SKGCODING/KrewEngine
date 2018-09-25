//
//  AudioManager.cpp
//  KrewEngine
//
//  Created by Diego Revilla Rubiera on 16/09/2018.
//  Copyright © 2018 SKG. All rights reserved.
//

#include "AudioManager.h"

namespace KrewEngine {
    namespace Audio {
        
    gau_Manager* AudioManager::m_Manager = nullptr;
    ga_Mixer* AudioManager::m_Mixer = nullptr;
    std::vector<Audio*> AudioManager::m_Audios;
        
    void AudioManager::Init() {
        
        gc_initialize(0);
        m_Manager = gau_manager_create();
        m_Mixer = gau_manager_mixer(m_Manager);
        
    }
        
    void AudioManager::Add(Audio* Audio) {
        
        m_Audios.push_back(Audio);
        
    }
        
    Audio* AudioManager::Get(const std::string& name) {
        
        for (Audio* Audio : m_Audios) {
            
            if (Audio->GetName() == name)
                return Audio;
            
        }
        
        return nullptr;
        
    }
        
    void AudioManager::Clean() {
        
        for (int i = 0; i < m_Audios.size(); i++)
            delete m_Audios[i];
        
        gau_manager_destroy(m_Manager);
        gc_shutdown();
        
    }
        
    void AudioManager::Update() {
        
        gau_manager_update(m_Manager);
        
        }
    }
}
