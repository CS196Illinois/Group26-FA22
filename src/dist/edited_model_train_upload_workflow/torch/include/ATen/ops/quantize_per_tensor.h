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



#include <ATen/ops/quantize_per_tensor_ops.h>

namespace at {


// aten::quantize_per_tensor(Tensor self, float scale, int zero_point, ScalarType dtype) -> Tensor
inline at::Tensor quantize_per_tensor(const at::Tensor & self, double scale, int64_t zero_point, at::ScalarType dtype) {
    return at::_ops::quantize_per_tensor::call(self, scale, zero_point, dtype);
}

// aten::quantize_per_tensor.tensor_qparams(Tensor self, Tensor scale, Tensor zero_point, ScalarType dtype) -> Tensor
inline at::Tensor quantize_per_tensor(const at::Tensor & self, const at::Tensor & scale, const at::Tensor & zero_point, at::ScalarType dtype) {
    return at::_ops::quantize_per_tensor_tensor_qparams::call(self, scale, zero_point, dtype);
}

// aten::quantize_per_tensor.tensors(Tensor[] tensors, Tensor scales, Tensor zero_points, ScalarType dtype) -> Tensor[]
inline ::std::vector<at::Tensor> quantize_per_tensor(at::TensorList tensors, const at::Tensor & scales, const at::Tensor & zero_points, at::ScalarType dtype) {
    return at::_ops::quantize_per_tensor_tensors::call(tensors, scales, zero_points, dtype);
}

// aten::quantize_per_tensor.out(Tensor self, float scale, int zero_point, ScalarType dtype, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & quantize_per_tensor_out(at::Tensor & out, const at::Tensor & self, double scale, int64_t zero_point, at::ScalarType dtype) {
    return at::_ops::quantize_per_tensor_out::call(self, scale, zero_point, dtype, out);
}

// aten::quantize_per_tensor.out(Tensor self, float scale, int zero_point, ScalarType dtype, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & quantize_per_tensor_outf(const at::Tensor & self, double scale, int64_t zero_point, at::ScalarType dtype, at::Tensor & out) {
    return at::_ops::quantize_per_tensor_out::call(self, scale, zero_point, dtype, out);
}

// aten::quantize_per_tensor.tensor_qparams_out(Tensor self, Tensor scale, Tensor zero_point, ScalarType dtype, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & quantize_per_tensor_out(at::Tensor & out, const at::Tensor & self, const at::Tensor & scale, const at::Tensor & zero_point, at::ScalarType dtype) {
    return at::_ops::quantize_per_tensor_tensor_qparams_out::call(self, scale, zero_point, dtype, out);
}

// aten::quantize_per_tensor.tensor_qparams_out(Tensor self, Tensor scale, Tensor zero_point, ScalarType dtype, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & quantize_per_tensor_outf(const at::Tensor & self, const at::Tensor & scale, const at::Tensor & zero_point, at::ScalarType dtype, at::Tensor & out) {
    return at::_ops::quantize_per_tensor_tensor_qparams_out::call(self, scale, zero_point, dtype, out);
}

// aten::quantize_per_tensor.tensors_out(Tensor[] tensors, Tensor scales, Tensor zero_points, ScalarType dtype, *, Tensor(a!)[] out) -> ()
inline void quantize_per_tensor_out(at::TensorList out, at::TensorList tensors, const at::Tensor & scales, const at::Tensor & zero_points, at::ScalarType dtype) {
    return at::_ops::quantize_per_tensor_tensors_out::call(tensors, scales, zero_points, dtype, out);
}

// aten::quantize_per_tensor.tensors_out(Tensor[] tensors, Tensor scales, Tensor zero_points, ScalarType dtype, *, Tensor(a!)[] out) -> ()
inline void quantize_per_tensor_outf(at::TensorList tensors, const at::Tensor & scales, const at::Tensor & zero_points, at::ScalarType dtype, at::TensorList out) {
    return at::_ops::quantize_per_tensor_tensors_out::call(tensors, scales, zero_points, dtype, out);
}

}
