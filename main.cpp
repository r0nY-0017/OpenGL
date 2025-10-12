#include <GL/freeglut.h>
#include <cmath>

void drawSky() {
    glBegin(GL_QUADS);
        glColor3f(212.0f/255.0f, 238.0f/255.0f, 255.0f/255.0f);
        glVertex2f(-1.0f, 1.0f);
        glVertex2f(1.0f, 1.0f);
        glColor3f(237.0f/255.0f, 194.0f/255.0f, 100.0f/255.0f);
        glVertex2f(1.0f, 0.0f);
        glVertex2f(-1.0f, 0.0f);
    glEnd();
}

void drawSun() {
    glColor3f(1.0f, 0.8f, 0.2f);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(0.85f, 0.2f);  // Center of sun
    for(int i = 0; i <= 360; i++) {
        float angle = i * 3.14159f / 180.0f;
        glVertex2f(0.85f + 0.1f * cos(angle), 0.2f + 0.1f * sin(angle));
    }
    glEnd();
}


    
void drawGrass() {
    glBegin(GL_QUADS);
        glColor3f(36.0f/255.0f, 117.0f/255.0f, 40.0f/255.0f);
        glVertex2f(-1.0f, -1.0f);
        glVertex2f(1.0f, -1.0f);
        glVertex2f(1.0f, 0.0f);
        glVertex2f(-1.0f, 0.0f);
    glEnd();
}

void drawRiver(){
    glColor3f(200.0f/255.0f, 230.0f/255.0f, 255.0f/255.0f);
    glBegin(GL_TRIANGLES);
        glVertex2f(-0.4f, -1.0f);
        glVertex2f(0.0f, -1.0f);
        glVertex2f(0.0f, -0.6f);
    glEnd();

    glBegin(GL_QUADS);
        glVertex2f(0.0f, -1.0f);
        glVertex2f(0.45f, -1.0f);
        glVertex2f(0.45f, -0.3f);
        glVertex2f(0.0f, -0.7f);
    glEnd();

    glBegin(GL_POLYGON);
        glVertex2f(0.9f,  0.0f);
        glVertex2f(1.0f, 0.0f);
        glVertex2f(1.0f, -1.0f);
        glVertex2f(0.45f, -1.0f);
        glVertex2f(0.45f, -0.4f);
    glEnd();
}


void drawMountain(){
    glColor3f(17.0f/255.0f, 100.0f/255.0f, 17.0f/255.0f);
    glBegin(GL_TRIANGLES);
        glVertex2f(-1.0f, 0.0f);
        glVertex2f(-0.7f, 0.0f);
        glVertex2f(-0.85f, 0.15f);
    glEnd();

    glBegin(GL_TRIANGLES);
        glVertex2f(-0.2f, 0.0f);
        glVertex2f(0.2f, 0.0f);
        glVertex2f(0.0f, 0.2f);
    glEnd();

    glBegin(GL_TRIANGLES);
        glVertex2f(0.1f, 0.0f);
        glVertex2f(0.4f, 0.0f);
        glVertex2f(0.25f, 0.15f);
    glEnd();

    glBegin(GL_TRIANGLES);
        glVertex2f(0.25f, 0.0f);
        glVertex2f(0.7f, 0.0f);
        glVertex2f(0.5f, 0.25f);
    glEnd();

    glBegin(GL_TRIANGLES);
        glVertex2f(0.6f, 0.0f);
        glVertex2f(0.9f, 0.0f);
        glVertex2f(0.8f, 0.15f);
    glEnd();

    // glBegin(GL_TRIANGLES);
    //     glVertex2f(0.8f, 0.0f);
    //     glVertex2f(1.0f, 0.0f);
    //     glVertex2f(0.9f, 0.1f);
    // glEnd();
}



void drawHouse() {
    //Light Wall
    glBegin(GL_QUADS);
        glColor3f(210.0f/255.0f, 217.0f/255.0f, 191.0f/255.0f);
        glVertex2f(-0.5f, -0.25f);
        glVertex2f(-0.1f, -0.15f);
        glVertex2f(-0.1f, 0.10f);
        glVertex2f(-0.5f, 0.10f);
    glEnd();

    //Door
    glBegin(GL_QUADS);
        glColor3f(85.0f/255.0f, 65.0f/255.0f, 55.0f/255.0f);
        glVertex2f(-0.34f, -0.215f);
        glVertex2f(-0.25f, -0.195f);
        glVertex2f(-0.25f, 0.0f);
        glVertex2f(-0.34f, 0.0f);
    glEnd();


    //Roof
    glBegin(GL_QUADS);
        glColor3f(140.0f/255.0f, 115.0f/255.0f, 85.0f/255.0f);
        glVertex2f(-0.5f, 0.10f);
        glVertex2f(-0.05f, 0.10f);
        glVertex2f(-0.2f, 0.35f);
        glVertex2f(-0.6f, 0.35f);
        glEnd();
        
        glBegin(GL_TRIANGLES);
        glColor3f(135.0f/255.0f, 110.0f/255.0f, 80.0f/255.0f);
        glVertex2f(-0.8f, 0.10f);
        glVertex2f(-0.5f, 0.10f);
        glVertex2f(-0.6f, 0.35f);
    glEnd();

    //Dark Wall
    glBegin(GL_QUADS);
        glColor3f(200.0f/255.0f, 207.0f/255.0f, 181.0f/255.0f);
        glVertex2f(-0.75f, -0.15f);
        glVertex2f(-0.5f, -0.25f);
        glVertex2f(-0.5f, 0.10f);
        glVertex2f(-0.75f, 0.10f);
    glEnd();

    //Window
    glBegin(GL_QUADS);
        glColor3f(85.0f/255.0f, 65.0f/255.0f, 55.0f/255.0f);
        glVertex2f(-0.66f, -0.1f);
        glVertex2f(-0.59f, -0.11f);
        glVertex2f(-0.59f, -0.0f);
        glVertex2f(-0.66f, -0.0f);
    glEnd();

    //Border
    glBegin(GL_QUADS);
        glColor3f(85.0f/255.0f, 65.0f/255.0f, 55.0f/255.0f);
        glVertex2f(-0.77f, -0.17f);
        glVertex2f(-0.5f, -0.28f);
        glVertex2f(-0.5f, -0.25f);
        glVertex2f(-0.77f, -0.14f);
    glEnd();

    glBegin(GL_QUADS);
        glColor3f(85.0f/255.0f, 65.0f/255.0f, 55.0f/255.0f);
        glVertex2f(-0.5f, -0.28f);
        glVertex2f(-0.08f, -0.17f);
        glVertex2f(-0.08f, -0.14f);
        glVertex2f(-0.5f, -0.25f);
    glEnd();
}


void drawCircle(float cx, float cy, float r) {
    glBegin(GL_TRIANGLE_FAN);
        glVertex2f(cx, cy);
        for (int i = 0; i <= 360; i++) {
            float angle = i * 3.1416f / 180;
            float x = cx + r * cos(angle);
            float y = cy + r * sin(angle);
            glVertex2f(x, y);
        }
    glEnd();
}

void drawTree(float x, float y, float size, float r, float g, float b) {
    glColor3f(0.4f, 0.25f, 0.1f);
    glBegin(GL_QUADS);
        glVertex2f(x - 0.05f * size, y - 0.2f * size);
        glVertex2f(x + 0.05f * size, y - 0.2f * size);
        glVertex2f(x + 0.05f * size, y + 0.25f * size);
        glVertex2f(x - 0.05f * size, y + 0.25f * size);
    glEnd();

    glColor3f(r/255.0f, g/255.0f, b/255.0f);
    float topY = y + 0.3f * size;

    drawCircle(x, topY, 0.18f * size);
    drawCircle(x - 0.15f * size, topY, 0.15f * size);
    drawCircle(x + 0.15f * size, topY, 0.15f * size);
    drawCircle(x - 0.1f * size, topY + 0.12f * size, 0.12f * size);
    drawCircle(x + 0.1f * size, topY + 0.12f * size, 0.12f * size);
    drawCircle(x, topY + 0.15f * size, 0.13f * size);
}


void display() {
    glClear(GL_COLOR_BUFFER_BIT);
        drawSky();
        drawSun();
        drawGrass();
        drawRiver();
        drawMountain();
        drawTree(-0.1, 0.1, 1.0, 28.0, 92.0, 32.0);
        drawTree(-0.75, 0.1, 0.8, 50.0, 125.0, 50.0);
        drawTree(-0.95, 0.0, 0.9, 50.0, 90.0, 50.0);
        drawHouse();
    glFlush();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitWindowSize(1000, 700);
    glutInitWindowPosition(100, 50);
    glutCreateWindow("House on Grass");
    
    glClearColor(0.53f, 0.81f, 0.98f, 1.0f);
    glutDisplayFunc(display);
    glutMainLoop();
    
    return 0;
}