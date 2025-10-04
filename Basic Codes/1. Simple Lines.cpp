/* --------Simple Line Draw---------*/
#include <GL/glut.h>

void display() {
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);  // White background
    glClear(GL_COLOR_BUFFER_BIT);

    glBegin(GL_LINES);
        // X-axis line
        glColor3f(1.0f, 0.0f, 0.0f); /* Red */
        glVertex2f(-0.9f, 0.0f);
        glVertex2f( 0.9f, 0.0f);

        // Y-axis line
        glColor3f(0.0f, 0.0f, 1.0f); /*Blue*/
        glVertex2f(0.0f, -0.9f);
        glVertex2f(0.0f,  0.9f);
    glEnd();

    glFlush();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutCreateWindow("Simple Lines");
    glutInitWindowSize(600, 600);
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}