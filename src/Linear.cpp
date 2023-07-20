#include <iostream>
#include "xtensor/xarray.hpp"
#include "xtensor-blas/xlinalg.hpp"

#include "include/Linear.h"

namespace amber{

template <class T>
Linear<T>::Linear(size_t in_features, size_t out_features){
    weights = xt::random::rand<double>({in_features, out_features});
    weights *= 1/sqrt(in_features);
    bias = xt::zeros<double>{out_features};
}

template <class T>
xt::xarray<T> forward(xt::xarray<T> in_tensor){
    forward_tensor = in_tensor;
    return (in_tensor*weights) + bias;
}

template<class T>
xt::xarray<T> backward(xt::xarray<T> in_tensor_d){
    weights.grad += (xt::transpose(forward_tensor))*in_tensor_d;
    bias.grad += xt::sum(in_tensor_d, {0,1});
    return in_tensor_d * xt::transepose(weights.tensor);
}

}