/*
 * Copyright (c), Recep Aslantas.
 *
 * MIT License (MIT), http://opensource.org/licenses/MIT
 * Full license can be found in the LICENSE file
 */

#ifndef cglmc_mat3_h
#define cglmc_mat3_h
#ifdef __cplusplus
extern "C" {
#endif

#include "../common.h"

/* DEPRECATED! use _copy, _ucopy versions */
#define glmc_mat3_dup(mat, dest)  glmc_mat3_copy(mat, dest)

CGLM_EXPORT
void
glmc_mat3_copy(mat3_const mat, mat3 dest);

CGLM_EXPORT
void
glmc_mat3_identity(mat3 mat);

CGLM_EXPORT
void
glmc_mat3_zero(mat3 mat);

CGLM_EXPORT
void
glmc_mat3_identity_array(mat3 * __restrict mat, size_t count);

CGLM_EXPORT
void
glmc_mat3_mul(mat3_const m1, mat3_const m2, mat3 dest);

CGLM_EXPORT
void
glmc_mat3_transpose_to(mat3_const m, mat3 dest);

CGLM_EXPORT
void
glmc_mat3_transpose(mat3 m);

CGLM_EXPORT
void
glmc_mat3_mulv(mat3_const m, vec3_const v, vec3 dest);

CGLM_EXPORT
float
glmc_mat3_trace(mat3_const m);

CGLM_EXPORT
void
glmc_mat3_quat(mat3_const m, versor dest);

CGLM_EXPORT
void
glmc_mat3_scale(mat3 m, float s);

CGLM_EXPORT
float
glmc_mat3_det(mat3_const mat);

CGLM_EXPORT
void
glmc_mat3_inv(mat3_const mat, mat3 dest);

CGLM_EXPORT
void
glmc_mat3_swap_col(mat3 mat, int col1, int col2);

CGLM_EXPORT
void
glmc_mat3_swap_row(mat3 mat, int row1, int row2);

CGLM_EXPORT
float
glmc_mat3_rmc(vec3_const r, mat3_const m, vec3_const c);

CGLM_EXPORT
void
glmc_mat3_make(const float * __restrict src, mat3 dest);

CGLM_EXPORT
void
glmc_mat3_textrans(float sx, float sy, float rot, float tx, float ty, mat3 dest);

#ifdef __cplusplus
}
#endif
#endif /* cglmc_mat3_h */
