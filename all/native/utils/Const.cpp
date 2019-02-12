#include "Const.h"

#include <cmath>

namespace carto {

    const double Const::PI = 3.1415926535897932;
    const double Const::DEG_TO_RAD = Const::PI / 180.0;
    const double Const::RAD_TO_DEG = 180.0 / Const::PI;
    
    const double Const::LOGE_2 = std::log(2.0);
    const double Const::SQRT_2 = std::sqrt(2.0);
    
    const int Const::WORLD_SIZE = 1 << 20;
    const float Const::HALF_WORLD_SIZE = (1 << 20) / 2.0f; // WORLD_SIZE / 2.0f

    const double Const::EARTH_RADIUS = 6378137.0;
    const double Const::EARTH_CIRCUMFERENCE = 40075016.68558;

    const float Const::UNSCALED_DPI = 160.0f;

    const float Const::MIN_SUPPORTED_TILT_ANGLE = 30.0f;
    const float Const::MAX_HEIGHT = (1 << 20) / 2.0f / 833.0f; // HALF_WORLD_SIZE / 833.0f
    const float Const::MIN_NEAR = 0.25f;
    const float Const::MAX_NEAR = 100.0f;
    
}
