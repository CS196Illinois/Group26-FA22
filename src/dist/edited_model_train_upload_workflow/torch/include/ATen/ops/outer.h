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



#include <ATen/ops/outer_ops.h>

namespace at {


// aten::outer(Tensor self, Tensor vec2) -> Tensor
inline at::Tensor outer(const at::Tensor & self, const at::Tensor & vec2) {
    return at::_ops::outer::call(self, vec2);
}

// aten::outer.out(Tensor self, Tensor vec2, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & outer_out(at::Tensor & out, const at::Tensor & self, const at::Tensor & vec2) {
    return at::_ops::outer_out::call(self, vec2, out);
}

// aten::outer.out(Tensor self, Tensor vec2, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & outer_outf(const at::Tensor & self, const at::Tensor & vec2, at::Tensor & out) {
    return at::_ops::outer_out::call(self, vec2, out);
}

}
