// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#include "core/providers/cpu/tensor/quantize_linear.h"
#include "core/providers/common.h"

namespace onnxruntime {
namespace contrib {

ONNX_CPU_OPERATOR_TYPED_MS_KERNEL(
    DequantizeLinear,
    1,
    uint8_t,
    KernelDefBuilder()
        .TypeConstraint("T1", DataTypeImpl::GetTensorType<float>())
        .TypeConstraint("T2", DataTypeImpl::GetTensorType<uint8_t>()),
    DequantizeLinear<uint8_t>);

ONNX_CPU_OPERATOR_TYPED_MS_KERNEL(
    DequantizeLinear,
    1,
    int8_t,
    KernelDefBuilder()
        .TypeConstraint("T1", DataTypeImpl::GetTensorType<float>())
        .TypeConstraint("T2", DataTypeImpl::GetTensorType<int8_t>()),
    DequantizeLinear<int8_t>);

ONNX_CPU_OPERATOR_TYPED_MS_KERNEL(
    QuantizeLinear,
    1,
    uint8_t,
    KernelDefBuilder()
        .TypeConstraint("T1", DataTypeImpl::GetTensorType<float>())
        .TypeConstraint("T2", DataTypeImpl::GetTensorType<uint8_t>()),
    QuantizeLinear<uint8_t>);

}  // namespace contrib
}  // namespace onnxruntime
