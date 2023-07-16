### Compilation of notes and resources

#### Folder structure
A CPP project should have two folders, include and src. Include folder has all the header files needed to do anything, think of it as a place to store your folders. It is best practice to not put something in include if it is not necessary, as it increases build time. Source folder

#### Essential components of a ML library
1. Data structure: Tensors are the most ideal for machine learning as it can represent a variety of other data, such as videos, texts, and audio. The tensor class should have sufficient methods to perform all the necessary mathematical operations.
2. Gradient computation: Neural network are trained via gradient descent, an optimization algorithm for finding a local minimum of a differentiable function. This process should be automated with adjustable hyperparameters.
3. Network building blocks: Layers and operations that makeup the final neural network. 
4. Computation acceleration via TPUs and GPUs (Might not implement).

#### Tensor
Tensors are multidimensional arrays that stores primitive types, usually floating point numbers.

Data stored:
Data: 1d array storing the values
Data type: default to float32? or allow user to change, to be decided
Shape: tensor shape
Require_gradient: Used in running gradient descent, tell autograd to begin recording operations if true
Device type: which device the tensor is on, implement in future

Implementing tensors from scratch (with good performance and feature set) is a pretty difficult task, most source I have looked at used libraryies such as numpy to assist with the implementation rather than doing it from scratch. Comparing eigen and xtensor, it seems like eigen is the better choice as it is better supported. xTensor has the advantage of having similar syntax to numpy, but that is as not important as being able to run cuda for example. The tiny tensor class written has been moved to the notes folder.

#### Additional C++ information
The project is written in C++17. 

Templates: Instead of rewriting functions multiple times for different types, you can create a template that passes the type of whatever you passed in. For example \<typename T> indicates that whenever you write T in place of a type declaration in your code, it replaces it with the typename of the object.

Structure: Collection of variables of different data types under the same name. Used when you want a class of plain data structures with no need for addition methods/protected data.


#### Resources used
http://blog.ezyang.com/2019/05/pytorch-internals/
https://getcode.substack.com/p/fun-and-hackable-tensors-in-rust
https://github.com/tinygrad/tinygrad
- https://github.com/tinygrad/tinygrad/commits/master?after=9c135c94506e30e635cf50d1f11c4782ce5cc3d0+1819&branch=master&qualified_name=refs%2Fheads%2Fmaster
- https://github.com/tinygrad/tinygrad/blob/26899869a2881507bd68452715f1bf683af22c81/tinygrad/tensor.py

https://xtensor.readthedocs.io/en/latest/developer/xtensor_internals.html
