#include <iostream>
#include <vector>
#include "xtensor/xarray.hpp"
#include "include/parameter.h"

namespace amber{

template <class T>
class layer{
public:
    std::vector<amber::parameter<T>> parameters;

    xt::xarray<T> forward(xt::xarray<T> tensor);
    void build_param(xt::xarray<T> tensor); // create a parameter from a tensor
    // update(optimizer);

};

}