#include <iostream>
#include <vector>

#include "include/Layer.h"
#include "include/Parameter.h"

namespace amber{
template <class T>
class Sequential : public Layer<T>{

    std::vector<amber::Layer<T>> layers;
    std::vector<amber::Parameter<T>> parameters;

    Sequential(std::vector<amber::Layer<T>> in_layers);
    xt::xarray<T> forward(xt::xarray<T> in_tensor);
    xt::xarray<T> backward(xt::xarray<T> in_tensor_d);

};

}