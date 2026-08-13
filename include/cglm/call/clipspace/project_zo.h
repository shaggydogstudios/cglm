/*
 * Copyright (c), Recep Aslantas.
 *
 * MIT License (MIT), http://opensource.org/licenses/MIT
 * Full license can be found in the LICENSE file
 */

#ifndef cglmc_project_zo_h
#define cglmc_project_zo_h
#ifdef __cplusplus
extern "C" {
#endif

#include "../../common.h"

CGLM_EXPORT
void
glmc_unprojecti_zo(vec3_const pos, mat4_const invMat, vec4_const vp, vec3 dest);

CGLM_EXPORT
void
glmc_project_zo(vec3_const pos, mat4_const m, vec4_const vp, vec3 dest);

CGLM_EXPORT
float
glmc_project_z_zo(vec3_const pos, mat4_const m);

#ifdef __cplusplus
}
#endif
#endif /* cglmc_project_zo_h */
