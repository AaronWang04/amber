// #include <iostream>
// #include <vector>
// #include "xtensor/xarray.hpp"

// /// <summary>
// /// To be implemented:
// /// data structure:
// /// data: use xt::array to store data
// /// shape: can be dynamically set
// /// require_grad
// /// </summary>

// namespace amber {
// template <class T>
// class Tensor {
// private:
// 	xt::xarray<T> data_xarray;
// 	bool require_grad;

// public:
// 	// Constructors
// 	Tensor();
// 	Tensor(std::vector<T> value);

// 	Tensor<T> zeros();

// 	// Applys an operation on two tensors and returns the result
// 	// Example: result = t1+t2;
// 	Tensor<T> operator+(Tensor<T> other);
// 	Tensor<T> operator-(Tensor<T> other);
// 	Tensor<T> operator*(Tensor<T> other); // Note that this is dot product, not matmul
// 	Tensor<T> operator/(Tensor<T> other);

// 	// Applys an operation a tensor and a scalar value and returns the result
// 	// Example: result = t1+1;
// 	Tensor<T> operator+(T other);
// 	Tensor<T> operator-(T other);
// 	Tensor<T> operator*(T other); 
// 	Tensor<T> operator/(T other);

// 	// Applys an in-place operation on two tensors
// 	// Example: t1 += t2;
// 	void operator+=(Tensor<T> other);
// 	void operator-=(Tensor<T> other);
// 	void operator*=(Tensor<T> other);
// 	void operator/=(Tensor<T> other);




// };
// }