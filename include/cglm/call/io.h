/*
 * Copyright (c), Recep Aslantas.
 *
 * MIT License (MIT), http://opensource.org/licenses/MIT
 * Full license can be found in the LICENSE file
 */

#ifndef cglmc_io_h
#define cglmc_io_h

#ifdef __cplusplus
extern "C" {
#endif

#include "../common.h"
#include <stdio.h>

CGLM_EXPORT
void
glmc_mat4_print(mat4_const   matrix,
                FILE * __restrict ostream);

CGLM_EXPORT
void
glmc_mat3_print(mat3_const matrix,
                FILE * __restrict ostream);

CGLM_EXPORT
void
glmc_vec4_print(vec4_const vec,
                FILE * __restrict ostream);

CGLM_EXPORT
void
glmc_vec3_print(vec3_const vec,
                FILE * __restrict ostream);

CGLM_EXPORT
void
glmc_versor_print(versor_const vec,
                  FILE * __restrict ostream);

#ifdef __cplusplus
}
#endif
#endif /* cglmc_io_h */
