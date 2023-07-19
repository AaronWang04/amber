#include <iostream>
#include "include/parameter.h"

namespace amber{

template <class T>
class sgd_optimizer{
public:

    int lr;

    sgd_optimizer();
    sgd_optimizer(int lr);

    void update(amber::parameter<T> param);

};

}