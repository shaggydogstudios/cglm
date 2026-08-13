/*
 * Copyright (c), Recep Aslantas.
 *
 * MIT License (MIT), http://opensource.org/licenses/MIT
 * Full license can be found in the LICENSE file
 */

#include "../include/cglm/cglm.h"
#include "../include/cglm/call.h"

CGLM_EXPORT
void
glmc_quat_identity(versor q) {
  glm_quat_identity(q);
}

CGLM_EXPORT
void
glmc_quat_identity_array(versor * __restrict q, size_t count) {
  glm_quat_identity_array(q, count);
}

CGLM_EXPORT
void
glmc_quat_init(versor q, float x, float y, float z, float w) {
  glm_quat_init(q, x, y, z, w);
}

CGLM_EXPORT
void
glmc_quat(versor q, float angle, float x, float y, float z) {
  glm_quat(q, angle, x, y, z);
}

CGLM_EXPORT
void
glmc_quatv(versor q, float angle, vec3_const axis) {
  glm_quatv(q, angle, axis);
}

CGLM_EXPORT
void
glmc_quat_copy(versor_const q, versor dest) {
  glm_quat_copy(q, dest);
}

CGLM_EXPORT
void
glmc_quat_from_vecs(vec3_const a, vec3_const b, versor dest) {
  glm_quat_from_vecs(a, b, dest);
}

CGLM_EXPORT
float
glmc_quat_norm(versor_const q) {
  return glm_quat_norm(q);
}

CGLM_EXPORT
void
glmc_quat_normalize_to(versor_const q, versor dest) {
  glm_quat_normalize_to(q, dest);
}

CGLM_EXPORT
void
glmc_quat_normalize(versor q) {
  glm_quat_normalize(q);
}

CGLM_EXPORT
float
glmc_quat_dot(versor_const p, versor_const q) {
  return glm_quat_dot(p, q);
}

CGLM_EXPORT
void
glmc_quat_conjugate(versor_const q, versor dest) {
  glm_quat_conjugate(q, dest);
}

CGLM_EXPORT
void
glmc_quat_inv(versor_const q, versor dest) {
  glm_quat_inv(q, dest);
}

CGLM_EXPORT
void
glmc_quat_add(versor_const p, versor_const q, versor dest) {
  glm_quat_add(p, q, dest);
}

CGLM_EXPORT
void
glmc_quat_sub(versor_const p, versor_const q, versor dest) {
  glm_quat_sub(p, q, dest);
}

CGLM_EXPORT
float
glmc_quat_real(versor_const q) {
  return glm_quat_real(q);
}

CGLM_EXPORT
void
glmc_quat_imag(versor_const q, vec3 dest) {
  glm_quat_imag(q, dest);
}

CGLM_EXPORT
void
glmc_quat_imagn(versor_const q, vec3 dest) {
  glm_quat_imagn(q, dest);
}

CGLM_EXPORT
float
glmc_quat_imaglen(versor_const q) {
  return glm_quat_imaglen(q);
}

CGLM_EXPORT
float
glmc_quat_angle(versor_const q) {
  return glm_quat_angle(q);
}

CGLM_EXPORT
void
glmc_quat_axis(versor_const q, vec3 dest) {
  glm_quat_axis(q, dest);
}

CGLM_EXPORT
void
glmc_quat_mul(versor_const p, versor_const q, versor dest) {
  glm_quat_mul(p, q, dest);
}

CGLM_EXPORT
void
glmc_quat_mat4(versor_const q, mat4 dest) {
  glm_quat_mat4(q, dest);
}

CGLM_EXPORT
void
glmc_quat_mat4t(versor_const q, mat4 dest) {
  glm_quat_mat4t(q, dest);
}

CGLM_EXPORT
void
glmc_quat_mat3(versor_const q, mat3 dest) {
  glm_quat_mat3(q, dest);
}

CGLM_EXPORT
void
glmc_quat_mat3t(versor_const q, mat3 dest) {
  glm_quat_mat3t(q, dest);
}

CGLM_EXPORT
void
glmc_quat_lerp(versor_const from, versor_const to, float t, versor dest) {
  glm_quat_lerp(from, to, t, dest);
}

CGLM_EXPORT
void
glmc_quat_lerpc(versor_const from, versor_const to, float t, versor dest) {
  glm_quat_lerpc(from, to, t, dest);
}

CGLM_EXPORT
void
glmc_quat_nlerp(versor_const from, versor_const to, float t, versor dest) {
  glm_quat_nlerp(from, to, t, dest);
}

CGLM_EXPORT
void
glmc_quat_slerp(versor_const from, versor_const to, float t, versor dest) {
  glm_quat_slerp(from, to, t, dest);
}

CGLM_EXPORT
void
glmc_quat_slerp_longest(versor_const from, versor_const to, float t, versor dest) {
  glm_quat_slerp_longest(from, to, t, dest);
}

CGLM_EXPORT
void
glmc_quat_look(vec3_const eye, versor_const ori, mat4 dest) {
  glm_quat_look(eye, ori, dest);
}

CGLM_EXPORT
void
glmc_quat_for(vec3_const dir, vec3_const up, versor dest) {
  glm_quat_for(dir, up, dest);
}

CGLM_EXPORT
void
glmc_quat_forp(vec3_const from, vec3_const to, vec3_const up, versor dest) {
  glm_quat_forp(from, to, up, dest);
}

CGLM_EXPORT
void
glmc_quat_rotatev(versor_const q, vec3_const v, vec3 dest) {
  glm_quat_rotatev(q, v, dest);
}

CGLM_EXPORT
void
glmc_quat_rotate(mat4_const m, versor_const q, mat4 dest) {
  glm_quat_rotate(m, q, dest);
}

CGLM_EXPORT
void
glmc_quat_rotate_at(mat4 model, versor_const q, vec3 pivot) {
  glm_quat_rotate_at(model, q, pivot);
}

CGLM_EXPORT
void
glmc_quat_rotate_atm(mat4 m, versor_const q, vec3_const pivot) {
  glm_quat_rotate_atm(m, q, pivot);
}

CGLM_EXPORT
void
glmc_quat_make(const float * __restrict src, versor dest) {
  glm_quat_make(src, dest);
}
