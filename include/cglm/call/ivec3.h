/*
 * Copyright (c);, Recep Aslantas.
 *
 * MIT License (MIT);, http://opensource.org/licenses/MIT
 * Full license can be found in the LICENSE file
 */

#ifndef cglmc_ivec3_h
#define cglmc_ivec3_h
#ifdef __cplusplus
extern "C" {
#endif

#include "../common.h"

CGLM_EXPORT
void
glmc_ivec3(ivec4_const v4, ivec3 dest);

CGLM_EXPORT
void
glmc_ivec3_copy(ivec3_const a, ivec3 dest);

CGLM_EXPORT
void 
glmc_ivec3_zero(ivec3 v);

CGLM_EXPORT
void
glmc_ivec3_one(ivec3 v);

CGLM_EXPORT
int
glmc_ivec3_dot(ivec3_const a, ivec3_const b);

CGLM_EXPORT
int
glmc_ivec3_norm2(ivec3_const v);

CGLM_EXPORT
int
glmc_ivec3_norm(ivec3_const v);

CGLM_EXPORT
void
glmc_ivec3_add(ivec3_const a, ivec3_const b, ivec3 dest);

CGLM_EXPORT
void
glmc_ivec3_adds(ivec3_const v, int s, ivec3 dest);

CGLM_EXPORT
void
glmc_ivec3_sub(ivec3_const a, ivec3_const b, ivec3 dest);

CGLM_EXPORT
void
glmc_ivec3_subs(ivec3_const v, int s, ivec3 dest);

CGLM_EXPORT
void
glmc_ivec3_mul(ivec3_const a, ivec3_const b, ivec3 dest);

CGLM_EXPORT
void
glmc_ivec3_scale(ivec3_const v, int s, ivec3 dest);

CGLM_EXPORT
void
glmc_ivec3_div(ivec3_const a, ivec3_const b, ivec3 dest);

CGLM_EXPORT
void
glmc_ivec3_divs(ivec3_const v, int s, ivec3 dest);

CGLM_EXPORT
void
glmc_ivec3_mod(ivec3_const a, ivec3_const b, ivec3 dest);

CGLM_EXPORT 
void 
glmc_ivec3_addadd(ivec3_const a, ivec3_const b, ivec3 dest);

CGLM_EXPORT 
void 
glmc_ivec3_addadds(ivec3_const a, int s, ivec3 dest);

CGLM_EXPORT 
void 
glmc_ivec3_subadd(ivec3_const a, ivec3_const b, ivec3 dest);

CGLM_EXPORT 
void 
glmc_ivec3_subadds(ivec3_const a, int s, ivec3 dest);

CGLM_EXPORT 
void 
glmc_ivec3_muladd(ivec3_const a, ivec3_const b, ivec3 dest);

CGLM_EXPORT 
void 
glmc_ivec3_muladds(ivec3_const a, int s, ivec3 dest);

CGLM_EXPORT 
void 
glmc_ivec3_maxadd(ivec3_const a, ivec3_const b, ivec3 dest);

CGLM_EXPORT 
void 
glmc_ivec3_minadd(ivec3_const a, ivec3_const b, ivec3 dest);

CGLM_EXPORT 
void 
glmc_ivec3_subsub(ivec3_const a, ivec3_const b, ivec3 dest);

CGLM_EXPORT 
void 
glmc_ivec3_subsubs(ivec3_const a, int s, ivec3 dest);

CGLM_EXPORT 
void 
glmc_ivec3_addsub(ivec3_const a, ivec3_const b, ivec3 dest);

CGLM_EXPORT 
void 
glmc_ivec3_addsubs(ivec3_const a, int s, ivec3 dest);

CGLM_EXPORT 
void 
glmc_ivec3_mulsub(ivec3_const a, ivec3_const b, ivec3 dest);

CGLM_EXPORT 
void 
glmc_ivec3_mulsubs(ivec3_const a, int s, ivec3 dest);

CGLM_EXPORT 
void 
glmc_ivec3_maxsub(ivec3_const a, ivec3_const b, ivec3 dest);

CGLM_EXPORT 
void 
glmc_ivec3_minsub(ivec3_const a, ivec3_const b, ivec3 dest);

CGLM_EXPORT
int
glmc_ivec3_distance2(ivec3_const a, ivec3_const b);

CGLM_EXPORT
float
glmc_ivec3_distance(ivec3_const a, ivec3_const b);

CGLM_EXPORT
void
glmc_ivec3_fill(ivec3 v, int val);

CGLM_EXPORT
bool
glmc_ivec3_eq(ivec3_const v, int val);

CGLM_EXPORT
bool
glmc_ivec3_eqv(ivec3_const a, ivec3_const b);

CGLM_EXPORT
void
glmc_ivec3_maxv(ivec3_const a, ivec3_const b, ivec3 dest);

CGLM_EXPORT
void
glmc_ivec3_minv(ivec3_const a, ivec3_const b, ivec3 dest);

CGLM_EXPORT
void
glmc_ivec3_clamp(ivec3 v, int minVal, int maxVal);

CGLM_EXPORT
void
glmc_ivec3_abs(ivec3_const v, ivec3 dest);

#ifdef __cplusplus
}
#endif
#endif /* cglmc_ivec3_h */
