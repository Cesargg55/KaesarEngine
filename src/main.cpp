#include <GLFW/glfw3.h>
#include "KaesarEngine.h"

int main()
{
    if (!glfwInit()) return -1;

    GLFWwindow* window = glfwCreateWindow(800, 600, "KaesarEngine", nullptr, nullptr);
    if (!window) return -1;

    glfwMakeContextCurrent(window);

    while (!glfwWindowShouldClose(window))
    {
        glClear(GL_COLOR_BUFFER_BIT);
        glfwSwapBuffers(window);
        glfwPollEvents();

    }

    glfwTerminate();
    return 0;
}
