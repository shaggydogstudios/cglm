/*
 * Copyright (c), Recep Aslantas.
 *
 * MIT License (MIT), http://opensource.org/licenses/MIT
 * Full license can be found in the LICENSE file
 */

#include "../../include/cglm/clipspace/project_no.h"
#include "../../include/cglm/call/clipspace/project_no.h"

CGLM_EXPORT
void
glmc_unprojecti_no(vec3_const pos, mat4_const invMat, vec4_const vp, vec3 dest) {
  glm_unprojecti_no(pos, invMat, vp, dest);
}

CGLM_EXPORT
void
glmc_project_no(vec3_const pos, mat4_const m, vec4_const vp, vec3 dest) {
  glm_project_no(pos, m, vp, dest);
}

CGLM_EXPORT
float
glmc_project_z_no(vec3_const pos, mat4_const m) {
  return glm_project_z_no(pos, m);
}
