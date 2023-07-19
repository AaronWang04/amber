#include <iostream>
#include <vector>
#include "xtensor/xarray.hpp"

int main() {

	xt::xarray<double> a = { {1., 2., 3.}, {4., 5., 6.} };
	auto shape = a.shape();
	xt::xarray<double> b{shape};
	
}