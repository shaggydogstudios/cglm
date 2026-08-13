#include "../include/cglm/cglm.h"
#include "../include/cglm/call.h"

CGLM_EXPORT
bool
glmc_ray_triangle(vec3_const   origin,
                  vec3_const   direction,
                  vec3_const   v0,
                  vec3_const   v1,
                  vec3_const   v2,
                  float *d) {
  return glm_ray_triangle(origin, direction, v0, v1, v2, d);
}

CGLM_EXPORT
bool
glmc_ray_sphere(vec3_const origin,
                vec3 dir,
                vec4_const s,
                float * __restrict t1,
                float * __restrict t2) {
  return glm_ray_sphere(origin, dir, s, t1, t2);
}

CGLM_EXPORT
void
glmc_ray_at(vec3_const orig, vec3_const dir, float t, vec3 point) {
  glm_ray_at(orig, dir, t, point);
}
