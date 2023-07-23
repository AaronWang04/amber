#include <iostream>
#include <vector>


#include "include/parameter.h"
#include "include/SGD_Optimizer.h"

#include "xtensor/xarray.hpp"

namespace amber{

template <class T>
class Layer{
public:
    std::vector<amber::Parameter<T>> parameters;

    void build_param(xt::xarray<T> tensor); // create a parameter from a tensor
    void update_param(amber::SGD_Optimizer<T> optimizer);
    virtual xt::xarray<T> forward(xt::xarray<T> tensor);
    
};

}