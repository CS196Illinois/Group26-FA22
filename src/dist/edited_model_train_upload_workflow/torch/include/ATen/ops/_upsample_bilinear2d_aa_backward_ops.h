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


struct TORCH_API _upsample_bilinear2d_aa_backward_vec {
  using schema = at::Tensor (const at::Tensor &, at::OptionalSymIntArrayRef, c10::SymIntArrayRef, bool, c10::optional<at::ArrayRef<double>>);
  using ptr_schema = schema*;
  // See Note [static constexpr char* members for windows NVCC]
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(name, "aten::_upsample_bilinear2d_aa_backward")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(overload_name, "vec")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(schema_str, "_upsample_bilinear2d_aa_backward.vec(Tensor grad_output, SymInt[]? output_size, SymInt[] input_size, bool align_corners, float[]? scale_factors) -> Tensor")
  static at::Tensor call(const at::Tensor & grad_output, at::OptionalSymIntArrayRef output_size, c10::SymIntArrayRef input_size, bool align_corners, c10::optional<at::ArrayRef<double>> scale_factors);
  static at::Tensor redispatch(c10::DispatchKeySet dispatchKeySet, const at::Tensor & grad_output, at::OptionalSymIntArrayRef output_size, c10::SymIntArrayRef input_size, bool align_corners, c10::optional<at::ArrayRef<double>> scale_factors);
};

struct TORCH_API _upsample_bilinear2d_aa_backward_grad_input {
  using schema = at::Tensor & (const at::Tensor &, c10::SymIntArrayRef, c10::SymIntArrayRef, bool, c10::optional<double>, c10::optional<double>, at::Tensor &);
  using ptr_schema = schema*;
  // See Note [static constexpr char* members for windows NVCC]
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(name, "aten::_upsample_bilinear2d_aa_backward")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(overload_name, "grad_input")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(schema_str, "_upsample_bilinear2d_aa_backward.grad_input(Tensor grad_output, SymInt[2] output_size, SymInt[4] input_size, bool align_corners, float? scales_h=None, float? scales_w=None, *, Tensor(a!) grad_input) -> Tensor(a!)")
  static at::Tensor & call(const at::Tensor & grad_output, c10::SymIntArrayRef output_size, c10::SymIntArrayRef input_size, bool align_corners, c10::optional<double> scales_h, c10::optional<double> scales_w, at::Tensor & grad_input);
  static at::Tensor & redispatch(c10::DispatchKeySet dispatchKeySet, const at::Tensor & grad_output, c10::SymIntArrayRef output_size, c10::SymIntArrayRef input_size, bool align_corners, c10::optional<double> scales_h, c10::optional<double> scales_w, at::Tensor & grad_input);
};

struct TORCH_API _upsample_bilinear2d_aa_backward {
  using schema = at::Tensor (const at::Tensor &, c10::SymIntArrayRef, c10::SymIntArrayRef, bool, c10::optional<double>, c10::optional<double>);
  using ptr_schema = schema*;
  // See Note [static constexpr char* members for windows NVCC]
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(name, "aten::_upsample_bilinear2d_aa_backward")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(overload_name, "")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(schema_str, "_upsample_bilinear2d_aa_backward(Tensor grad_output, SymInt[2] output_size, SymInt[4] input_size, bool align_corners, float? scales_h=None, float? scales_w=None) -> Tensor")
  static at::Tensor call(const at::Tensor & grad_output, c10::SymIntArrayRef output_size, c10::SymIntArrayRef input_size, bool align_corners, c10::optional<double> scales_h, c10::optional<double> scales_w);
  static at::Tensor redispatch(c10::DispatchKeySet dispatchKeySet, const at::Tensor & grad_output, c10::SymIntArrayRef output_size, c10::SymIntArrayRef input_size, bool align_corners, c10::optional<double> scales_h, c10::optional<double> scales_w);
};

struct TORCH_API _upsample_bilinear2d_aa_backward_vec_out {
  using schema = at::Tensor & (const at::Tensor &, at::OptionalSymIntArrayRef, c10::SymIntArrayRef, bool, c10::optional<at::ArrayRef<double>>, at::Tensor &);
  using ptr_schema = schema*;
  // See Note [static constexpr char* members for windows NVCC]
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(name, "aten::_upsample_bilinear2d_aa_backward")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(overload_name, "vec_out")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(schema_str, "_upsample_bilinear2d_aa_backward.vec_out(Tensor grad_output, SymInt[]? output_size, SymInt[] input_size, bool align_corners, float[]? scale_factors, *, Tensor(a!) out) -> Tensor(a!)")
  static at::Tensor & call(const at::Tensor & grad_output, at::OptionalSymIntArrayRef output_size, c10::SymIntArrayRef input_size, bool align_corners, c10::optional<at::ArrayRef<double>> scale_factors, at::Tensor & out);
  static at::Tensor & redispatch(c10::DispatchKeySet dispatchKeySet, const at::Tensor & grad_output, at::OptionalSymIntArrayRef output_size, c10::SymIntArrayRef input_size, bool align_corners, c10::optional<at::ArrayRef<double>> scale_factors, at::Tensor & out);
};

}} // namespace at::_ops
