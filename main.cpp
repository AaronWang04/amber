#include <iostream>
#include <vector>

#include "xtensor/xview.hpp"
#include "xtensor/xio.hpp"
#include "xtensor/xarray.hpp"

int main() {
	// testing
	xt::xarray<double> a = { {1., 2., 3.}, {4., 5., 6.} };
	auto shape = a.shape();
	xt::xarray<double> b{shape};
	std::cout << b;
}