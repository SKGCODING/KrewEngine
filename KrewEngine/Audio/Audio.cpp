//
//  Audio.cpp
//  KrewEngine
//
//  Created by Diego Revilla Rubiera on 16/09/2018.
//  Copyright © 2018 SKG. All rights reserved.
//

#include "Audio.h"
#include "AudioManager.h"

namespace KrewEngine {
    namespace Audio {
        
        void DestroyOnFinish(ga_Handle* in_handle, void* in_context);
        void LoopOnFinish(ga_Handle* in_handle, void* in_context);
        
    Audio::Audio(const std::string& name, const std::string& filename) : m_Name(name), m_Filename(filename), m_Playing(false) {
        
        std::vector<std::string> split = split_string(m_Filename, '.');
        
        if (split.size() < 2) {
            
            std::cout << "KrewEngine(Audio) -> Invalid file name '" << m_Filename << "'!" << std::endl;
            
            return;
            
        }
        
        m_Audio = gau_load_sound_file(filename.c_str(), split.back().c_str());
        
        if (m_Audio == nullptr)
            std::cout << "KrewEngine(Audio) -> Could not load file '" << m_Filename << "'!" << std::endl;
    }
        
    Audio::~Audio() {
        
        ga_sound_release(m_Audio);
        
    }
    void Audio::Play() {
        
        gc_int32 quit = 0;
        m_Handle = gau_create_handle_sound(AudioManager::m_Mixer, m_Audio, &DestroyOnFinish, &quit, NULL);
        m_Handle->Audio = this;
        ga_handle_play(m_Handle);
        m_Playing = true;
        
    }
        
    void Audio::Loop() {
        
        gc_int32 quit = 0;
        m_Handle = gau_create_handle_sound(AudioManager::m_Mixer, m_Audio, &LoopOnFinish, &quit, NULL);
        m_Handle->Audio = this;
        ga_handle_play(m_Handle);
        m_Playing = true;
        
    }
    void Audio::Resume()
    {
        if (m_Playing) {
            
            return;
            
        }
        
        ga_handle_play(m_Handle);
        m_Playing = true;
        
    }
    void Audio::Pause() {
        
        if (!m_Playing) {
            
            return;
            
        }
        
        ga_handle_stop(m_Handle);
        m_Playing = false;
        
    }
    void Audio::Stop() {
        
        if (!m_Playing)
            return;
        
        ga_handle_stop(m_Handle);
        m_Playing = false;
        
    }
        
    void Audio::SetGain(float gain) {
        
        if (!m_Playing)
        {
            
            std::cout << "KrewEngine(Audio) -> Could not set gain, the audio won't play" << std::endl;
            
            return;
            
        }
        
        m_Gain = gain;
        ga_handle_setParamf(m_Handle, GA_HANDLE_PARAM_GAIN, gain);
        
    }
        
    void DestroyOnFinish(ga_Handle* in_handle, void* in_context) {
        
        Audio* Audio = Audio;
        Audio->Stop();
        
    }
        
    void LoopOnFinish(ga_Handle* in_handle, void* in_context) {
        
        Audio* Audio = Audio;
        Audio->Loop();
        ga_handle_destroy(in_handle);
        
        }
    }
}
