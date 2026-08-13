/*
 * Copyright (c), Recep Aslantas.
 *
 * MIT License (MIT), http://opensource.org/licenses/MIT
 * Full license can be found in the LICENSE file
 */

#ifndef cglmc_vec2_h
#define cglmc_vec2_h
#ifdef __cplusplus
extern "C" {
#endif

#include "../common.h"

CGLM_EXPORT
void
glmc_vec2(const float * __restrict v, vec2 dest);

CGLM_EXPORT
void
glmc_vec2_fill(vec2 v, float val);

CGLM_EXPORT
bool
glmc_vec2_eq(vec2_const v, float val);

CGLM_EXPORT
bool
glmc_vec2_eqv(vec2_const a, vec2_const b);

CGLM_EXPORT
void
glmc_vec2_copy(vec2_const a, vec2 dest);

CGLM_EXPORT
void
glmc_vec2_zero(vec2 v);

CGLM_EXPORT
void
glmc_vec2_one(vec2 v);

CGLM_EXPORT
float
glmc_vec2_dot(vec2_const a, vec2_const b);

CGLM_EXPORT
float
glmc_vec2_cross(vec2_const a, vec2_const b);

CGLM_EXPORT
float
glmc_vec2_norm2(vec2_const v);

CGLM_EXPORT
float
glmc_vec2_norm(vec2_const v);

CGLM_EXPORT
void
glmc_vec2_add(vec2_const a, vec2_const b, vec2 dest);

CGLM_EXPORT
void
glmc_vec2_adds(vec2_const v, float s, vec2 dest);

CGLM_EXPORT
void
glmc_vec2_sub(vec2_const a, vec2_const b, vec2 dest);

CGLM_EXPORT
void
glmc_vec2_subs(vec2_const v, float s, vec2 dest);

CGLM_EXPORT
void
glmc_vec2_mul(vec2_const a, vec2_const b, vec2 dest);

CGLM_EXPORT
void
glmc_vec2_scale(vec2_const v, float s, vec2 dest);

CGLM_EXPORT
void
glmc_vec2_scale_as(vec2_const v, float s, vec2 dest);

CGLM_EXPORT
void
glmc_vec2_div(vec2_const a, vec2_const b, vec2 dest);

CGLM_EXPORT
void
glmc_vec2_divs(vec2_const v, float s, vec2 dest);

CGLM_EXPORT
void
glmc_vec2_addadd(vec2_const a, vec2_const b, vec2 dest);

CGLM_EXPORT
void
glmc_vec2_subadd(vec2_const a, vec2_const b, vec2 dest);

CGLM_EXPORT
void
glmc_vec2_muladd(vec2_const a, vec2_const b, vec2 dest);

CGLM_EXPORT
void
glmc_vec2_muladds(vec2_const a, float s, vec2 dest);

CGLM_EXPORT
void
glmc_vec2_maxadd(vec2_const a, vec2_const b, vec2 dest);

CGLM_EXPORT
void
glmc_vec2_minadd(vec2_const a, vec2_const b, vec2 dest);

CGLM_EXPORT
void
glmc_vec2_subsub(vec2_const a, vec2_const b, vec2 dest);

CGLM_EXPORT
void
glmc_vec2_addsub(vec2_const a, vec2_const b, vec2 dest);

CGLM_EXPORT
void
glmc_vec2_mulsub(vec2_const a, vec2_const b, vec2 dest);

CGLM_EXPORT
void
glmc_vec2_mulsubs(vec2_const a, float s, vec2 dest);

CGLM_EXPORT
void
glmc_vec2_maxsub(vec2_const a, vec2_const b, vec2 dest);

CGLM_EXPORT
void
glmc_vec2_minsub(vec2_const a, vec2_const b, vec2 dest);

CGLM_EXPORT
void
glmc_vec2_negate_to(vec2_const v, vec2 dest);

CGLM_EXPORT
void
glmc_vec2_negate(vec2 v);

CGLM_EXPORT
void
glmc_vec2_normalize(vec2 v);

CGLM_EXPORT
void
glmc_vec2_normalize_to(vec2 v, vec2 dest);

CGLM_EXPORT
void
glmc_vec2_rotate(vec2_const v, float angle, vec2 dest);

CGLM_EXPORT
void
glmc_vec2_center(vec2_const a, vec2_const b, vec2 dest);

CGLM_EXPORT
float
glmc_vec2_distance2(vec2_const a, vec2_const b);

CGLM_EXPORT
float
glmc_vec2_distance(vec2_const a, vec2_const b);

CGLM_EXPORT
void
glmc_vec2_maxv(vec2_const a, vec2_const b, vec2 dest);

CGLM_EXPORT
void
glmc_vec2_minv(vec2_const a, vec2_const b, vec2 dest);

CGLM_EXPORT
void
glmc_vec2_clamp(vec2 v, float minval, float maxval);

CGLM_EXPORT
void
glmc_vec2_abs(vec2_const v, vec2 dest);

CGLM_EXPORT
void
glmc_vec2_fract(vec2_const v, vec2 dest);

CGLM_EXPORT
void
glmc_vec2_floor(vec2_const v, vec2 dest);

CGLM_EXPORT
void
glmc_vec2_mods(vec2_const v, float s, vec2 dest);

CGLM_EXPORT
void
glmc_vec2_swizzle(vec2_const v, int mask, vec2 dest);

CGLM_EXPORT
void
glmc_vec2_lerp(vec2_const from, vec2_const to, float t, vec2 dest);

CGLM_EXPORT
void
glmc_vec2_step(vec2_const edge, vec2_const x, vec2 dest);

CGLM_EXPORT
void
glmc_vec2_steps(float edge, vec2_const x, vec2 dest);

CGLM_EXPORT
void
glmc_vec2_stepr(vec2_const edge, float x, vec2 dest);

CGLM_EXPORT
void
glmc_vec2_complex_mul(vec2_const a, vec2_const b, vec2 dest);

CGLM_EXPORT
void
glmc_vec2_complex_div(vec2_const a, vec2_const b, vec2 dest);

CGLM_EXPORT
void
glmc_vec2_complex_conjugate(vec2_const a, vec2 dest);

CGLM_EXPORT
void
glmc_vec2_make(const float * __restrict src, vec2 dest);

CGLM_EXPORT
void
glmc_vec2_reflect(vec2_const v, vec2_const n, vec2 dest);

CGLM_EXPORT
bool
glmc_vec2_refract(vec2_const v, vec2_const n, float eta, vec2 dest);

CGLM_EXPORT
void
glmc_vec2_swap(vec2 a, vec2 b);

#ifdef __cplusplus
}
#endif
#endif /* cglmc_vec2_h */
