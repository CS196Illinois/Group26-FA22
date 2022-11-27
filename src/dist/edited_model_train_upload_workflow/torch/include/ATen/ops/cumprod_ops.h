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


struct TORCH_API cumprod {
  using schema = at::Tensor (const at::Tensor &, int64_t, c10::optional<at::ScalarType>);
  using ptr_schema = schema*;
  // See Note [static constexpr char* members for windows NVCC]
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(name, "aten::cumprod")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(overload_name, "")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(schema_str, "cumprod(Tensor self, int dim, *, ScalarType? dtype=None) -> Tensor")
  static at::Tensor call(const at::Tensor & self, int64_t dim, c10::optional<at::ScalarType> dtype);
  static at::Tensor redispatch(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, int64_t dim, c10::optional<at::ScalarType> dtype);
};

struct TORCH_API cumprod_ {
  using schema = at::Tensor & (at::Tensor &, int64_t, c10::optional<at::ScalarType>);
  using ptr_schema = schema*;
  // See Note [static constexpr char* members for windows NVCC]
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(name, "aten::cumprod_")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(overload_name, "")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(schema_str, "cumprod_(Tensor(a!) self, int dim, *, ScalarType? dtype=None) -> Tensor(a!)")
  static at::Tensor & call(at::Tensor & self, int64_t dim, c10::optional<at::ScalarType> dtype);
  static at::Tensor & redispatch(c10::DispatchKeySet dispatchKeySet, at::Tensor & self, int64_t dim, c10::optional<at::ScalarType> dtype);
};

struct TORCH_API cumprod_out {
  using schema = at::Tensor & (const at::Tensor &, int64_t, c10::optional<at::ScalarType>, at::Tensor &);
  using ptr_schema = schema*;
  // See Note [static constexpr char* members for windows NVCC]
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(name, "aten::cumprod")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(overload_name, "out")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(schema_str, "cumprod.out(Tensor self, int dim, *, ScalarType? dtype=None, Tensor(a!) out) -> Tensor(a!)")
  static at::Tensor & call(const at::Tensor & self, int64_t dim, c10::optional<at::ScalarType> dtype, at::Tensor & out);
  static at::Tensor & redispatch(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, int64_t dim, c10::optional<at::ScalarType> dtype, at::Tensor & out);
};

struct TORCH_API cumprod_dimname {
  using schema = at::Tensor (const at::Tensor &, at::Dimname, c10::optional<at::ScalarType>);
  using ptr_schema = schema*;
  // See Note [static constexpr char* members for windows NVCC]
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(name, "aten::cumprod")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(overload_name, "dimname")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(schema_str, "cumprod.dimname(Tensor self, Dimname dim, *, ScalarType? dtype=None) -> Tensor")
  static at::Tensor call(const at::Tensor & self, at::Dimname dim, c10::optional<at::ScalarType> dtype);
  static at::Tensor redispatch(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::Dimname dim, c10::optional<at::ScalarType> dtype);
};

struct TORCH_API cumprod__dimname {
  using schema = at::Tensor & (at::Tensor &, at::Dimname, c10::optional<at::ScalarType>);
  using ptr_schema = schema*;
  // See Note [static constexpr char* members for windows NVCC]
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(name, "aten::cumprod_")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(overload_name, "dimname")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(schema_str, "cumprod_.dimname(Tensor(a!) self, Dimname dim, *, ScalarType? dtype=None) -> Tensor(a!)")
  static at::Tensor & call(at::Tensor & self, at::Dimname dim, c10::optional<at::ScalarType> dtype);
  static at::Tensor & redispatch(c10::DispatchKeySet dispatchKeySet, at::Tensor & self, at::Dimname dim, c10::optional<at::ScalarType> dtype);
};

struct TORCH_API cumprod_dimname_out {
  using schema = at::Tensor & (const at::Tensor &, at::Dimname, c10::optional<at::ScalarType>, at::Tensor &);
  using ptr_schema = schema*;
  // See Note [static constexpr char* members for windows NVCC]
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(name, "aten::cumprod")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(overload_name, "dimname_out")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(schema_str, "cumprod.dimname_out(Tensor self, Dimname dim, *, ScalarType? dtype=None, Tensor(a!) out) -> Tensor(a!)")
  static at::Tensor & call(const at::Tensor & self, at::Dimname dim, c10::optional<at::ScalarType> dtype, at::Tensor & out);
  static at::Tensor & redispatch(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::Dimname dim, c10::optional<at::ScalarType> dtype, at::Tensor & out);
};

}} // namespace at::_ops
