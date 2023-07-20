#include <iostream>
#include "include/Layer.h"

namespace amber{

template <class T>
xt::xarray<T> Layer<T>::forward(xt::xarray<T> tensor){
    return tensor;
}

template <class T>
void Layer<T>::build_param(xt::xarray<T> tensor){
    parameter<T> param = parameter<T>(tensor);
    parameters.push_back(param);
}

template <class T>
void Layer<T>::update_param(amber::SGD_Optimizer<T> optimizer) {
    for (int i = 0; i < param.size(); i++) {
        parameters[i] = optimizer.update(parameters[i]);
    }
}

}