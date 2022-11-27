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



#include <ATen/ops/linalg_solve_ex_ops.h>

namespace at {


// aten::linalg_solve_ex(Tensor A, Tensor B, *, bool left=True, bool check_errors=False) -> (Tensor result, Tensor info)
inline ::std::tuple<at::Tensor,at::Tensor> linalg_solve_ex(const at::Tensor & A, const at::Tensor & B, bool left=true, bool check_errors=false) {
    return at::_ops::linalg_solve_ex::call(A, B, left, check_errors);
}

// aten::linalg_solve_ex.out(Tensor A, Tensor B, *, bool left=True, bool check_errors=False, Tensor(a!) result, Tensor(b!) info) -> (Tensor(a!) result, Tensor(b!) info)
inline ::std::tuple<at::Tensor &,at::Tensor &> linalg_solve_ex_out(at::Tensor & result, at::Tensor & info, const at::Tensor & A, const at::Tensor & B, bool left=true, bool check_errors=false) {
    return at::_ops::linalg_solve_ex_out::call(A, B, left, check_errors, result, info);
}

// aten::linalg_solve_ex.out(Tensor A, Tensor B, *, bool left=True, bool check_errors=False, Tensor(a!) result, Tensor(b!) info) -> (Tensor(a!) result, Tensor(b!) info)
inline ::std::tuple<at::Tensor &,at::Tensor &> linalg_solve_ex_outf(const at::Tensor & A, const at::Tensor & B, bool left, bool check_errors, at::Tensor & result, at::Tensor & info) {
    return at::_ops::linalg_solve_ex_out::call(A, B, left, check_errors, result, info);
}

}
