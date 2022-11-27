#pragma once
// @generated by torchgen/gen.py from DispatchKeyFunction.h

// NB: The implementing C++ file is RegisterDispatchKey.cpp

// The only #includes we need are for custom classes that have defaults in the C++ API
#include <c10/core/MemoryFormat.h>
#include <c10/core/Scalar.h>
#include <ATen/core/Reduction.h>

// Forward declarations of any types needed in the operator signatures.
// We can't directly include these classes because it will cause circular include dependencies.
// This file is included by TensorBody.h, which defines the Tensor class.
#include <ATen/core/ATen_fwd.h>

namespace at {

namespace compositeexplicitautograd {

TORCH_API at::Tensor zeros(at::IntArrayRef size, c10::optional<at::DimnameList> names, at::TensorOptions options={});
TORCH_API at::Tensor zeros(at::IntArrayRef size, c10::optional<at::DimnameList> names, c10::optional<at::ScalarType> dtype, c10::optional<at::Layout> layout, c10::optional<at::Device> device, c10::optional<bool> pin_memory);
TORCH_API at::Tensor & zeros_out(at::Tensor & out, at::IntArrayRef size, c10::optional<at::DimnameList> names);
TORCH_API at::Tensor & zeros_outf(at::IntArrayRef size, c10::optional<at::DimnameList> names, at::Tensor & out);
TORCH_API at::Tensor zeros(at::IntArrayRef size, at::TensorOptions options={});
TORCH_API at::Tensor zeros(at::IntArrayRef size, c10::optional<at::ScalarType> dtype, c10::optional<at::Layout> layout, c10::optional<at::Device> device, c10::optional<bool> pin_memory);
TORCH_API at::Tensor zeros_symint(c10::SymIntArrayRef size, at::TensorOptions options={});
TORCH_API at::Tensor zeros_symint(c10::SymIntArrayRef size, c10::optional<at::ScalarType> dtype, c10::optional<at::Layout> layout, c10::optional<at::Device> device, c10::optional<bool> pin_memory);
TORCH_API at::Tensor & zeros_out(at::Tensor & out, at::IntArrayRef size);
TORCH_API at::Tensor & zeros_outf(at::IntArrayRef size, at::Tensor & out);
TORCH_API at::Tensor & zeros_symint_out(at::Tensor & out, c10::SymIntArrayRef size);
TORCH_API at::Tensor & zeros_symint_outf(c10::SymIntArrayRef size, at::Tensor & out);

} // namespace compositeexplicitautograd
} // namespace at
