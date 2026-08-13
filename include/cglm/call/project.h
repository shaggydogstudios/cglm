/*
 * Copyright (c), Recep Aslantas.
 *
 * MIT License (MIT), http://opensource.org/licenses/MIT
 * Full license can be found in the LICENSE file
 */

#ifndef cglmc_project_h
#define cglmc_project_h
#ifdef __cplusplus
extern "C" {
#endif

#include "../common.h"

CGLM_EXPORT
void
glmc_unprojecti(vec3_const pos, mat4_const invMat, vec4_const vp, vec3 dest);

CGLM_EXPORT
void
glmc_unproject(vec3_const pos, mat4_const m, vec4_const vp, vec3 dest);

CGLM_EXPORT
void
glmc_project(vec3_const pos, mat4_const m, vec4_const vp, vec3 dest);

CGLM_EXPORT
float
glmc_project_z(vec3_const pos, mat4_const m);

CGLM_EXPORT
void
glmc_pickmatrix(vec2_const center, vec2_const size, vec4_const vp, mat4 dest);

#ifdef __cplusplus
}
#endif
#endif /* cglmc_project_h */
