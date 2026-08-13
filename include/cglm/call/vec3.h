/*
 * Copyright (c), Recep Aslantas.
 *
 * MIT License (MIT), http://opensource.org/licenses/MIT
 * Full license can be found in the LICENSE file
 */

#ifndef cglmc_vec3_h
#define cglmc_vec3_h
#ifdef __cplusplus
extern "C" {
#endif

#include "../common.h"

/* DEPRECATED! use _copy, _ucopy versions */
#define glmc_vec_dup(v, dest)          glmc_vec3_copy(v, dest)
#define glmc_vec3_flipsign(v)          glmc_vec3_negate(v)
#define glmc_vec3_flipsign_to(v, dest) glmc_vec3_negate_to(v, dest)
#define glmc_vec3_inv(v)               glmc_vec3_negate(v)
#define glmc_vec3_inv_to(v, dest)      glmc_vec3_negate_to(v, dest)
#define glmc_vec3_step_uni(edge, x, dest) glmc_vec3_steps(edge, x, dest);

CGLM_EXPORT
void
glmc_vec3(vec4_const v4, vec3 dest);

CGLM_EXPORT
void
glmc_vec3_copy(vec3_const a, vec3 dest);

CGLM_EXPORT
void
glmc_vec3_zero(vec3 v);

CGLM_EXPORT
void
glmc_vec3_one(vec3 v);

CGLM_EXPORT
float
glmc_vec3_dot(vec3_const a, vec3_const b);

CGLM_EXPORT
void
glmc_vec3_cross(vec3_const a, vec3_const b, vec3 dest);

CGLM_EXPORT
void
glmc_vec3_crossn(vec3_const a, vec3_const b, vec3 dest);

CGLM_EXPORT
float
glmc_vec3_norm(vec3_const v);

CGLM_EXPORT
float
glmc_vec3_norm2(vec3_const v);

CGLM_EXPORT
float
glmc_vec3_norm_one(vec3_const v);

CGLM_EXPORT
float
glmc_vec3_norm_inf(vec3_const v);

CGLM_EXPORT
void
glmc_vec3_normalize_to(vec3_const v, vec3 dest);

CGLM_EXPORT
void
glmc_vec3_normalize(vec3 v);

CGLM_EXPORT
void
glmc_vec3_add(vec3_const a, vec3_const b, vec3 dest);

CGLM_EXPORT
void
glmc_vec3_adds(vec3_const v, float s, vec3 dest);

CGLM_EXPORT
void
glmc_vec3_sub(vec3_const a, vec3_const b, vec3 dest);

CGLM_EXPORT
void
glmc_vec3_subs(vec3_const v, float s, vec3 dest);

CGLM_EXPORT
void
glmc_vec3_mul(vec3_const a, vec3_const b, vec3 d);

CGLM_EXPORT
void
glmc_vec3_scale(vec3_const v, float s, vec3 dest);

CGLM_EXPORT
void
glmc_vec3_scale_as(vec3_const v, float s, vec3 dest);

CGLM_EXPORT
void
glmc_vec3_div(vec3_const a, vec3_const b, vec3 dest);

CGLM_EXPORT
void
glmc_vec3_divs(vec3_const a, float s, vec3 dest);

CGLM_EXPORT
void
glmc_vec3_addadd(vec3_const a, vec3_const b, vec3 dest);

CGLM_EXPORT
void
glmc_vec3_subadd(vec3_const a, vec3_const b, vec3 dest);

CGLM_EXPORT
void
glmc_vec3_muladd(vec3_const a, vec3_const b, vec3 dest);

CGLM_EXPORT
void
glmc_vec3_muladds(vec3_const a, float s, vec3 dest);

CGLM_EXPORT
void
glmc_vec3_maxadd(vec3_const a, vec3_const b, vec3 dest);

CGLM_EXPORT
void
glmc_vec3_minadd(vec3_const a, vec3_const b, vec3 dest);

CGLM_EXPORT
void
glmc_vec3_subsub(vec3_const a, vec3_const b, vec3 dest);

CGLM_EXPORT
void
glmc_vec3_addsub(vec3_const a, vec3_const b, vec3 dest);

CGLM_EXPORT
void
glmc_vec3_mulsub(vec3_const a, vec3_const b, vec3 dest);

CGLM_EXPORT
void
glmc_vec3_mulsubs(vec3_const a, float s, vec3 dest);

CGLM_EXPORT
void
glmc_vec3_maxsub(vec3_const a, vec3_const b, vec3 dest);

CGLM_EXPORT
void
glmc_vec3_minsub(vec3_const a, vec3_const b, vec3 dest);

CGLM_EXPORT
void
glmc_vec3_negate(vec3 v);

CGLM_EXPORT
void
glmc_vec3_negate_to(vec3_const v, vec3 dest);

CGLM_EXPORT
float
glmc_vec3_angle(vec3_const a, vec3_const b);

CGLM_EXPORT
void
glmc_vec3_rotate(vec3 v, float angle, vec3_const axis);

CGLM_EXPORT
void
glmc_vec3_rotate_m4(mat4 m, vec3_const v, vec3 dest);

CGLM_EXPORT
void
glmc_vec3_rotate_m3(mat3_const m, vec3_const v, vec3 dest);

CGLM_EXPORT
void
glmc_vec3_proj(vec3_const a, vec3_const b, vec3 dest);

CGLM_EXPORT
void
glmc_vec3_center(vec3_const a, vec3_const b, vec3 dest);

CGLM_EXPORT
float
glmc_vec3_distance2(vec3_const a, vec3_const b);

CGLM_EXPORT
float
glmc_vec3_distance(vec3_const a, vec3_const b);

CGLM_EXPORT
void
glmc_vec3_maxv(vec3_const a, vec3_const b, vec3 dest);

CGLM_EXPORT
void
glmc_vec3_minv(vec3_const a, vec3_const b, vec3 dest);

CGLM_EXPORT
void
glmc_vec3_clamp(vec3 v, float minVal, float maxVal);

CGLM_EXPORT
void
glmc_vec3_ortho(vec3_const v, vec3 dest);

CGLM_EXPORT
void
glmc_vec3_lerp(vec3_const from, vec3_const to, float t, vec3 dest);

CGLM_EXPORT
void
glmc_vec3_lerpc(vec3_const from, vec3_const to, float t, vec3 dest);

CGLM_INLINE
void
glmc_vec3_mix(vec3_const from, vec3_const to, float t, vec3 dest) {
  glmc_vec3_lerp(from, to, t, dest);
}

CGLM_INLINE
void
glmc_vec3_mixc(vec3_const from, vec3_const to, float t, vec3 dest) {
  glmc_vec3_lerpc(from, to, t, dest);
}

CGLM_EXPORT
void
glmc_vec3_step(vec3_const edge, vec3_const x, vec3 dest);

CGLM_EXPORT
void
glmc_vec3_smoothstep_uni(float edge0, float edge1, vec3_const x, vec3 dest);

CGLM_EXPORT
void
glmc_vec3_smoothstep(vec3_const edge0, vec3_const edge1, vec3_const x, vec3 dest);

CGLM_EXPORT
void
glmc_vec3_smoothinterp(vec3_const from, vec3_const to, float t, vec3 dest);

CGLM_EXPORT
void
glmc_vec3_smoothinterpc(vec3_const from, vec3_const to, float t, vec3 dest);

CGLM_EXPORT
void
glmc_vec3_swizzle(vec3_const v, int mask, vec3 dest);

/* ext */

CGLM_EXPORT
void
glmc_vec3_mulv(vec3 a, vec3 b, vec3 d);

CGLM_EXPORT
void
glmc_vec3_broadcast(float val, vec3 d);

CGLM_EXPORT
void
glmc_vec3_fill(vec3 v, float val);

CGLM_EXPORT
bool
glmc_vec3_eq(vec3_const v, float val);

CGLM_EXPORT
bool
glmc_vec3_eq_eps(vec3_const v, float val);

CGLM_EXPORT
bool
glmc_vec3_eq_all(vec3_const v);

CGLM_EXPORT
bool
glmc_vec3_eqv(vec3_const a, vec3_const b);

CGLM_EXPORT
bool
glmc_vec3_eqv_eps(vec3_const a, vec3_const b);

CGLM_EXPORT
float
glmc_vec3_max(vec3_const v);

CGLM_EXPORT
float
glmc_vec3_min(vec3_const v);

CGLM_EXPORT
bool
glmc_vec3_isnan(vec3_const v);

CGLM_EXPORT
bool
glmc_vec3_isinf(vec3_const v);

CGLM_EXPORT
bool
glmc_vec3_isvalid(vec3_const v);

CGLM_EXPORT
void
glmc_vec3_sign(vec3 v, vec3 dest);

CGLM_EXPORT
void
glmc_vec3_abs(vec3_const v, vec3 dest);

CGLM_EXPORT
void
glmc_vec3_fract(vec3_const v, vec3 dest);

CGLM_EXPORT
void
glmc_vec3_floor(vec3_const v, vec3 dest);

CGLM_EXPORT
void
glmc_vec3_mods(vec3_const v, float s, vec3 dest);

CGLM_EXPORT
void
glmc_vec3_steps(float edge, vec3_const x, vec3 dest);

CGLM_EXPORT
void
glmc_vec3_stepr(vec3_const edge, float x, vec3 dest);

CGLM_EXPORT
float
glmc_vec3_hadd(vec3_const v);

CGLM_EXPORT
void
glmc_vec3_sqrt(vec3_const v, vec3 dest);

CGLM_EXPORT
void
glmc_vec3_make(const float * __restrict src, vec3 dest);

CGLM_EXPORT
void
glmc_vec3_faceforward(vec3_const n, vec3_const v, vec3_const nref, vec3 dest);

CGLM_EXPORT
void
glmc_vec3_reflect(vec3_const v, vec3_const n, vec3 dest);

CGLM_EXPORT
bool
glmc_vec3_refract(vec3_const v, vec3_const n, float eta, vec3 dest);

CGLM_EXPORT
void
glmc_vec3_swap(vec3 a, vec3 b);

#ifdef __cplusplus
}
#endif
#endif /* cglmc_vec3_h */
