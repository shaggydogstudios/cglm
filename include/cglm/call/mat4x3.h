/*
 * Copyright (c), Recep Aslantas.
 *
 * MIT License (MIT), http://opensource.org/licenses/MIT
 * Full license can be found in the LICENSE file
 */

#ifndef cglmc_mat4x3_h
#define cglmc_mat4x3_h
#ifdef __cplusplus
extern "C" {
#endif

#include "../common.h"

CGLM_EXPORT
void
glmc_mat4x3_copy(mat4x3_const src, mat4x3 dest);

CGLM_EXPORT
void
glmc_mat4x3_zero(mat4x3 m);

CGLM_EXPORT
void
glmc_mat4x3_make(const float * __restrict src, mat4x3 dest);

CGLM_EXPORT
void
glmc_mat4x3_mul(mat4x3_const m1, mat3x4_const m2, mat3 dest);

CGLM_EXPORT
void
glmc_mat4x3_mulv(mat4x3_const m, vec4_const v, vec3 dest);

CGLM_EXPORT
void
glmc_mat4x3_transpose(mat4x3_const src, mat3x4 dest);

CGLM_EXPORT
void
glmc_mat4x3_scale(mat4x3 m, float s);

#ifdef __cplusplus
}
#endif
#endif /* cglmc_mat4x3_h */
