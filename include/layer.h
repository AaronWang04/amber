#include <iostream>
#include <vector>


#include "include/parameter.h"
#include "include/sgd_optimizer.h"

#include "xtensor/xarray.hpp"

namespace amber{

template <class T>
class layer{
public:
    std::vector<amber::parameter<T>> parameters;

    xt::xarray<T> forward(xt::xarray<T> tensor);
    void build_param(xt::xarray<T> tensor); // create a parameter from a tensor
    void update_param(amber::sgd_optimizer<T> optimizer);
    
};

}