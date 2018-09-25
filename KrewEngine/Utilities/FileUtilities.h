//
//  FileUtilities.h
//  Krew Engine
//
//  Created by Diego Revilla Rubiera on 10/08/2018.
//  Copyright © 2018 SKG. All rights reserved.
//

#ifndef FileUtilities_h
#define FileUtilities_h

#pragma once

#include <string>
#include <fstream>
#include <stdexcept>

#pragma once
#include <string>
#include <fstream>
namespace KrewEngine {
    class FileUtilities {
        
    public:
        static std::string read_file(const char* filepath)
        {
                
            std::ifstream in(filepath);
            if(in) {
                
                std::string contents;
                in.seekg(0, std::ios::end);
                contents.resize(in.tellg());
                in.seekg(0, std::ios::beg);
                in.read(&contents[0], contents.size());
                in.close();
                
                return contents;
                
            }
            
            throw std::runtime_error("Failed To Open File");
            
        }
        
        static std::string read_file_betaconst (char* filepath) {
            
            FILE* file = fopen(filepath, "rt");
            fseek(file, 0, SEEK_END);
            unsigned long length = ftell(file);
            char* data = new char[length + 1];
            memset(data, 0, length + 1);
            fseek(file, 0, SEEK_SET);
            fread(data, 1, length, file);
            fclose(file);
            std::string result(data);
            delete[] data;
            
            return result;
            
        }
    };
}

#endif /* FileUtilities_h */
