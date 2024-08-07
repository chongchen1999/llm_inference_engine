#pragma once
#include <cuda_runtime.h>
#include <cuda.h>
#include <cuda_fp16.h>
#include "../../utils/tensor.h"
#include "../../weights/includes/norm_weights.h"
#include "../../utils/vectorize_utils.h"

template<typename T>
void launchRMSNorm(
    TensorWrapper<T> *decoder_out, // [num_tokens, hidden_units]
    TensorWrapper<T> *decoder_residual, // [num_tokens, hidden_units]
    LayerNormWeight<T> *attention_norm_weight, // [hidden_units]
    float eps, bool is_last = false
);