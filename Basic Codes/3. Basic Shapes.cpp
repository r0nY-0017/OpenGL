/* --------Shapes---------*/
#include <GL/glut.h>

void drawTriangle(){
    glColor3f(1.0f, 0.0f, 0.0f); /* Red */
    glVertex2d(-0.7f, 0.3f);
    glVertex2d(-0.2f, 0.3f);
    glVertex2d(-0.7f, 0.3f);
    glVertex2d(-0.425f, 0.8f);
    glVertex2d(-0.425f, 0.8f);
    glVertex2d(-0.2f, 0.3f);
}

void drawRectangle(){
    glColor3f(0.0f, 1.0f, 0.0f); /* Green */
    glVertex2d(0.2f, 0.3f);
    glVertex2d(0.7f, 0.3f);
    glVertex2d(0.7f, 0.3f);
    glVertex2d(0.7f, 0.7f);
    glVertex2d(0.7f, 0.7f);
    glVertex2d(0.2f, 0.7f);
    glVertex2d(0.2f, 0.7f);
    glVertex2d(0.2f, 0.3f);

}

void drawPentagon(){
    glColor3f(0.0f, 0.0f, 1.0f); /* Blue */
    glVertex2d(-0.3f, -0.3f);
    glVertex2d(-0.7f, -0.3f);
    glVertex2d(-0.7f, -0.3f);
    glVertex2d(-0.7f, -0.7f);
    glVertex2d(-0.7f, -0.7f);
    glVertex2d(-0.3f, -0.7f);
    glVertex2d(-0.3f, -0.7f);
    glVertex2d(-0.1f, -0.5f);
    glVertex2d(-0.1f, -0.5f);
    glVertex2d(-0.3f, -0.3f);
}


void drawHexagon(){
    glColor3f(0.1f, 0.0f, 0.0f); /* Brown*/
    glVertex2d(0.3f, -0.3f);
    glVertex2d(0.6f, -0.3f);
    glVertex2d(0.6f, -0.3f);
    glVertex2d(0.8f, -0.5f);
    glVertex2d(0.8f, -0.5f);
    glVertex2d(0.6f, -0.7f);
    glVertex2d(0.6f, -0.7f);
    glVertex2d(0.3f, -0.7f);
    glVertex2d(0.3f, -0.7f);
    glVertex2d(0.1f, -0.5f);
    glVertex2d(0.1f, -0.5f);
    glVertex2d(0.3f, -0.3f);
}


void display() {
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);  // White background
    glClear(GL_COLOR_BUFFER_BIT);
    //glColor3f(1.0f, 0.0f, 0.0f); /* Red */

    glBegin(GL_LINES);
        drawTriangle();
        drawRectangle();
        drawPentagon();
        drawHexagon();
    glEnd();
    glFlush();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutCreateWindow("Basic Shapes");
    glutInitWindowSize(900, 900);
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}