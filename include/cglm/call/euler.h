/*
 * Copyright (c), Recep Aslantas.
 *
 * MIT License (MIT), http://opensource.org/licenses/MIT
 * Full license can be found in the LICENSE file
 */

#ifndef cglmc_euler_h
#define cglmc_euler_h
#ifdef __cplusplus
extern "C" {
#endif

#include "../common.h"

CGLM_EXPORT
void
glmc_euler_angles(mat4_const m, vec3 dest);

CGLM_EXPORT
void
glmc_euler(vec3_const angles, mat4 dest);

CGLM_EXPORT
void
glmc_euler_xyz(vec3_const angles,  mat4 dest);

CGLM_EXPORT
void
glmc_euler_zyx(vec3_const angles,  mat4 dest);

CGLM_EXPORT
void
glmc_euler_zxy(vec3_const angles, mat4 dest);

CGLM_EXPORT
void
glmc_euler_xzy(vec3_const angles, mat4 dest);

CGLM_EXPORT
void
glmc_euler_yzx(vec3_const angles, mat4 dest);

CGLM_EXPORT
void
glmc_euler_yxz(vec3_const angles, mat4 dest);

CGLM_EXPORT
void
glmc_euler_by_order(vec3_const angles, glm_euler_seq axis, mat4 dest);

CGLM_EXPORT
void
glmc_euler_xyz_quat(vec3_const angles, versor dest);

CGLM_EXPORT
void
glmc_euler_xzy_quat(vec3_const angles, versor dest);

CGLM_EXPORT
void
glmc_euler_yxz_quat(vec3_const angles, versor dest);

CGLM_EXPORT
void
glmc_euler_yzx_quat(vec3_const angles, versor dest);

CGLM_EXPORT
void
glmc_euler_zxy_quat(vec3_const angles, versor dest);

CGLM_EXPORT
void
glmc_euler_zyx_quat(vec3_const angles, versor dest);


#ifdef __cplusplus
}
#endif
#endif /* cglmc_euler_h */
