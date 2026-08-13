/*
 * Copyright (c), Recep Aslantas.
 *
 * MIT License (MIT), http://opensource.org/licenses/MIT
 * Full license can be found in the LICENSE file
 */

#define CGLM_LIB_SRC

#include "../include/cglm/cglm.h"
#include "../include/cglm/call.h"

CGLM_EXPORT
void
glmc_mat4_print(mat4_const matrix,
                FILE * __restrict ostream) {
  glm_mat4_print(matrix, ostream);
}

CGLM_EXPORT
void
glmc_mat3_print(mat3_const matrix,
                FILE * __restrict ostream) {
  glm_mat3_print(matrix, ostream);
}

CGLM_EXPORT
void
glmc_vec4_print(vec4_const vec,
                FILE * __restrict ostream) {
  glm_vec4_print(vec, ostream);
}

CGLM_EXPORT
void
glmc_vec3_print(vec3_const vec,
                FILE * __restrict ostream) {
  glm_vec3_print(vec, ostream);
}

CGLM_EXPORT
void
glmc_versor_print(versor_const vec,
                  FILE * __restrict ostream) {
  glm_versor_print(vec, ostream);
}
