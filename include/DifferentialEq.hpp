#ifndef DifferentialEqu_hpp
#define DifferentialEqu_hpp

#include <iostream>
#include <vector>
#include <array>
#include <sycl/sycl.hpp>
#include "Actor.hpp"
#include "Room.hpp"
#include "MathHelper.hpp"
#include "GeometricVector.hpp"

constexpr float Ai = 2000;
constexpr float Bi = 0.08;
constexpr float k1 = 125000;
constexpr float k2 = 240000;
constexpr float ti = 0.5;

SYCL_EXTERNAL GeometricVector differentialEq(int x, sycl::accessor<Actor, 1, sycl::access::mode::read> actors, sycl::accessor<std::array<GeometricVector, 2>, 1, sycl::access::mode::read> walls, sycl::stream out);

#endif
