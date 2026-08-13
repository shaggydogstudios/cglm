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
glmc_aabb_transform(vec3_const box[2], mat4_const m, vec3 dest[2]) {
  glm_aabb_transform(box, m, dest);
}

CGLM_EXPORT
void
glmc_aabb_merge(vec3_const box1[2], vec3_const box2[2], vec3 dest[2]) {
  glm_aabb_merge(box1, box2, dest);
}

CGLM_EXPORT
void
glmc_aabb_crop(vec3_const box[2], vec3_const cropBox[2], vec3 dest[2]) {
  glm_aabb_crop(box, cropBox, dest);
}

CGLM_EXPORT
void
glmc_aabb_crop_until(vec3_const box[2],
                     vec3_const cropBox[2],
                     vec3_const clampBox[2],
                     vec3 dest[2]) {
  glm_aabb_crop_until(box, cropBox, clampBox, dest);
}

CGLM_EXPORT
bool
glmc_aabb_frustum(vec3_const box[2], vec4_const planes[6]) {
  return glm_aabb_frustum(box, planes);
}

CGLM_EXPORT
void
glmc_aabb_invalidate(vec3 box[2]) {
  glm_aabb_invalidate(box);
}

CGLM_EXPORT
bool
glmc_aabb_isvalid(vec3_const box[2]) {
  return glm_aabb_isvalid(box);
}

CGLM_EXPORT
float
glmc_aabb_size(vec3_const box[2]) {
  return glm_aabb_size(box);
}

CGLM_EXPORT
float
glmc_aabb_radius(vec3_const box[2]) {
  return glm_aabb_radius(box);
}

CGLM_EXPORT
void
glmc_aabb_center(vec3_const box[2], vec3 dest) {
  glm_aabb_center(box, dest);
}

CGLM_EXPORT
bool
glmc_aabb_aabb(vec3_const box[2], vec3_const other[2]) {
  return glm_aabb_aabb(box, other);
}

CGLM_EXPORT
bool
glmc_aabb_point(vec3_const box[2], vec3_const point) {
  return glm_aabb_point(box, point);
}

CGLM_EXPORT
bool
glmc_aabb_contains(vec3_const box[2], vec3_const other[2]) {
  return glm_aabb_contains(box, other);
}

CGLM_EXPORT
bool
glmc_aabb_sphere(vec3_const box[2], vec4_const s) {
  return glm_aabb_sphere(box, s);
}
