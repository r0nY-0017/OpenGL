/* --------Simple Flower---------*/
#include <GL/glut.h>

void display() {
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);  // White background
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1.0f, 0.0f, 0.0f); /* Red */

    glBegin(GL_LINES);
        // Y-axis line
        glVertex2f(0.0f, 0.0f);
        glVertex2f(0.0f, -0.9f);

        //
        glVertex2f(-0.35f, 0.0f);
        glVertex2f(-0.6f, 0.4f);
        glVertex2f(-0.6f, 0.4f);
        glVertex2f(0.0f, 0.0f);

        glVertex2f(0.35f, 0.0f);
        glVertex2f(0.6f, 0.4f);
        glVertex2f(0.6f, 0.4f);
        glVertex2f(0.0f, 0.0f);
        
        glVertex2f(-0.35f, 0.0f);
        glVertex2f(0.0f, -0.3f);
        glVertex2f(0.35f, 0.0f);
        glVertex2f(0.0f, -0.3f);

    
        //
        glVertex2f(-0.3f, 0.2f);
        glVertex2f(-0.3f, 0.6f);
        glVertex2f(-0.3f, 0.6f);
        glVertex2f(0.0f, 0.0f);

        glVertex2f(0.3f, 0.2f);
        glVertex2f(0.3f, 0.6f);
        glVertex2f(0.3f, 0.6f);
        glVertex2f(0.0f, 0.0f);


        //Middle
        glVertex2f(-0.15f, 0.3f);
        glVertex2f(0.0f, 0.7f);
        glVertex2f(0.0f, 0.7f);
        glVertex2f(0.15f, 0.3f);

        
        //
        glVertex2f(-0.35f, 0.0f);
        glVertex2f(-0.8f, 0.2f);
        glVertex2f(-0.8f, 0.2f);
        glVertex2f(-0.4f, -0.2f);

        glVertex2f(0.35f, 0.0f);
        glVertex2f(0.8f, 0.2f);
        glVertex2f(0.8f, 0.2f);
        glVertex2f(0.4f, -0.2f);

        glVertex2f(-0.4f, -0.2f);
        glVertex2f(0.0f, -0.3f);
        glVertex2f(0.4f, -0.2f);
        glVertex2f(0.0f, -0.3f);

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