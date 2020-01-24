//
// Created by Lars Groeber on 24.01.20.
//

#ifndef ASTEROIDS_HELPER_H
#define ASTEROIDS_HELPER_H


#include <SFML/Graphics/Transform.hpp>
#include <cmath>

class Helper {
public:
    static sf::Vector2f getUnitVector(float rotation) {
        sf::Transform t;
        t.rotate(rotation);
        return t.transformPoint(sf::Vector2f(0, -1));
    }

    static float angleOfVector(sf::Vector2f vector) {
        float x = vector.x;
        float y = vector.y;
        if (x == 0) // special cases
            return (y > 0) ? 90
                           : (y == 0) ? 0
                                      : 270;
        else if (y == 0) // special cases
            return (x >= 0) ? 0
                            : 180;
        int ret = atanf((float) y / x) / (M_PI) * 180;
        if (x < 0 && y < 0) // quadrant Ⅲ
            ret = 180 + ret;
        else if (x < 0) // quadrant Ⅱ
            ret = 180 + ret; // it actually substracts
        else if (y < 0) // quadrant Ⅳ
            ret = 270 + (90 + ret); // it actually substracts
        return ret - 90;
    }
};


#endif //ASTEROIDS_HELPER_H
