#include <GL/glut.h>
#include <stdlib.h>

// =====================================
// ROTASI SENDI UTAMA
// =====================================
int shoulder = 0;
int elbow = 0;
int wrist = 0;

// =====================================
// finger[jari][ruas]
// ruas:
// 0 = pangkal
// 1 = tengah
// 2 = ujung
// =====================================
int finger[5][3] = {
    {0,0,0},
    {0,0,0},
    {0,0,0},
    {0,0,0},
    {0,0,0}
};

// =====================================
// MEMBUAT RUAS
// =====================================
void drawSegment(float length, float thickness) {

    glPushMatrix();

    glScalef(length, thickness, thickness);
    glutWireCube(1.0);

    glPopMatrix();
}

// =====================================
// MENGGAMBAR JARI
// =====================================
void drawFinger(int idx) {

    // RUAS 1
    glRotatef((GLfloat)finger[idx][0], 0.0, 0.0, 1.0);
    glTranslatef(0.25, 0.0, 0.0);

    drawSegment(0.5, 0.15);

    // RUAS 2
    glTranslatef(0.25, 0.0, 0.0);
    glRotatef((GLfloat)finger[idx][1], 0.0, 0.0, 1.0);
    glTranslatef(0.2, 0.0, 0.0);

    drawSegment(0.4, 0.12);

    // RUAS 3
    glTranslatef(0.2, 0.0, 0.0);
    glRotatef((GLfloat)finger[idx][2], 0.0, 0.0, 1.0);
    glTranslatef(0.15, 0.0, 0.0);

    drawSegment(0.3, 0.1);
}

// =====================================
// DISPLAY
// =====================================
void display(void) {

    glClear(GL_COLOR_BUFFER_BIT);

    glColor3f(1.0, 1.0, 1.0);

    glPushMatrix();

    // =====================================
    // BAHU
    // =====================================
    glTranslatef(-3.0, 0.0, 0.0);

    glRotatef((GLfloat)shoulder, 0.0, 0.0, 1.0);

    glTranslatef(1.0, 0.0, 0.0);

    drawSegment(2.0, 0.4);

    // =====================================
    // SIKU
    // =====================================
    glTranslatef(1.0, 0.0, 0.0);

    glRotatef((GLfloat)elbow, 0.0, 0.0, 1.0);

    glTranslatef(1.0, 0.0, 0.0);

    drawSegment(2.0, 0.35);

    // =====================================
    // PERGELANGAN
    // =====================================
    glTranslatef(1.0, 0.0, 0.0);

    glRotatef((GLfloat)wrist, 0.0, 0.0, 1.0);

    // =====================================
    // TELAPAK
    // =====================================
    glPushMatrix();

    glTranslatef(0.5, 0.0, 0.0);

    glPushMatrix();

    glScalef(1.0, 0.7, 0.3);
    glutWireCube(1.0);

    glPopMatrix();

    // =====================================
    // POSISI 5 JARI
    // =====================================
    float posY[5] = {0.3, 0.15, 0.0, -0.15, -0.3};

    for(int i = 0; i < 5; i++) {

        glPushMatrix();

        glTranslatef(0.5, posY[i], 0.0);

		// ==========================
		// POSISI KHUSUS JEMPOL
		// ==========================
		if(i == 0) {
		
		    // geser ke bawah telapak
		    glTranslatef(-0.1, -0.25, 0.0);
		
		    // putar agar menyamping
		    glRotatef(-60, 0.0, 0.0, 1.0);
		}

        drawFinger(i);

        glPopMatrix();
    }

    glPopMatrix();

    glPopMatrix();

    glutSwapBuffers();
}

// =====================================
// RESHAPE
// =====================================
void reshape(int w, int h) {

    glViewport(0, 0, (GLsizei)w, (GLsizei)h);

    glMatrixMode(GL_PROJECTION);

    glLoadIdentity();

    gluPerspective(
        65.0,
        (GLfloat)w / (GLfloat)h,
        1.0,
        20.0
    );

    glMatrixMode(GL_MODELVIEW);

    glLoadIdentity();

    // kamera dimiringkan
    glTranslatef(0.0, -1.0, -12.0);

    glRotatef(20.0, 1.0, 0.0, 0.0);

    glRotatef(-15.0, 0.0, 1.0, 0.0);
}

// =====================================
// KEYBOARD
// =====================================
void keyboard(unsigned char key, int x, int y) {

    switch(key) {

        // =====================================
        // BAHU
        // =====================================
        case 's':
            shoulder += 5;
            break;

        case 'S':
            shoulder -= 5;
            break;

        // =====================================
        // SIKU
        // =====================================
        case 'e':
            elbow += 5;
            break;

        case 'E':
            elbow -= 5;
            break;

        // =====================================
        // PERGELANGAN
        // =====================================
        case 'w':
            wrist += 5;
            break;

        case 'W':
            wrist -= 5;
            break;

        // =====================================
        // JEMPOL
        // =====================================
        case '1':
            finger[0][0] += 5;
            finger[0][1] += 5;
            finger[0][2] += 5;
            break;

        case '!':
            finger[0][0] -= 5;
            finger[0][1] -= 5;
            finger[0][2] -= 5;
            break;

        // =====================================
        // TELUNJUK
        // =====================================
        case '2':
            finger[1][0] += 5;
            finger[1][1] += 5;
            finger[1][2] += 5;
            break;

        case '@':
            finger[1][0] -= 5;
            finger[1][1] -= 5;
            finger[1][2] -= 5;
            break;

        // =====================================
        // JARI TENGAH
        // =====================================
        case '3':
            finger[2][0] += 5;
            finger[2][1] += 5;
            finger[2][2] += 5;
            break;

        case '#':
            finger[2][0] -= 5;
            finger[2][1] -= 5;
            finger[2][2] -= 5;
            break;

        // =====================================
        // JARI MANIS
        // =====================================
        case '4':
            finger[3][0] += 5;
            finger[3][1] += 5;
            finger[3][2] += 5;
            break;

        case '$':
            finger[3][0] -= 5;
            finger[3][1] -= 5;
            finger[3][2] -= 5;
            break;

        // =====================================
        // KELINGKING
        // =====================================
        case '5':
            finger[4][0] += 5;
            finger[4][1] += 5;
            finger[4][2] += 5;
            break;

        case '%':
            finger[4][0] -= 5;
            finger[4][1] -= 5;
            finger[4][2] -= 5;
            break;

        // =====================================
        // ESC
        // =====================================
        case 27:
            exit(0);
            break;
    }

    glutPostRedisplay();
}

// =====================================
// INIT
// =====================================
void init(void) {

    glClearColor(0.0, 0.0, 0.0, 0.0);

    glShadeModel(GL_FLAT);
}

// =====================================
// MAIN
// =====================================
int main(int argc, char** argv) {

    glutInit(&argc, argv);

    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);

    glutInitWindowSize(900, 700);

    glutInitWindowPosition(100, 100);

    glutCreateWindow("Tangan OpenGL");

    init();

    glutDisplayFunc(display);

    glutReshapeFunc(reshape);

    glutKeyboardFunc(keyboard);

    glutMainLoop();

    return 0;
}
