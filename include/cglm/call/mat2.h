/*
 * Copyright (c), Recep Aslantas.
 *
 * MIT License (MIT), http://opensource.org/licenses/MIT
 * Full license can be found in the LICENSE file
 */

#ifndef cglmc_mat2_h
#define cglmc_mat2_h
#ifdef __cplusplus
extern "C" {
#endif

#include "../common.h"

CGLM_EXPORT
void
glmc_mat2_make(const float * __restrict src, mat2 dest);

CGLM_EXPORT
void
glmc_mat2_copy(mat2_const mat, mat2 dest);

CGLM_EXPORT
void
glmc_mat2_identity(mat2 m);

CGLM_EXPORT
void
glmc_mat2_identity_array(mat2 * __restrict mats, size_t count);

CGLM_EXPORT
void
glmc_mat2_zero(mat2 m);

CGLM_EXPORT
void
glmc_mat2_mul(mat2_const m1, mat2_const m2, mat2 dest);

CGLM_EXPORT
void
glmc_mat2_mulv(mat2_const m, vec2_const v, vec2 dest);

CGLM_EXPORT
void
glmc_mat2_transpose_to(mat2_const mat, mat2 dest);

CGLM_EXPORT
void
glmc_mat2_transpose(mat2 m);

CGLM_EXPORT
void
glmc_mat2_scale(mat2 m, float s);

CGLM_EXPORT
void
glmc_mat2_inv(mat2_const mat, mat2 dest);

CGLM_EXPORT
void
glmc_mat2_swap_col(mat2 mat, int col1, int col2);

CGLM_EXPORT
void
glmc_mat2_swap_row(mat2 mat, int row1, int row2);

CGLM_EXPORT
float
glmc_mat2_trace(mat2_const m);

CGLM_EXPORT
float
glmc_mat2_det(mat2_const m);

CGLM_EXPORT
float
glmc_mat2_rmc(vec2_const r, mat2_const m, vec2_const c);

#ifdef __cplusplus
}
#endif
#endif /* cglmc_mat2_h */
