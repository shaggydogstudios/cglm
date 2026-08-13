/*
 * Copyright (c), Recep Aslantas.
 *
 * MIT License (MIT), http://opensource.org/licenses/MIT
 * Full license can be found in the LICENSE file
 */

#ifndef cglmc_ivec4_h
#define cglmc_ivec4_h
#ifdef __cplusplus
extern "C" {
#endif

#include "../common.h"

CGLM_EXPORT
void
glmc_ivec4(ivec3_const v3, int last, ivec4 dest);

CGLM_EXPORT
void
glmc_ivec4_copy(ivec4_const a, ivec4 dest);

CGLM_EXPORT
void 
glmc_ivec4_zero(ivec4 v);

CGLM_EXPORT
void
glmc_ivec4_one(ivec4 v);

CGLM_EXPORT
void
glmc_ivec4_add(ivec4_const a, ivec4_const b, ivec4 dest);

CGLM_EXPORT
void
glmc_ivec4_adds(ivec4_const v, int s, ivec4 dest);

CGLM_EXPORT
void
glmc_ivec4_sub(ivec4_const a, ivec4_const b, ivec4 dest);

CGLM_EXPORT
void
glmc_ivec4_subs(ivec4_const v, int s, ivec4 dest);

CGLM_EXPORT
void
glmc_ivec4_mul(ivec4_const a, ivec4_const b, ivec4 dest);

CGLM_EXPORT
void
glmc_ivec4_scale(ivec4_const v, int s, ivec4 dest);

CGLM_EXPORT 
void 
glmc_ivec4_addadd(ivec4_const a, ivec4_const b, ivec4 dest);

CGLM_EXPORT 
void 
glmc_ivec4_addadds(ivec4_const a, int s, ivec4 dest);

CGLM_EXPORT 
void 
glmc_ivec4_subadd(ivec4_const a, ivec4_const b, ivec4 dest);

CGLM_EXPORT 
void 
glmc_ivec4_subadds(ivec4_const a, int s, ivec4 dest);

CGLM_EXPORT 
void 
glmc_ivec4_muladd(ivec4_const a, ivec4_const b, ivec4 dest);

CGLM_EXPORT 
void 
glmc_ivec4_muladds(ivec4_const a, int s, ivec4 dest);

CGLM_EXPORT 
void 
glmc_ivec4_maxadd(ivec4_const a, ivec4_const b, ivec4 dest);

CGLM_EXPORT 
void 
glmc_ivec4_minadd(ivec4_const a, ivec4_const b, ivec4 dest);

CGLM_EXPORT 
void 
glmc_ivec4_subsub(ivec4_const a, ivec4_const b, ivec4 dest);

CGLM_EXPORT 
void 
glmc_ivec4_subsubs(ivec4_const a, int s, ivec4 dest);

CGLM_EXPORT 
void 
glmc_ivec4_addsub(ivec4_const a, ivec4_const b, ivec4 dest);

CGLM_EXPORT 
void 
glmc_ivec4_addsubs(ivec4_const a, int s, ivec4 dest);

CGLM_EXPORT 
void 
glmc_ivec4_mulsub(ivec4_const a, ivec4_const b, ivec4 dest);

CGLM_EXPORT 
void 
glmc_ivec4_mulsubs(ivec4_const a, int s, ivec4 dest);

CGLM_EXPORT 
void 
glmc_ivec4_maxsub(ivec4_const a, ivec4_const b, ivec4 dest);

CGLM_EXPORT 
void 
glmc_ivec4_minsub(ivec4_const a, ivec4_const b, ivec4 dest);

CGLM_EXPORT
int
glmc_ivec4_distance2(ivec4_const a, ivec4_const b);

CGLM_EXPORT
float
glmc_ivec4_distance(ivec4_const a, ivec4_const b);

CGLM_EXPORT
void
glmc_ivec4_maxv(ivec4_const a, ivec4_const b, ivec4 dest);

CGLM_EXPORT
void
glmc_ivec4_minv(ivec4_const a, ivec4_const b, ivec4 dest);

CGLM_EXPORT
void
glmc_ivec4_clamp(ivec4 v, int minVal, int maxVal);

CGLM_EXPORT
void
glmc_ivec4_abs(ivec4_const v, ivec4 dest);

#ifdef __cplusplus
}
#endif
#endif /* cglmc_ivec4_h */
