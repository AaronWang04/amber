#include <iostream>
#include "xtensor/xarray.hpp"
#include "include/SGD_Optimizer.h"
#include "include/Parameter.h"

namespace amber{

template <class T>
SGD_Optimizer<T>::SGD_Optimizer(){
    lr = 0.1;
}

template <class T>
SGD_Optimizer<T>::SGD_Optimizer(int in_lr){
    lr = in_lr;
}

template <class T>
void SGD_Optimizer<T>::update(amber::parameter<T> in_param){
    in_param.tensor -= lr*in_param.grad;
    param.grad = xt::zeros<T>(param.grad.shape());
}

}