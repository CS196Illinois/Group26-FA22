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



#include <ATen/ops/conv_tbc_ops.h>

namespace at {


// aten::conv_tbc(Tensor self, Tensor weight, Tensor bias, int pad=0) -> Tensor
inline at::Tensor conv_tbc(const at::Tensor & self, const at::Tensor & weight, const at::Tensor & bias, int64_t pad=0) {
    return at::_ops::conv_tbc::call(self, weight, bias, pad);
}

// aten::conv_tbc.out(Tensor self, Tensor weight, Tensor bias, int pad=0, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & conv_tbc_out(at::Tensor & out, const at::Tensor & self, const at::Tensor & weight, const at::Tensor & bias, int64_t pad=0) {
    return at::_ops::conv_tbc_out::call(self, weight, bias, pad, out);
}

// aten::conv_tbc.out(Tensor self, Tensor weight, Tensor bias, int pad=0, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & conv_tbc_outf(const at::Tensor & self, const at::Tensor & weight, const at::Tensor & bias, int64_t pad, at::Tensor & out) {
    return at::_ops::conv_tbc_out::call(self, weight, bias, pad, out);
}

}
