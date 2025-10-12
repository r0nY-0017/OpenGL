#include <GL/glut.h>

void display() {
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_QUADS);

    for (int row = 0; row < 8; row++) {
        for (int col = 0; col < 8; col++) {
            if ((row + col) % 2 == 0)
                glColor3f(1.0f, 1.0f, 1.0f); // White
            else
                glColor3f(0.0f, 0.0f, 0.0f); // Black

            float x = -8 + col * 2;
            float y = -8 + row * 2;

            glVertex2f(x, y);
            glVertex2f(x + 2, y);
            glVertex2f(x + 2, y + 2);
            glVertex2f(x, y + 2);
        }
    }

    glEnd();
    glFlush();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitWindowSize(600, 600);
    glutCreateWindow("8x8 Checkerboard - OpenGL");
    gluOrtho2D(-8, 8, -8, 8); // এখন coordinate range বড় (16x16)
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}