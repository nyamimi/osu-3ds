#ifndef _GAMETEXTURE_H
#define _GAMETEXTURE_H

#include "common.h"

// TODO: Implement cache.
class GameTexture
{
private:
    static u32 Pow2(u32 v);

    static u32 MortonEnc(u32 x, u32 y);
    static u32 Morton(u32 x, u32 y, u32 bytesPerPixel);

    static void SetPixel(u32* buffer, u32 hex, u32 x, u32 y, u32 w, u32 h, u32 offset);

    static void Resize(void* buffer, int w, int h);
public:
    static C2D_Sprite* Load(std::string path);
};

#endif // _GAMETEXTURE_H