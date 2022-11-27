#pragma once

// @generated by torchgen/gen.py from Operator.h

#include <tuple>
#include <vector>

// Forward declarations of any types needed in the operator signatures.
// We can't directly include these classes because it will cause circular include dependencies.
// This file is included by TensorBody.h, which defines the Tensor class.
#include <ATen/core/ATen_fwd.h>

namespace at {
namespace _ops {


struct TORCH_API frexp_Tensor {
  using schema = ::std::tuple<at::Tensor,at::Tensor> (const at::Tensor &);
  using ptr_schema = schema*;
  // See Note [static constexpr char* members for windows NVCC]
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(name, "aten::frexp")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(overload_name, "Tensor")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(schema_str, "frexp.Tensor(Tensor self) -> (Tensor mantissa, Tensor exponent)")
  static ::std::tuple<at::Tensor,at::Tensor> call(const at::Tensor & self);
  static ::std::tuple<at::Tensor,at::Tensor> redispatch(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self);
};

struct TORCH_API frexp_Tensor_out {
  using schema = ::std::tuple<at::Tensor &,at::Tensor &> (const at::Tensor &, at::Tensor &, at::Tensor &);
  using ptr_schema = schema*;
  // See Note [static constexpr char* members for windows NVCC]
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(name, "aten::frexp")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(overload_name, "Tensor_out")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(schema_str, "frexp.Tensor_out(Tensor self, *, Tensor(a!) mantissa, Tensor(b!) exponent) -> (Tensor(a!) mantissa, Tensor(b!) exponent)")
  static ::std::tuple<at::Tensor &,at::Tensor &> call(const at::Tensor & self, at::Tensor & mantissa, at::Tensor & exponent);
  static ::std::tuple<at::Tensor &,at::Tensor &> redispatch(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::Tensor & mantissa, at::Tensor & exponent);
};

}} // namespace at::_ops
