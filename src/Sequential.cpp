#include <iostream>
#include "include/Sequential.h"
#include "xtensor/xarray.hpp"

namespace amber{

template <class T>
Sequential<T>::Sequential(std::vector<amber::Layer<T>> in_layers){
    layers = in_layers
    for (int i = 0; i < in_layers.size(); i++){
        parameters.push_back(in_layers[i].parameters);
    }
}

template <class T>
Sequential<T>::xarray<T> forward(xt::xarray<T> in_tensor){

    xt::xarray<T> layer_output = in_tensor;

    for(int i = 0; i < layers.size(); i++){
        layer_output = layers[i].forward(layer_output);
    }

    return layer_output;
}

template <class T>
Sequential<T>::xarray<T> backward(xt::xarray<T> in_tensor_d){
    
    xt::xarray<T> layer_gradient = in_tensor_d;

    for(int i = layers.size()-1; i > -1; i--){
        layer_gradient = layer[i].backward(layer_gradient);
    }

    return layer_gradient;
}

}