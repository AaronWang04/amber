#include <iostream>
#include "xtensor/xarray.hpp"

namespace amber{

template<class T>
class Parameter{
public:
    // The gradient of a tensor has the same shape
    xt::xarray<T> tensor;
    xt::xarray<T> grad;

    Parameter();
    Parameter(xt::xarray<T> in_tensor);

};
}