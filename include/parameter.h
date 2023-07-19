#include <iostream>
#include "xtensor/xarray.hpp"

namespace amber{

template<class T>
class parameter{
public:
    // The gradient of a tensor has the same shape
    xt::xarray<T> tensor;
    xt::xarray<T> grad;

    parameter();
    parameter(xt::xarray<T> in_tensor);

};
}