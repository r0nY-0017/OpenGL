#include <GL/glut.h>
#include <math.h>

void display() {
    glClear(GL_COLOR_BUFFER_BIT);

    // Rectangle
    glColor3f(0.0f, 106.0f/255.0f, 78.0f/255.0f); // Flag Green: #006a4e  -> (0,106,78)
    glBegin(GL_QUADS);
        glVertex2f(-2.5f, -1.5f);
        glVertex2f( 2.5f, -1.5f);
        glVertex2f( 2.5f,  1.5f);
        glVertex2f(-2.5f,  1.5f);
    glEnd();

    // Red Circle
    float radius = 0.2f * 5.0f; 
    float center_x = -0.05f * 5.0f;
    float center_y = 0.0f;
    int n = 200;

    glColor3f(244.0f/255.0f, 42.0f/255.0f, 65.0f/255.0f); // Red:   #f42a41  -> (244,42,65)
    glBegin(GL_TRIANGLE_FAN);
        glVertex2f(center_x, center_y);
        for (int i = 0; i <= n; i++) {
            float theta = 2.0f * (float)M_PI * (float)i / (float)n;
            float x = center_x + radius * cosf(theta);
            float y = center_y + radius * sinf(theta);
            glVertex2f(x, y);
        }
    glEnd();

    glFlush();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitWindowSize(800, 480);
    glutCreateWindow("Bangladesh National Flag");
    gluOrtho2D(-2.6, 2.6, -1.6, 1.6);
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}