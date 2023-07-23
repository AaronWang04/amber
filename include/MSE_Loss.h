#include "xtensor/xarray.hpp"

namespace amber
{
template <class T>
class MSE_Loss{
public:

    xt::xarray<T> forward(xt::xarray<T> T1, xt::xarray<T> T2);
    xt::xarray<T> backward();

private:
    xt::xarray<T> difference;
};

} // namespace amber
