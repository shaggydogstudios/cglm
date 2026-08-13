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
glmc_unprojecti(vec3_const pos, mat4_const invMat, vec4_const vp, vec3 dest) {
  glm_unprojecti(pos, invMat, vp, dest);
}

CGLM_EXPORT
void
glmc_unproject(vec3_const pos, mat4_const m, vec4_const vp, vec3 dest) {
  glm_unproject(pos, m, vp, dest);
}

CGLM_EXPORT
void
glmc_project(vec3_const pos, mat4_const m, vec4_const vp, vec3 dest) {
  glm_project(pos, m, vp, dest);
}

CGLM_EXPORT
float
glmc_project_z(vec3_const pos, mat4_const m) {
  return glm_project_z(pos, m);
}

CGLM_EXPORT
void
glmc_pickmatrix(vec2_const center, vec2_const size, vec4_const vp, mat4 dest) {
  glm_pickmatrix(center, size, vp, dest);
}
