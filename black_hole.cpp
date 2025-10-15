#include <GL/glew.h>
#define _USE_MATH_DEFINES
#include <cmath>
#ifndef M_PI
#endif
using namespace glm;
using clock = std::chrono::high_resolution_clock;

struct Engine {
    Engine engine;
}

struct BlackHole {
    vec3 position;
    double mass;
    double r_s;

    BlackHole(vec3 pos, float m) : position(pos), mass(m) {r_s = 2.0 * G * mass / pow(c, 2.0);}
}

int main() {
    while(!glfwWindowShouldClose(engine.window)) {
        engine.run();

        glfSwapBuffers(engine.window);
        glfwPollEvents();
    }

    return 0;
}