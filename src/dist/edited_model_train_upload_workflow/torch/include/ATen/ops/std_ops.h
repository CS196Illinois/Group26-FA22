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


struct TORCH_API std {
  using schema = at::Tensor (const at::Tensor &, bool);
  using ptr_schema = schema*;
  // See Note [static constexpr char* members for windows NVCC]
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(name, "aten::std")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(overload_name, "")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(schema_str, "std(Tensor self, bool unbiased=True) -> Tensor")
  static at::Tensor call(const at::Tensor & self, bool unbiased);
  static at::Tensor redispatch(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, bool unbiased);
};

struct TORCH_API std_dim {
  using schema = at::Tensor (const at::Tensor &, at::OptionalIntArrayRef, bool, bool);
  using ptr_schema = schema*;
  // See Note [static constexpr char* members for windows NVCC]
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(name, "aten::std")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(overload_name, "dim")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(schema_str, "std.dim(Tensor self, int[1]? dim, bool unbiased=True, bool keepdim=False) -> Tensor")
  static at::Tensor call(const at::Tensor & self, at::OptionalIntArrayRef dim, bool unbiased, bool keepdim);
  static at::Tensor redispatch(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::OptionalIntArrayRef dim, bool unbiased, bool keepdim);
};

struct TORCH_API std_correction {
  using schema = at::Tensor (const at::Tensor &, at::OptionalIntArrayRef, c10::optional<int64_t>, bool);
  using ptr_schema = schema*;
  // See Note [static constexpr char* members for windows NVCC]
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(name, "aten::std")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(overload_name, "correction")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(schema_str, "std.correction(Tensor self, int[1]? dim, *, int? correction, bool keepdim=False) -> Tensor")
  static at::Tensor call(const at::Tensor & self, at::OptionalIntArrayRef dim, c10::optional<int64_t> correction, bool keepdim);
  static at::Tensor redispatch(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::OptionalIntArrayRef dim, c10::optional<int64_t> correction, bool keepdim);
};

struct TORCH_API std_out {
  using schema = at::Tensor & (const at::Tensor &, at::OptionalIntArrayRef, bool, bool, at::Tensor &);
  using ptr_schema = schema*;
  // See Note [static constexpr char* members for windows NVCC]
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(name, "aten::std")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(overload_name, "out")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(schema_str, "std.out(Tensor self, int[1]? dim, bool unbiased=True, bool keepdim=False, *, Tensor(a!) out) -> Tensor(a!)")
  static at::Tensor & call(const at::Tensor & self, at::OptionalIntArrayRef dim, bool unbiased, bool keepdim, at::Tensor & out);
  static at::Tensor & redispatch(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::OptionalIntArrayRef dim, bool unbiased, bool keepdim, at::Tensor & out);
};

struct TORCH_API std_correction_out {
  using schema = at::Tensor & (const at::Tensor &, at::OptionalIntArrayRef, c10::optional<int64_t>, bool, at::Tensor &);
  using ptr_schema = schema*;
  // See Note [static constexpr char* members for windows NVCC]
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(name, "aten::std")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(overload_name, "correction_out")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(schema_str, "std.correction_out(Tensor self, int[1]? dim, *, int? correction, bool keepdim=False, Tensor(a!) out) -> Tensor(a!)")
  static at::Tensor & call(const at::Tensor & self, at::OptionalIntArrayRef dim, c10::optional<int64_t> correction, bool keepdim, at::Tensor & out);
  static at::Tensor & redispatch(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::OptionalIntArrayRef dim, c10::optional<int64_t> correction, bool keepdim, at::Tensor & out);
};

struct TORCH_API std_names_dim {
  using schema = at::Tensor (const at::Tensor &, at::DimnameList, bool, bool);
  using ptr_schema = schema*;
  // See Note [static constexpr char* members for windows NVCC]
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(name, "aten::std")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(overload_name, "names_dim")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(schema_str, "std.names_dim(Tensor self, Dimname[1] dim, bool unbiased=True, bool keepdim=False) -> Tensor")
  static at::Tensor call(const at::Tensor & self, at::DimnameList dim, bool unbiased, bool keepdim);
  static at::Tensor redispatch(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::DimnameList dim, bool unbiased, bool keepdim);
};

struct TORCH_API std_names_out {
  using schema = at::Tensor & (const at::Tensor &, at::DimnameList, bool, bool, at::Tensor &);
  using ptr_schema = schema*;
  // See Note [static constexpr char* members for windows NVCC]
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(name, "aten::std")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(overload_name, "names_out")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(schema_str, "std.names_out(Tensor self, Dimname[1] dim, bool unbiased=True, bool keepdim=False, *, Tensor(a!) out) -> Tensor(a!)")
  static at::Tensor & call(const at::Tensor & self, at::DimnameList dim, bool unbiased, bool keepdim, at::Tensor & out);
  static at::Tensor & redispatch(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::DimnameList dim, bool unbiased, bool keepdim, at::Tensor & out);
};

struct TORCH_API std_correction_names {
  using schema = at::Tensor (const at::Tensor &, at::DimnameList, c10::optional<int64_t>, bool);
  using ptr_schema = schema*;
  // See Note [static constexpr char* members for windows NVCC]
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(name, "aten::std")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(overload_name, "correction_names")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(schema_str, "std.correction_names(Tensor self, Dimname[1] dim, *, int? correction, bool keepdim=False) -> Tensor")
  static at::Tensor call(const at::Tensor & self, at::DimnameList dim, c10::optional<int64_t> correction, bool keepdim);
  static at::Tensor redispatch(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::DimnameList dim, c10::optional<int64_t> correction, bool keepdim);
};

struct TORCH_API std_correction_names_out {
  using schema = at::Tensor & (const at::Tensor &, at::DimnameList, c10::optional<int64_t>, bool, at::Tensor &);
  using ptr_schema = schema*;
  // See Note [static constexpr char* members for windows NVCC]
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(name, "aten::std")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(overload_name, "correction_names_out")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(schema_str, "std.correction_names_out(Tensor self, Dimname[1] dim, *, int? correction, bool keepdim=False, Tensor(a!) out) -> Tensor(a!)")
  static at::Tensor & call(const at::Tensor & self, at::DimnameList dim, c10::optional<int64_t> correction, bool keepdim, at::Tensor & out);
  static at::Tensor & redispatch(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::DimnameList dim, c10::optional<int64_t> correction, bool keepdim, at::Tensor & out);
};

}} // namespace at::_ops
