#include "xtensor/xarray.hpp"
#include "MSE_Loss.h"

namespace amber
{

template <class T>
xt::xarray<T> MSE_Loss<T>::forward(xt::xarray<T> T1, xt::xarray<T> T2){
    difference = T1-T2.reshape(T1.shape());
    return xt::mean(xt::square(difference));
}
template <class T>
xt::xarray<T> MSE_Loss<T>::backward(){
    return (difference*2)/(xt::prod(difference.shape()));
}

} // namespace amber