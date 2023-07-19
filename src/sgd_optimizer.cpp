#include <iostream>
#include "xtensor/xarray.hpp"
#include "include/sgd_optimizer.h"
#include "include/parameter.h"

namespace amber{

template <class T>
sgd_optimizer<T>::sgd_optimizer(){
    lr = 0.1;
}

template <class T>
sgd_optimizer<T>::sgd_optimizer(int in_lr){
    lr = in_lr;
}

template <class T>
void sgd_optimizer<T>::update(amber::parameter<T> in_param){
    in_param.tensor -= lr*in_param.grad;
    param.grad = xt::zeros<T>(param.grad.shape());
}

}