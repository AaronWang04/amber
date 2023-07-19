#include <iostream>
#include "include/layer.h"

namespace amber{

template <class T>
xt::xarray<T> layer<T>::forward(xt::xarray<T> tensor){
    return tensor;
}

template <class T>
void layer<T>::build_param(xt::xarray<T> tensor){
    parameter<T> param = parameter<T>(tensor);
    parameters.push_back(param);
}

}