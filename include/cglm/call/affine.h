/*
 * Copyright (c), Recep Aslantas.
 *
 * MIT License (MIT), http://opensource.org/licenses/MIT
 * Full license can be found in the LICENSE file
 */

#ifndef cglmc_affine_h
#define cglmc_affine_h
#ifdef __cplusplus
extern "C" {
#endif

#include "../common.h"

CGLM_EXPORT
void
glmc_translate_make(mat4 m, vec3_const v);

CGLM_EXPORT
void
glmc_translate_to(mat4_const m, vec3_const v, mat4 dest);

CGLM_EXPORT
void
glmc_translate(mat4 m, vec3_const v);

CGLM_EXPORT
void
glmc_translate_x(mat4 m, float to);

CGLM_EXPORT
void
glmc_translate_y(mat4 m, float to);

CGLM_EXPORT
void
glmc_translate_z(mat4 m, float to);

CGLM_EXPORT
void
glmc_scale_make(mat4 m, vec3_const v);

CGLM_EXPORT
void
glmc_scale_to(mat4_const m, vec3_const v, mat4 dest);

CGLM_EXPORT
void
glmc_scale(mat4 m, vec3_const v);

CGLM_EXPORT
void
glmc_scale_uni(mat4 m, float s);

CGLM_EXPORT
void
glmc_rotate_x(mat4_const m, float rad, mat4 dest);

CGLM_EXPORT
void
glmc_rotate_y(mat4_const m, float rad, mat4 dest);

CGLM_EXPORT
void
glmc_rotate_z(mat4_const m, float rad, mat4 dest);

CGLM_EXPORT
void
glmc_rotate_make(mat4 m, float angle, vec3_const axis);

CGLM_EXPORT
void
glmc_rotate(mat4 m, float angle, vec3_const axis);

CGLM_EXPORT
void
glmc_rotate_at(mat4 m, vec3_const pivot, float angle, vec3_const axis);

CGLM_EXPORT
void
glmc_rotate_atm(mat4 m, vec3_const pivot, float angle, vec3_const axis);

CGLM_EXPORT
void
glmc_spin(mat4 m, float angle, vec3_const axis);

CGLM_EXPORT
void
glmc_decompose_scalev(mat4_const m, vec3 s);

CGLM_EXPORT
bool
glmc_uniscaled(mat4_const m);

CGLM_EXPORT
void
glmc_decompose_rs(mat4_const m, mat4 r, vec3 s);

CGLM_EXPORT
void
glmc_decompose(mat4_const m, vec4 t, mat4 r, vec3 s);

/* affine-post */

CGLM_EXPORT
void
glmc_translated(mat4 m, vec3_const v);

CGLM_EXPORT
void
glmc_translated_to(mat4_const m, vec3_const v, mat4 dest);

CGLM_EXPORT
void
glmc_translated_x(mat4 m, float x);

CGLM_EXPORT
void
glmc_translated_y(mat4 m, float y);

CGLM_EXPORT
void
glmc_translated_z(mat4 m, float z);

CGLM_EXPORT
void
glmc_rotated_x(mat4_const m, float angle, mat4 dest);

CGLM_EXPORT
void
glmc_rotated_y(mat4_const m, float angle, mat4 dest);

CGLM_EXPORT
void
glmc_rotated_z(mat4_const m, float angle, mat4 dest);

CGLM_EXPORT
void
glmc_rotated(mat4 m, float angle, vec3_const axis);

CGLM_EXPORT
void
glmc_rotated_at(mat4 m, vec3_const pivot, float angle, vec3_const axis);

CGLM_EXPORT
void
glmc_spinned(mat4 m, float angle, vec3_const axis);

/* affine-mat */

CGLM_EXPORT
void
glmc_mul(mat4_const m1, mat4_const m2, mat4 dest);

CGLM_EXPORT
void
glmc_mul_rot(mat4_const m1, mat4_const m2, mat4 dest);

CGLM_EXPORT
void
glmc_inv_tr(mat4 mat);

#ifdef __cplusplus
}
#endif
#endif /* cglmc_affine_h */
