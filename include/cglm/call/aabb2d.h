/*
 * Copyright (c), Recep Aslantas.
 *
 * MIT License (MIT), http://opensource.org/licenses/MIT
 * Full license can be found in the LICENSE file
 */

#ifndef cglmc_aabb2d_h
#define cglmc_aabb2d_h
#ifdef __cplusplus
extern "C" {
#endif

#include "../common.h"

/* DEPRECATED! use _diag */
#define glmc_aabb2d_size(aabb) glmc_aabb2d_diag(aabb)

CGLM_EXPORT
void
glmc_aabb2d_zero(vec2 aabb[2]);

CGLM_EXPORT
void
glmc_aabb2d_copy(vec2_const aabb[2], vec2 dest[2]);

CGLM_EXPORT
void
glmc_aabb2d_transform(vec2_const aabb[2], mat3_const m, vec2 dest[2]);

CGLM_EXPORT
void
glmc_aabb2d_merge(vec2_const aabb1[2], vec2_const aabb2[2], vec2 dest[2]);

CGLM_EXPORT
void
glmc_aabb2d_crop(vec2_const aabb[2], vec2_const cropAabb[2], vec2 dest[2]);

CGLM_EXPORT
void
glmc_aabb2d_crop_until(vec2_const aabb[2],
                     vec2_const cropAabb[2],
                     vec2_const clampAabb[2],
                     vec2 dest[2]);

CGLM_EXPORT
void
glmc_aabb2d_invalidate(vec2 aabb[2]);

CGLM_EXPORT
bool
glmc_aabb2d_isvalid(vec2_const aabb[2]);

CGLM_EXPORT
float
glmc_aabb2d_diag(vec2_const aabb[2]);

CGLM_EXPORT
void
glmc_aabb2d_sizev(vec2_const aabb[2], vec2 dest);

CGLM_EXPORT
float
glmc_aabb2d_radius(vec2_const aabb[2]);

CGLM_EXPORT
void
glmc_aabb2d_center(vec2_const aabb[2], vec2 dest);

CGLM_EXPORT
bool
glmc_aabb2d_aabb(vec2_const aabb[2], vec2_const other[2]);

CGLM_EXPORT
bool
glmc_aabb2d_point(vec2_const aabb[2], vec2_const point);

CGLM_EXPORT
bool
glmc_aabb2d_contains(vec2_const aabb[2], vec2_const other[2]);

CGLM_EXPORT
bool
glmc_aabb2d_circle(vec2_const aabb[2], vec3_const s);

#ifdef __cplusplus
}
#endif
#endif /* cglmc_aabb2d_h */
