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



#include <ATen/ops/elu_ops.h>

namespace at {


// aten::elu.out(Tensor self, Scalar alpha=1, Scalar scale=1, Scalar input_scale=1, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & elu_out(at::Tensor & out, const at::Tensor & self, const at::Scalar & alpha=1, const at::Scalar & scale=1, const at::Scalar & input_scale=1) {
    return at::_ops::elu_out::call(self, alpha, scale, input_scale, out);
}

// aten::elu.out(Tensor self, Scalar alpha=1, Scalar scale=1, Scalar input_scale=1, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & elu_outf(const at::Tensor & self, const at::Scalar & alpha, const at::Scalar & scale, const at::Scalar & input_scale, at::Tensor & out) {
    return at::_ops::elu_out::call(self, alpha, scale, input_scale, out);
}

// aten::elu(Tensor self, Scalar alpha=1, Scalar scale=1, Scalar input_scale=1) -> Tensor
inline at::Tensor elu(const at::Tensor & self, const at::Scalar & alpha=1, const at::Scalar & scale=1, const at::Scalar & input_scale=1) {
    return at::_ops::elu::call(self, alpha, scale, input_scale);
}

// aten::elu_(Tensor(a!) self, Scalar alpha=1, Scalar scale=1, Scalar input_scale=1) -> Tensor(a!)
inline at::Tensor & elu_(at::Tensor & self, const at::Scalar & alpha=1, const at::Scalar & scale=1, const at::Scalar & input_scale=1) {
    return at::_ops::elu_::call(self, alpha, scale, input_scale);
}

}
