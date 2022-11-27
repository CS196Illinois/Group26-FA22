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
#include <ATen/ops/norm_meta.h>

namespace at {
namespace native {
TORCH_API at::Tensor norm(const at::Tensor & self, const c10::optional<at::Scalar> & p, at::ScalarType dtype);
TORCH_API at::Tensor & norm_ScalarOpt_dtype_out(const at::Tensor & self, const c10::optional<at::Scalar> & p, at::ScalarType dtype, at::Tensor & out);
TORCH_API at::Tensor norm(const at::Tensor & self, const at::Scalar & p=2);
TORCH_API at::Tensor & norm_Scalar_out(const at::Tensor & self, const at::Scalar & p, at::Tensor & out);
struct TORCH_API structured_norm_dtype_out : public at::meta::structured_norm_ScalarOpt_dim_dtype {
void impl(const at::Tensor & self, at::OptionalScalarRef p, at::IntArrayRef dim, bool keepdim, at::ScalarType dtype, const at::Tensor & out);
};
TORCH_API at::Tensor sparse_dtype_norm(const at::Tensor & self, const c10::optional<at::Scalar> & p, at::IntArrayRef dim, bool keepdim, at::ScalarType dtype);
struct TORCH_API structured_norm_out : public at::meta::structured_norm_ScalarOpt_dim {
void impl(const at::Tensor & self, at::OptionalScalarRef p, at::IntArrayRef dim, bool keepdim, const at::Tensor & out);
};
TORCH_API at::Tensor sparse_norm(const at::Tensor & self, const c10::optional<at::Scalar> & p, at::IntArrayRef dim, bool keepdim=false);
TORCH_API at::Tensor norm(const at::Tensor & self, const c10::optional<at::Scalar> & p, at::DimnameList dim, bool keepdim, at::ScalarType dtype);
TORCH_API at::Tensor & norm_out(const at::Tensor & self, const c10::optional<at::Scalar> & p, at::DimnameList dim, bool keepdim, at::ScalarType dtype, at::Tensor & out);
TORCH_API at::Tensor norm(const at::Tensor & self, const c10::optional<at::Scalar> & p, at::DimnameList dim, bool keepdim=false);
TORCH_API at::Tensor & norm_out(const at::Tensor & self, const c10::optional<at::Scalar> & p, at::DimnameList dim, bool keepdim, at::Tensor & out);
} // namespace native
} // namespace at
