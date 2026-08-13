/*
 * Copyright (c), Recep Aslantas.
 *
 * MIT License (MIT), http://opensource.org/licenses/MIT
 * Full license can be found in the LICENSE file
 */

#ifndef cglmc_ivec2_h
#define cglmc_ivec2_h
#ifdef __cplusplus
extern "C" {
#endif

#include "../common.h"

CGLM_EXPORT
void
glmc_ivec2(int * __restrict v, ivec2 dest);

CGLM_EXPORT
void
glmc_ivec2_copy(ivec2_const a, ivec2 dest);

CGLM_EXPORT
void
glmc_ivec2_zero(ivec2 v);

CGLM_EXPORT
void
glmc_ivec2_one(ivec2 v);

CGLM_EXPORT
int
glmc_ivec2_dot(ivec2_const a, ivec2_const b);

CGLM_EXPORT
int
glmc_ivec2_cross(ivec2_const a, ivec2_const b);

CGLM_EXPORT
void
glmc_ivec2_add(ivec2_const a, ivec2_const b, ivec2 dest);

CGLM_EXPORT
void
glmc_ivec2_adds(ivec2_const v, int s, ivec2 dest);

CGLM_EXPORT
void
glmc_ivec2_sub(ivec2_const a, ivec2_const b, ivec2 dest);

CGLM_EXPORT
void
glmc_ivec2_subs(ivec2_const v, int s, ivec2 dest);

CGLM_EXPORT
void
glmc_ivec2_mul(ivec2_const a, ivec2_const b, ivec2 dest);

CGLM_EXPORT
void
glmc_ivec2_scale(ivec2_const v, int s, ivec2 dest);

CGLM_EXPORT
void
glmc_ivec2_div(ivec2_const a, ivec2_const b, ivec2 dest);

CGLM_EXPORT
void
glmc_ivec2_divs(ivec2_const v, int s, ivec2 dest);

CGLM_EXPORT
void
glmc_ivec2_mod(ivec2_const a, ivec2_const b, ivec2 dest);

CGLM_EXPORT 
void 
glmc_ivec2_addadd(ivec2_const a, ivec2_const b, ivec2 dest);

CGLM_EXPORT 
void 
glmc_ivec2_addadds(ivec2_const a, int s, ivec2 dest);

CGLM_EXPORT 
void 
glmc_ivec2_subadd(ivec2_const a, ivec2_const b, ivec2 dest);

CGLM_EXPORT 
void 
glmc_ivec2_subadds(ivec2_const a, int s, ivec2 dest);

CGLM_EXPORT 
void 
glmc_ivec2_muladd(ivec2_const a, ivec2_const b, ivec2 dest);

CGLM_EXPORT 
void 
glmc_ivec2_muladds(ivec2_const a, int s, ivec2 dest);

CGLM_EXPORT 
void 
glmc_ivec2_maxadd(ivec2_const a, ivec2_const b, ivec2 dest);

CGLM_EXPORT 
void 
glmc_ivec2_minadd(ivec2_const a, ivec2_const b, ivec2 dest);

CGLM_EXPORT 
void 
glmc_ivec2_subsub(ivec2_const a, ivec2_const b, ivec2 dest);

CGLM_EXPORT 
void 
glmc_ivec2_subsubs(ivec2_const a, int s, ivec2 dest);

CGLM_EXPORT 
void 
glmc_ivec2_addsub(ivec2_const a, ivec2_const b, ivec2 dest);

CGLM_EXPORT 
void 
glmc_ivec2_addsubs(ivec2_const a, int s, ivec2 dest);

CGLM_EXPORT 
void 
glmc_ivec2_mulsub(ivec2_const a, ivec2_const b, ivec2 dest);

CGLM_EXPORT 
void 
glmc_ivec2_mulsubs(ivec2_const a, int s, ivec2 dest);

CGLM_EXPORT 
void 
glmc_ivec2_maxsub(ivec2_const a, ivec2_const b, ivec2 dest);

CGLM_EXPORT 
void 
glmc_ivec2_minsub(ivec2_const a, ivec2_const b, ivec2 dest);

CGLM_EXPORT
int
glmc_ivec2_distance2(ivec2_const a, ivec2_const b);

CGLM_EXPORT
float
glmc_ivec2_distance(ivec2_const a, ivec2_const b);

CGLM_EXPORT
void
glmc_ivec2_fill(ivec2 v, int val);

CGLM_EXPORT
bool
glmc_ivec2_eq(ivec2_const v, int val);

CGLM_EXPORT
bool
glmc_ivec2_eqv(ivec2_const a, ivec2_const b);

CGLM_EXPORT
void
glmc_ivec2_maxv(ivec2_const a, ivec2_const b, ivec2 dest);

CGLM_EXPORT
void
glmc_ivec2_minv(ivec2_const a, ivec2_const b, ivec2 dest);

CGLM_EXPORT
void
glmc_ivec2_clamp(ivec2 v, int minVal, int maxVal);

CGLM_EXPORT
void
glmc_ivec2_abs(ivec2_const v, ivec2 dest);

#ifdef __cplusplus
}
#endif
#endif /* cglmc_ivec2_h */
