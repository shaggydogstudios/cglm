/*
 * Copyright (c), Recep Aslantas.
 *
 * MIT License (MIT), http://opensource.org/licenses/MIT
 * Full license can be found in the LICENSE file
 */

#ifndef cglmc_box_h
#define cglmc_box_h
#ifdef __cplusplus
extern "C" {
#endif

#include "../common.h"

CGLM_EXPORT
void
glmc_aabb_transform(vec3_const box[2], mat4_const m, vec3 dest[2]);

CGLM_EXPORT
void
glmc_aabb_merge(vec3_const box1[2], vec3_const box2[2], vec3 dest[2]);

CGLM_EXPORT
void
glmc_aabb_crop(vec3_const box[2], vec3_const cropBox[2], vec3 dest[2]);

CGLM_EXPORT
void
glmc_aabb_crop_until(vec3_const box[2],
                     vec3_const cropBox[2],
                     vec3_const clampBox[2],
                     vec3 dest[2]);

CGLM_EXPORT
bool
glmc_aabb_frustum(vec3_const box[2], vec4_const planes[6]);

CGLM_EXPORT
void
glmc_aabb_invalidate(vec3 box[2]);

CGLM_EXPORT
bool
glmc_aabb_isvalid(vec3_const box[2]);

CGLM_EXPORT
float
glmc_aabb_size(vec3_const box[2]);

CGLM_EXPORT
float
glmc_aabb_radius(vec3_const box[2]);

CGLM_EXPORT
void
glmc_aabb_center(vec3_const box[2], vec3 dest);

CGLM_EXPORT
bool
glmc_aabb_aabb(vec3_const box[2], vec3_const other[2]);

CGLM_EXPORT
bool
glmc_aabb_point(vec3_const box[2], vec3_const point);

CGLM_EXPORT
bool
glmc_aabb_contains(vec3_const box[2], vec3_const other[2]);

CGLM_EXPORT
bool
glmc_aabb_sphere(vec3_const box[2], vec4_const s);

#ifdef __cplusplus
}
#endif
#endif /* cglmc_box_h */
