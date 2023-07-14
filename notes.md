### Compilation of notes and resources

#### Folder structure
A CPP project should have two folders, include and src. A header file should go into include when it is necessary to use the library, whereas src should contain optional tools. For example in pytorch, import torch contains all that is absolute necessary, and torch.utils contains a variety of useful, but not situational tools.

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

#### Additional C++ information
Templates: Instead of rewriting functions multiple times for different types, you can create a template that passes the type of whatever you passed in. For example \<typename T> indicates that whenever you write T in place of a type declaration in your code, it replaces it with the typename of the object.

Structure: Collection of variables of different data types under the same name. Used when you want a class of plain data structures with no need for addition methods/protected data.

#### Resources used
https://getcode.substack.com/p/fun-and-hackable-tensors-in-rust
https://github.com/tinygrad/tinygrad