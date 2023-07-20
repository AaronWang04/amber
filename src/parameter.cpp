#include <iostream>
#include "xtensor/xarray.hpp"

#include "include/Parameter.h"

namespace amber{

template <class T>
Parameter<T>::Parameter(){
    tensor = xt::xarray<double> = {1.};
    grad = xt::xarray<double> = {1.};
}

template <class T>
Parameter<T>::Parameter(xt::xarray<T> in_tensor){
    tensor = in_tensor;
    grad = xt::xarray<double> = in_tensor.shape();
}

}