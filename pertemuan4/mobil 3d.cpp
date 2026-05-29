#include <GL/glut.h>
#include <cmath>

float angleX = 15.0f;
float angleY = -30.0f;

// Cylinder helper
void drawCylinder(float radius, float height, int segments) {
    GLUquadricObj* quad = gluNewQuadric();
    gluCylinder(quad, radius, radius, height, segments, 1);

    gluDisk(quad, 0, radius, segments, 1);

    glPushMatrix();
    glTranslatef(0, 0, height);
    gluDisk(quad, 0, radius, segments, 1);
    glPopMatrix();

    gluDeleteQuadric(quad);
}

// Wheel
void drawWheel() {
    glPushMatrix();

    glColor3f(0.15f, 0.15f, 0.15f);
    drawCylinder(0.35f, 0.2f, 32);

    glColor3f(1.0f, 1.0f, 1.0f);
    glPushMatrix();
    glTranslatef(0.0f, 0.0f, 0.201f);
    GLUquadricObj* quad = gluNewQuadric();
    gluDisk(quad, 0, 0.15f, 32, 1);
    gluDeleteQuadric(quad);
    glPopMatrix();

    glPopMatrix();
}

void display() {
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glLoadIdentity();

    glTranslatef(0.0f, -0.2f, -5.0f);
    glRotatef(angleX, 1.0f, 0.0f, 0.0f);
    glRotatef(angleY, 0.0f, 1.0f, 0.0f);

    glColor3f(0.3f, 0.3f, 0.3f);
    glBegin(GL_QUADS);
        glVertex3f(-3.0f, -0.5f, -3.0f);
        glVertex3f( 3.0f, -0.5f, -3.0f);
        glVertex3f( 3.0f, -0.5f,  3.0f);
        glVertex3f(-3.0f, -0.5f,  3.0f);
    glEnd();

    // Body bawah
    glColor3f(0.8f, 0.0f, 0.0f);
    glPushMatrix();
    glScalef(2.0f, 0.5f, 1.0f);
    glutSolidCube(1.0f);
    glPopMatrix();

    // Kabin trapesium
    glColor3f(0.8f, 0.0f, 0.0f);
    glPushMatrix();
    glTranslatef(-0.1f, 0.45f, 0.0f);

    glBegin(GL_QUADS);

    glVertex3f(-0.6f, -0.2f,  0.5f);
    glVertex3f( 0.6f, -0.2f,  0.5f);
    glVertex3f( 0.6f, -0.2f, -0.5f);
    glVertex3f(-0.6f, -0.2f, -0.5f);

    glVertex3f(-0.3f,  0.2f,  0.3f);
    glVertex3f( 0.3f,  0.2f,  0.3f);
    glVertex3f( 0.3f,  0.2f, -0.3f);
    glVertex3f(-0.3f,  0.2f, -0.3f);

    glVertex3f(-0.6f, -0.2f,  0.5f);
    glVertex3f(-0.6f, -0.2f, -0.5f);
    glVertex3f(-0.3f,  0.2f, -0.3f);
    glVertex3f(-0.3f,  0.2f,  0.3f);

    glVertex3f(0.6f, -0.2f,  0.5f);
    glVertex3f(0.6f, -0.2f, -0.5f);
    glVertex3f(0.3f,  0.2f, -0.3f);
    glVertex3f(0.3f,  0.2f,  0.3f);

    glVertex3f(-0.6f, -0.2f,  0.5f);
    glVertex3f( 0.6f, -0.2f,  0.5f);
    glVertex3f( 0.3f,  0.2f,  0.3f);
    glVertex3f(-0.3f,  0.2f,  0.3f);

    glVertex3f(-0.6f, -0.2f, -0.5f);
    glVertex3f( 0.6f, -0.2f, -0.5f);
    glVertex3f( 0.3f,  0.2f, -0.3f);
    glVertex3f(-0.3f,  0.2f, -0.3f);

    glEnd();

    glPopMatrix();

    // Kaca samping kiri
    glColor3f(0.0f, 0.0f, 0.0f);
    glBegin(GL_QUADS);
        glVertex3f(-0.52f, 0.30f,  0.472f);
        glVertex3f( 0.28f, 0.30f,  0.472f);
        glVertex3f( 0.12f, 0.56f,  0.472f);
        glVertex3f(-0.38f, 0.56f,  0.472f);
    glEnd();

    glColor3f(1.0f, 1.0f, 1.0f);
    glBegin(GL_TRIANGLES);
        glVertex3f(-0.10f, 0.32f, 0.473f);
        glVertex3f( 0.00f, 0.32f, 0.473f);
        glVertex3f(-0.12f, 0.55f, 0.473f);
    glEnd();

    // Kaca samping kanan
    glColor3f(0.0f, 0.0f, 0.0f);
    glBegin(GL_QUADS);
        glVertex3f(-0.52f, 0.30f, -0.472f);
        glVertex3f( 0.28f, 0.30f, -0.472f);
        glVertex3f( 0.12f, 0.56f, -0.472f);
        glVertex3f(-0.38f, 0.56f, -0.472f);
    glEnd();

    glColor3f(1.0f, 1.0f, 1.0f);
    glBegin(GL_TRIANGLES);
        glVertex3f(-0.10f, 0.32f, -0.473f);
        glVertex3f( 0.00f, 0.32f, -0.473f);
        glVertex3f(-0.12f, 0.55f, -0.473f);
    glEnd();

    // Kaca depan
    glColor3f(0.0f, 0.0f, 0.0f);
    glBegin(GL_QUADS);
        glVertex3f(0.48f, 0.28f,  0.48f);
        glVertex3f(0.48f, 0.28f, -0.48f);
        glVertex3f(0.28f, 0.58f, -0.38f);
        glVertex3f(0.28f, 0.58f,  0.38f);
    glEnd();

    // Lampu
    glColor3f(1.0f, 1.0f, 0.6f);

    glPushMatrix();
    glTranslatef(1.0f, 0.0f, 0.25f);
    glutSolidSphere(0.12f, 16, 16);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(1.0f, 0.0f, -0.25f);
    glutSolidSphere(0.12f, 16, 16);
    glPopMatrix();

    // Knalpot
    glColor3f(0.7f, 0.7f, 0.7f);
    glPushMatrix();
    glTranslatef(-0.8f, 0.25f, -0.25f);
    glRotatef(-90, 1, 0, 0);
    drawCylinder(0.06f, 0.5f, 16);
    glPopMatrix();

    // Roda
    glPushMatrix(); glTranslatef(0.5f, -0.25f, 0.4f); drawWheel(); glPopMatrix();
    glPushMatrix(); glTranslatef(-0.5f, -0.25f, 0.4f); drawWheel(); glPopMatrix();

    glPushMatrix();
    glTranslatef(0.5f, -0.25f, -0.4f);
    glRotatef(180, 0, 1, 0);
    glTranslatef(0, 0, -0.2f);
    drawWheel();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-0.5f, -0.25f, -0.4f);
    glRotatef(180, 0, 1, 0);
    glTranslatef(0, 0, -0.2f);
    drawWheel();
    glPopMatrix();

    glutSwapBuffers();
}

void init() {
    glClearColor(0.5f, 0.7f, 1.0f, 1.0f);
    glEnable(GL_DEPTH_TEST);
    glEnable(GL_LIGHTING);
    glEnable(GL_LIGHT0);
    glEnable(GL_COLOR_MATERIAL);

    GLfloat lightPos[] = { 4.0f, 5.0f, 3.0f, 1.0f };
    glLightfv(GL_LIGHT0, GL_POSITION, lightPos);
}

void reshape(int w, int h) {
    glViewport(0, 0, w, h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(45.0, (double)w / (double)h, 1.0, 20.0);
    glMatrixMode(GL_MODELVIEW);
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
    glutInitWindowSize(800, 600);
    glutCreateWindow("Mobil 3D Custom OpenGL");

    init();
    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    glutMainLoop();
    return 0;
}
