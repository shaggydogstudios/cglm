/*
 * Copyright (c), Recep Aslantas.
 *
 * MIT License (MIT), http://opensource.org/licenses/MIT
 * Full license can be found in the LICENSE file
 */

#ifndef cglmc_vec4_h
#define cglmc_vec4_h
#ifdef __cplusplus
extern "C" {
#endif

#include "../common.h"

/* DEPRECATED! use _copy, _ucopy versions */
#define glmc_vec4_dup3(v, dest)         glmc_vec4_copy3(v, dest)
#define glmc_vec4_dup(v, dest)          glmc_vec4_copy(v, dest)
#define glmc_vec4_flipsign(v)           glmc_vec4_negate(v)
#define glmc_vec4_flipsign_to(v, dest)  glmc_vec4_negate_to(v, dest)
#define glmc_vec4_inv(v)                glmc_vec4_negate(v)
#define glmc_vec4_inv_to(v, dest)       glmc_vec4_negate_to(v, dest)
#define glmc_vec4_step_uni(edge, x, dest) glmc_vec4_steps(edge, x, dest)

CGLM_EXPORT
void
glmc_vec4(vec3_const v3, float last, vec4 dest);

CGLM_EXPORT
void
glmc_vec4_zero(vec4 v);

CGLM_EXPORT
void
glmc_vec4_one(vec4 v);

CGLM_EXPORT
void
glmc_vec4_copy3(vec4_const v, vec3 dest);

CGLM_EXPORT
void
glmc_vec4_copy(vec4_const v, vec4 dest);

CGLM_EXPORT
void
glmc_vec4_ucopy(vec4_const v, vec4 dest);

CGLM_EXPORT
float
glmc_vec4_dot(vec4_const a, vec4_const b);

CGLM_EXPORT
float
glmc_vec4_norm(vec4_const v);

CGLM_EXPORT
float
glmc_vec4_norm2(vec4_const v);

CGLM_EXPORT
float
glmc_vec4_norm_one(vec4_const v);

CGLM_EXPORT
float
glmc_vec4_norm_inf(vec4_const v);

CGLM_EXPORT
void
glmc_vec4_normalize_to(vec4 v, vec4 dest);

CGLM_EXPORT
void
glmc_vec4_normalize(vec4 v);

CGLM_EXPORT
void
glmc_vec4_add(vec4_const a, vec4_const b, vec4 dest);

CGLM_EXPORT
void
glmc_vec4_adds(vec4_const v, float s, vec4 dest);

CGLM_EXPORT
void
glmc_vec4_sub(vec4_const a, vec4_const b, vec4 dest);

CGLM_EXPORT
void
glmc_vec4_subs(vec4_const v, float s, vec4 dest);

CGLM_EXPORT
void
glmc_vec4_mul(vec4 a, vec4 b, vec4 d);

CGLM_EXPORT
void
glmc_vec4_scale(vec4_const v, float s, vec4 dest);

CGLM_EXPORT
void
glmc_vec4_scale_as(vec4_const v, float s, vec4 dest);

CGLM_EXPORT
void
glmc_vec4_div(vec4_const a, vec4_const b, vec4 dest);

CGLM_EXPORT
void
glmc_vec4_divs(vec4_const v, float s, vec4 dest);

CGLM_EXPORT
void
glmc_vec4_addadd(vec4_const a, vec4_const b, vec4 dest);

CGLM_EXPORT
void
glmc_vec4_subadd(vec4_const a, vec4_const b, vec4 dest);

CGLM_EXPORT
void
glmc_vec4_muladd(vec4_const a, vec4_const b, vec4 dest);

CGLM_EXPORT
void
glmc_vec4_muladds(vec4_const a, float s, vec4 dest);

CGLM_EXPORT
void
glmc_vec4_maxadd(vec4_const a, vec4_const b, vec4 dest);

CGLM_EXPORT
void
glmc_vec4_minadd(vec4_const a, vec4_const b, vec4 dest);

CGLM_EXPORT
void
glmc_vec4_subsub(vec4_const a, vec4_const b, vec4 dest);

CGLM_EXPORT
void
glmc_vec4_addsub(vec4_const a, vec4_const b, vec4 dest);

CGLM_EXPORT
void
glmc_vec4_mulsub(vec4_const a, vec4_const b, vec4 dest);

CGLM_EXPORT
void
glmc_vec4_mulsubs(vec4_const a, float s, vec4 dest);

CGLM_EXPORT
void
glmc_vec4_maxsub(vec4_const a, vec4_const b, vec4 dest);

CGLM_EXPORT
void
glmc_vec4_minsub(vec4_const a, vec4_const b, vec4 dest);

CGLM_EXPORT
void
glmc_vec4_negate(vec4 v);

CGLM_EXPORT
void
glmc_vec4_negate_to(vec4_const v, vec4 dest);

CGLM_EXPORT
float
glmc_vec4_distance(vec4_const a, vec4_const b);

CGLM_EXPORT
float
glmc_vec4_distance2(vec4_const a, vec4_const b);

CGLM_EXPORT
void
glmc_vec4_maxv(vec4_const a, vec4_const b, vec4 dest);

CGLM_EXPORT
void
glmc_vec4_minv(vec4_const a, vec4_const b, vec4 dest);

CGLM_EXPORT
void
glmc_vec4_clamp(vec4 v, float minVal, float maxVal);

CGLM_EXPORT
void
glmc_vec4_lerp(vec4_const from, vec4_const to, float t, vec4 dest);

CGLM_EXPORT
void
glmc_vec4_lerpc(vec4_const from, vec4_const to, float t, vec4 dest);

CGLM_INLINE
void
glmc_vec4_mix(vec4_const from, vec4_const to, float t, vec4 dest) {
  glmc_vec4_lerp(from, to, t, dest);
}

CGLM_INLINE
void
glmc_vec4_mixc(vec4_const from, vec4_const to, float t, vec4 dest) {
  glmc_vec4_lerpc(from, to, t, dest);
}

CGLM_EXPORT
void
glmc_vec4_step(vec4_const edge, vec4_const x, vec4 dest);

CGLM_EXPORT
void
glmc_vec4_smoothstep_uni(float edge0, float edge1, vec4_const x, vec4 dest);

CGLM_EXPORT
void
glmc_vec4_smoothstep(vec4_const edge0, vec4_const edge1, vec4_const x, vec4 dest);

CGLM_EXPORT
void
glmc_vec4_smoothinterp(vec4_const from, vec4_const to, float t, vec4 dest);

CGLM_EXPORT
void
glmc_vec4_smoothinterpc(vec4_const from, vec4_const to, float t, vec4 dest);

CGLM_EXPORT
void
glmc_vec4_cubic(float s, vec4 dest);

CGLM_EXPORT
void
glmc_vec4_swizzle(vec4_const v, int mask, vec4 dest);

/* ext */

CGLM_EXPORT
void
glmc_vec4_mulv(vec4 a, vec4 b, vec4 d);

CGLM_EXPORT
void
glmc_vec4_broadcast(float val, vec4 d);

CGLM_EXPORT
void
glmc_vec4_fill(vec4 v, float val);

CGLM_EXPORT
bool
glmc_vec4_eq(vec4 v, float val);

CGLM_EXPORT
bool
glmc_vec4_eq_eps(vec4 v, float val);

CGLM_EXPORT
bool
glmc_vec4_eq_all(vec4 v);

CGLM_EXPORT
bool
glmc_vec4_eqv(vec4 a, vec4 b);

CGLM_EXPORT
bool
glmc_vec4_eqv_eps(vec4 a, vec4 b);

CGLM_EXPORT
float
glmc_vec4_max(vec4 v);

CGLM_EXPORT
float
glmc_vec4_min(vec4 v);

CGLM_EXPORT
bool
glmc_vec4_isnan(vec4_const v);

CGLM_EXPORT
bool
glmc_vec4_isinf(vec4_const v);

CGLM_EXPORT
bool
glmc_vec4_isvalid(vec4_const v);

CGLM_EXPORT
void
glmc_vec4_sign(vec4 v, vec4 dest);

CGLM_EXPORT
void
glmc_vec4_abs(vec4_const v, vec4 dest);

CGLM_EXPORT
void
glmc_vec4_fract(vec4_const v, vec4 dest);

CGLM_EXPORT
void
glmc_vec4_floor(vec4_const v, vec4 dest);

CGLM_EXPORT
void
glmc_vec4_mods(vec4_const v, float s, vec4 dest);

CGLM_EXPORT
void
glmc_vec4_steps(float edge, vec4_const x, vec4 dest);

CGLM_EXPORT
void
glmc_vec4_stepr(vec4_const edge, float x, vec4 dest);

CGLM_EXPORT
float
glmc_vec4_hadd(vec4_const v);

CGLM_EXPORT
void
glmc_vec4_sqrt(vec4_const v, vec4 dest);

CGLM_EXPORT
void
glmc_vec4_make(const float * __restrict src, vec4 dest);

CGLM_EXPORT
void
glmc_vec4_reflect(vec4_const v, vec4_const n, vec4 dest);

CGLM_EXPORT
bool
glmc_vec4_refract(vec4_const v, vec4_const n, float eta, vec4 dest);

CGLM_EXPORT
void
glmc_vec4_swap(vec4 a, vec4 b);

#ifdef __cplusplus
}
#endif
#endif /* cglmc_vec4_h */
