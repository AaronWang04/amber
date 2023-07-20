#include <iostream>
#include "include/parameter.h"

namespace amber{

template <class T>
class SGD_Optimizer{
public:

    int lr;

    SGD_Optimizer();
    SGD_Optimizer(int lr);

    void update(amber::Parameter<T> param);

};

}