#pragma once

// @generated by torchgen/gen.py from NativeFunction.h

#include <c10/core/Scalar.h>
#include <c10/core/Storage.h>
#include <c10/core/TensorOptions.h>
#include <c10/util/Deprecated.h>
#include <c10/util/Optional.h>
#include <c10/core/QScheme.h>
#include <ATen/core/Reduction.h>
#include <ATen/core/Tensor.h>
#include <tuple>
#include <vector>


namespace at {
namespace native {
TORCH_API ::std::tuple<at::Tensor,at::Tensor> symeig(const at::Tensor & self, bool eigenvectors=false, bool upper=true);
TORCH_API ::std::tuple<at::Tensor &,at::Tensor &> symeig_out(const at::Tensor & self, bool eigenvectors, bool upper, at::Tensor & e, at::Tensor & V);
} // namespace native
} // namespace at