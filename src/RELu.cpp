#include <iostream>
#include "include/RELu.h"
#include "xtensor/xarray.hpp"

namespace amber{

template <class T>
xt::xarray<T> RELu<T>::forward(xt::xarray<T> in_tensor){
    forward_storage = xt::maximum(in_tensor, 0)
    return forward_storage;
}

template <class T>
xt::xarray<T> RELu<T>::backward(xt::xarray<T> in_tensor_d){
    return in_tensor_d*forward_storage;
}

}