//
//  BatchRenderer2D.h
//  KrewEngine
//
//  Created by Diego Revilla Rubiera on 15/08/2018.
//  Copyright © 2018 SKG. All rights reserved.
//

#ifndef BatchRenderer2D_h
#define BatchRenderer2D_h

#pragma once

#include <cstddef>
#include "RenderData2D.h"
#include "RenderPass2D.h"
#include "IndexBuffer.h"

#define RENDERER_MAX_SPRITES    60000
#define RENDERER_VERTEX_SIZE    sizeof(VertexData)
#define RENDERER_SPRITE_SIZE    RENDERER_VERTEX_SIZE * 4
#define RENDERER_BUFFER_SIZE    RENDERER_SPRITE_SIZE * RENDERER_MAX_SPRITES
#define RENDERER_INDICES_SIZE   RENDERER_MAX_SPRITES * 6
#define RENDER_MAX_TEXTURES 32
#define SHADER_VERTEX_INDEX 0
#define SHADER_UV_INDEX 1
#define SHADER_TID_INDEX    2
#define SHADER_COLOR_INDEX  3
#define RENDER_MAX_TEXTURES 8

namespace KrewEngine {
    namespace Graphics {
        
        class BatchRenderer2D : public RenderPass2D {
            
        private:
            GLuint m_VAO;
            IndexBuffer* m_IBO;
            GLsizei m_IndexCount;
            GLuint m_VBO;
            VertexData* m_Buffer;
            std::vector<GLuint> m_TextureSlots;
            
        public:
            BatchRenderer2D();
            ~BatchRenderer2D();
            
            
            void Begin() override;
            void Submit(const RenderData2D* renderable) override;
            void DrawString(const std::string& text, const Maths::Vector3 position,const Font& font, unsigned int color) override;
            void End() override;
            void Flush() override;
            
        private:
            void init();
            
        };
    }
}

#endif /* BatchRenderer2D_h */
