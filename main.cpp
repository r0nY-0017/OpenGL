/* --------Simple Flower---------*/
#include <GL/glut.h>

void display() {
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);  // White background
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1.0f, 0.0f, 0.0f); /* Red */

    glBegin(GL_LINES);
        // X-axis line
        glVertex2f(-0.9f, 0.0f);
        glVertex2f(0.9f, 0.0f);

        // Y-axis line
        glVertex2f(0.0f, 0.9f);
        glVertex2f(0.0f, -0.9f);

    glEnd();
    glFlush();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutCreateWindow("Simple Flower");
    glutInitWindowSize(900, 900);
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}