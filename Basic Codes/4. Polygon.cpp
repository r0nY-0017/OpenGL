#include <GL/glut.h>

void display() {
    glClearColor (1.0,1.0,1.0,1.0); //White Background
    glClear (GL_COLOR_BUFFER_BIT);

    //Right
    glColor3f(0.35f, 0.25f, 0.25f);
    glBegin (GL_POLYGON);
        glVertex2f(0.35f, -0.1f);
        glVertex2f(0.45f, -0.45f);
        glVertex2f(0.55f, -0.1f);
        glVertex2f(0.9f, -0.00f);
        glVertex2f(0.55f, 0.1f);
        glVertex2f(0.45f, 0.45f);
        glVertex2f(0.35f, 0.1f);
        glVertex2f(0.0f, 0.00f);
    glEnd();

    //Left
    glColor3f(0.5f, 0.0f, 0.35f);
    glBegin (GL_POLYGON);
        glVertex2f(-0.35f, -0.1f);
        glVertex2f(-0.45f, -0.45f);
        glVertex2f(-0.55f, -0.1f);
        glVertex2f(-0.9f, -0.00f);
        glVertex2f(-0.55f, 0.1f);
        glVertex2f(-0.45f, 0.45f);
        glVertex2f(-0.35f, 0.1f);
        glVertex2f(0.0f, 0.00f);
    glEnd();


    //Up
    glColor3f(0.5f, 0.5f, 0.35f);
    glBegin (GL_POLYGON);
        glVertex2f(-0.1f, 0.35f);
        glVertex2f(-0.45f, 0.45f);
        glVertex2f(-0.1f, 0.55f);
        glVertex2f(0.00f, 0.9f);
        glVertex2f(0.1f, 0.55f);
        glVertex2f(0.45f, 0.45f);
        glVertex2f(0.1f, 0.35f);
        glVertex2f(0.0f, 0.00f);
    glEnd();

    //Down
    glColor3f(0.75f, 0.6f, 0.5f);
    glBegin (GL_POLYGON);
        glVertex2f(-0.1f, -0.35f);
        glVertex2f(-0.45f, -0.45f);
        glVertex2f(-0.1f, -0.55f);
        glVertex2f(0.00f, -0.9f);
        glVertex2f(0.1f, -0.55f);
        glVertex2f(0.45f, -0.45f);
        glVertex2f(0.1f, -0.35f);
        glVertex2f(0.0f, 0.00f);
    glEnd();

    glFlush();
}
int main(int argc, char** argv) {
    glutInit (&argc, argv);
    glutInitWindowSize(500,500);
    glutCreateWindow("Simple Design With Polygon");
    glutDisplayFunc (display);
    glutMainLoop();
return 0;
}