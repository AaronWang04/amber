#include <iostream>
#include <vector>
#include <typeinfo>

template <typename T>

class Tensor{

public:

    // Default constructor of tensor
    Tensor(std::vector<T> data_input, std::vector<size_t> shape_input){

        if(data_input.size() != get_shape_size(shape_input){
            throw "Size does not match";
        })

        if(typeid(T) == typeid(int)){
            data = data_input;
            shape = shape_input;
            d_type = typeid(int)
        }

        if(typeid(T) == typeid(float)){
            data = data_input;
            shape = shape_input;
            d_type = typeid(float)
        }

        throw "Unsupported data types";

    }

    int get_shape_size(std::vector<size_t> in_shape){
        if(in_shape.size() == 0){
            return 0;
        }
        else(
            int n = 1;
            for(size_t i = 0; i != in_shape.size(); i++){
                n *= in_shape.at(i);
            }
            return n;
        )
    }


private:

    std::vector<T> data;
    std::vector<size_t> shape;
    std::type_info d_type;
    bool require_grad;

};