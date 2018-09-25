//
//  Timer.h
//  KrewEngine
//
//  Created by Diego Revilla Rubiera on 18/08/2018.
//  Copyright © 2018 SKG. All rights reserved.
//


#ifndef Timer_h
#define Timer_h

#pragma once

#define WINDOWS_TIMER 0

namespace KrewEngine {

#if WINDOWS_TIMER

    #include "Windows.h"
    
    class Timer {
        
    private:
        LARGE_INTEGER m_Start;
        double m_Frequency;
        
    public:
        Timer () {
            
            LARGE_INTEGER frequency;
            QueryPerformanceFrequency(&frequency):
            m_Frecuency = 1.0 / frequency.QuadPart;
            QueryPerformanceCounter(&m_Start);
            
        }
        
        void Reset() {
            
            QueryPerformanceCounter(&m_Start);
            
        }
        
        float elapsed() {
            
            LARGE_INTEGER current;
            QueryPerformanceCounter(&current);
            unsigned __int64 cycles = current.QuadPart - m_Start.QuadPart;
            return (float)(cycles * m_Frequency);
            
        }
    };
    
#else
    
    #include <chrono>
    
    class Timer {
        
    private:
        typedef std::chrono::high_resolution_clock Clock;
        typedef std::chrono::duration<float, std::milli> milliseconds_type;
        std::chrono::time_point<Clock> m_Start;
        
    public:
        Timer() {
            
            Reset();
            
        }
        
        void Reset() {
            
            m_Start = Clock::now();
            
        }
        
        float Elapsed() {
            
            return std::chrono::duration_cast<milliseconds_type>(Clock::now() - m_Start).count() / 1000.0f;
            
        }
    };
    
#endif
    
}

#endif /* Timer_h */
