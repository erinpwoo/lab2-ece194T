//
//  util.cpp
//  01-mydevice
//
//  Created by Erin Woo on 2/21/19.
//

#include "util.hpp"

namespace ovk
{
    
    namespace util
    {
        
        Util::Util()
        {
            srand(time(NULL));
        }
        int Util::randInt(int min, int max)
        {
            return rand() % max + min;
        }
        float Util::randFloat(float min, float max)
        {
            return min + static_cast <float> (rand()) /( static_cast <float> (RAND_MAX/(max-min)));
        }
        
    }
    
}

