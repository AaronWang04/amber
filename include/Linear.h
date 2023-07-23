#include <iostream>
#include "xtensor/xarray.hpp"

#include "include/Parameter.h"
#include "include/Layer.h"

namespace amber{

template <class T>
class Linear : public Layer<T>{

public:

    xt::xarray<T> forward_tensor;
    amber::Parameter<T> weights;
    amber::Parameter<T> bias;
 
    Linear(size_t in_features, size_t out_features);
    xt::xarray<T> forward(xt::xarray<T> in_tensor);
    xt::xarray<T> backward(xt::xarray<T> in_tensor_d);

};

}