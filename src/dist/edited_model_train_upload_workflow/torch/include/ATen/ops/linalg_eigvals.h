#pragma once

// @generated by torchgen/gen.py from Function.h

#include <ATen/Context.h>
#include <ATen/DeviceGuard.h>
#include <ATen/TensorUtils.h>
#include <ATen/TracerMode.h>
#include <ATen/core/Generator.h>
#include <ATen/core/Reduction.h>
#include <ATen/core/Tensor.h>
#include <c10/core/Scalar.h>
#include <c10/core/Storage.h>
#include <c10/core/TensorOptions.h>
#include <c10/util/Deprecated.h>
#include <c10/util/Optional.h>



#include <ATen/ops/linalg_eigvals_ops.h>

namespace at {


// aten::linalg_eigvals(Tensor self) -> Tensor
inline at::Tensor linalg_eigvals(const at::Tensor & self) {
    return at::_ops::linalg_eigvals::call(self);
}

// aten::linalg_eigvals.out(Tensor self, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & linalg_eigvals_out(at::Tensor & out, const at::Tensor & self) {
    return at::_ops::linalg_eigvals_out::call(self, out);
}

// aten::linalg_eigvals.out(Tensor self, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & linalg_eigvals_outf(const at::Tensor & self, at::Tensor & out) {
    return at::_ops::linalg_eigvals_out::call(self, out);
}

}