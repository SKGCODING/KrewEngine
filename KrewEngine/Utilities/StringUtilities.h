//
//  StringUtilities.h
//  KrewEngine
//
//  Created by Diego Revilla Rubiera on 17/09/2018.
//  Copyright © 2018 SKG. All rights reserved.
//

#ifndef StringUtilities_h
#define StringUtilities_h

#pragma once

#include <string>
#include <sstream>
#include <vector>

namespace KrewEngine {
    
    static std::vector<std::string> split_string(const std::string &s, char delimeter) {
        
        std::vector<std::string> elems;
        std::stringstream ss(s);
        std::string item;
        
        while (std::getline(ss, item, delimeter)) {
            
            elems.push_back(item);
            
        }
        
        return elems;
        
    }
}

#endif /* StringUtilities_h */
