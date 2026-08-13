/*
 * Copyright (c), Recep Aslantas.
 *
 * MIT License (MIT), http://opensource.org/licenses/MIT
 * Full license can be found in the LICENSE file
 */

#ifndef cglmc_quat_h
#define cglmc_quat_h
#ifdef __cplusplus
extern "C" {
#endif

#include "../common.h"

CGLM_EXPORT
void
glmc_quat_identity(versor q);

CGLM_EXPORT
void
glmc_quat_identity_array(versor * __restrict q, size_t count);

CGLM_EXPORT
void
glmc_quat_init(versor q, float x, float y, float z, float w);

CGLM_EXPORT
void
glmc_quat(versor q, float angle, float x, float y, float z);

CGLM_EXPORT
void
glmc_quatv(versor q, float angle, vec3_const axis);

CGLM_EXPORT
void
glmc_quat_copy(versor_const q, versor dest);

CGLM_EXPORT
void
glmc_quat_from_vecs(vec3_const a, vec3_const b, versor dest);

CGLM_EXPORT
float
glmc_quat_norm(versor_const q);

CGLM_EXPORT
void
glmc_quat_normalize_to(versor_const q, versor dest);

CGLM_EXPORT
void
glmc_quat_normalize(versor q);

CGLM_EXPORT
float
glmc_quat_dot(versor_const p, versor_const q);

CGLM_EXPORT
void
glmc_quat_conjugate(versor_const q, versor dest);

CGLM_EXPORT
void
glmc_quat_inv(versor_const q, versor dest);

CGLM_EXPORT
void
glmc_quat_add(versor_const p, versor_const q, versor dest);

CGLM_EXPORT
void
glmc_quat_sub(versor_const p, versor_const q, versor dest);

CGLM_EXPORT
float
glmc_quat_real(versor_const q);

CGLM_EXPORT
void
glmc_quat_imag(versor_const q, vec3 dest);

CGLM_EXPORT
void
glmc_quat_imagn(versor_const q, vec3 dest);

CGLM_EXPORT
float
glmc_quat_imaglen(versor_const q);

CGLM_EXPORT
float
glmc_quat_angle(versor_const q);

CGLM_EXPORT
void
glmc_quat_axis(versor_const q, vec3 dest);

CGLM_EXPORT
void
glmc_quat_mul(versor_const p, versor_const q, versor dest);

CGLM_EXPORT
void
glmc_quat_mat4(versor_const q, mat4 dest);

CGLM_EXPORT
void
glmc_quat_mat4t(versor_const q, mat4 dest);

CGLM_EXPORT
void
glmc_quat_mat3(versor_const q, mat3 dest);

CGLM_EXPORT
void
glmc_quat_mat3t(versor_const q, mat3 dest);

CGLM_EXPORT
void
glmc_quat_lerp(versor_const from, versor_const to, float t, versor dest);

CGLM_EXPORT
void
glmc_quat_lerpc(versor_const from, versor_const to, float t, versor dest);

CGLM_EXPORT
void
glmc_quat_nlerp(versor_const q, versor_const r, float t, versor dest);

CGLM_EXPORT
void
glmc_quat_slerp(versor_const q, versor_const r, float t, versor dest);

CGLM_EXPORT
void
glmc_quat_slerp_longest(versor_const q, versor_const r, float t, versor dest);

CGLM_EXPORT
void
glmc_quat_look(vec3_const eye, versor_const ori, mat4 dest);

CGLM_EXPORT
void
glmc_quat_for(vec3_const dir, vec3_const up, versor dest);

CGLM_EXPORT
void
glmc_quat_forp(vec3_const from, vec3_const to, vec3_const up, versor dest);

CGLM_EXPORT
void
glmc_quat_rotatev(versor_const from, vec3_const to, vec3 dest);

CGLM_EXPORT
void
glmc_quat_rotate(mat4_const m, versor_const q, mat4 dest);

CGLM_EXPORT
void
glmc_quat_rotate_at(mat4 model, versor_const q, vec3 pivot);

CGLM_EXPORT
void
glmc_quat_rotate_atm(mat4 m, versor_const q, vec3_const pivot);

CGLM_EXPORT
void
glmc_quat_make(const float * __restrict src, versor dest);

#ifdef __cplusplus
}
#endif
#endif /* cglmc_quat_h */
