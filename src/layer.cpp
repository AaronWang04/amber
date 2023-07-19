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

template <class T>
void layer<T>::update_param(amber::sgd_optimizer<T> optimizer) {
    for (int i = 0; i < param.size(); i++) {
        parameters[i] = optimizer.update(parameters[i]);
    }
}

}