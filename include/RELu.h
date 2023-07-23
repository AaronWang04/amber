#include "include/Layer.h"

namespace amber{

template <class T>
class RELu : public Layer{

public:

    xt::xarray<T> forward(xt::xarray<T> tensor);
    xt::xarray<T> backward(xt::xarray<T> tensor_d);

private:
    xt::xarray<T> forward_storage;

};

}