// #include <iostream>
// #include "tensor.h"
// #include "xtensor/xarray.hpp"

// namespace amber{



// // Defining constructors
// // template <class T>
// //Tensor<T>::Tensor() {
// //    data_xarray = xt::xarray <{1.}> ;
// //    shape = {1};
// //    require_grad = False;
// //}

// template<class T>
// Tensor<T>::Tensor() : data(xt::array<{1.}>), require_grad(False){};

// template<class T>
// Tensor<T>::Tensor(std::vector<T> value) : data(value), require_grad(False){};


// // template <class T>
// // Tensor<T>::Tensor() : data(xt::xarray{0, shape}), shape(std::vector<size_T> shape), require_grad(False);

// // template <class T>
// // Tensor<T>::Tensor() : data(xt::xarray{0}), shape({1}), require_grad({False});



// // Note, you have to declear it is a member function of Tensor by putting Tensor<T>::
// template <class T>
// Tensor<T> Tensor<T>::operator+(Tensor<T> other){
    
// }

// template <class T>
// Tensor<T> Tensor<T>::operator-(Tensor<T> other){

// }

// template <class T>
// Tensor<T> Tensor<T>::operator*(Tensor<T> other){

// }

// template <class T>
// Tensor<T> Tensor<T>::operator/(Tensor<T> other){

// }

// template <class T>
// Tensor<T> Tensor<T>::operator+(T other){

// }

// template <class T>
// Tensor<T> Tensor<T>::operator-(T other){

// }

// template <class T>
// Tensor<T> Tensor<T>::operator*(T other){

// }

// template <class T>
// Tensor<T> Tensor<T>::operator/(T other){

// }

// template <class T>
// void Tensor<T>::operator+=(Tensor<T> other){

// }

// template <class T>
// void Tensor<T>::operator-=(Tensor<T> other){

// }

// template <class T>
// void Tensor<T>::operator*=(Tensor<T> other){

// }

// template <class T>
// void Tensor<T>::operator/=(Tensor<T> other){

// }

// };