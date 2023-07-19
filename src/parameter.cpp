#include <iostream>
#include "xtensor/xarray.hpp"

#include "include/parameter.h"

namespace amber{

template <class T>

parameter<T>::parameter(){
    tensor = xt::xarray<double> = {1.};
    grad = xt::xarray<double> = {1.};
}

template <class T>
parameter<T>::parameter(xt::xarray<T> in_tensor){
    tensor = in_tensor;
    grad = xt::xarray<double> = in_tensor.shape();
}

}