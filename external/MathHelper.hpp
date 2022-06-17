#ifndef MathHelper_hpp
#define MathHelper_hpp

#include <iostream>
#include <array>
#include <sycl/sycl.hpp>
#include "VectorMaths.hpp"

using vecType = std::array<float, 2>;

SYCL_EXTERNAL vecType getDirectionVector(vecType a, vecType b);

SYCL_EXTERNAL vecType velFromSpeedAndDir(float s, vecType d);

SYCL_EXTERNAL vecType velToPoint(float s, vecType pos, vecType destination);

SYCL_EXTERNAL float magnitude(vecType inp);

SYCL_EXTERNAL float dotProduct(vecType a, vecType b);

SYCL_EXTERNAL float distance(vecType a, vecType b);

SYCL_EXTERNAL vecType normalize(vecType inp);

SYCL_EXTERNAL std::pair<float, vecType> getDistanceAndNiw(vecType point, std::array<vecType, 2> wall);

#endif
