#include <GL/glut.h>

void SegiEmpat(void)
{
    glClear(GL_COLOR_BUFFER_BIT);


//	quad_strip (intinya kek bikin segiempat tapi per strip
//	tiap 2 vertex bikin segiempat baru
glBegin(GL_QUAD_STRIP);
//	strip yg kiri
    glVertex2f(-0.85,0.4);
    glVertex2f(-0.85,0.9);

//ini tengahnya
    glVertex2f(-0.7,0.5);
    glVertex2f(-0.7, 0.8);

//	strip si kanan
    glVertex2f(-0.55,0.4);
    glVertex2f(-0.55,0.9);

//logo bts :D
glEnd();


//	gl_quads (bikin segiempat per point)
glBegin(GL_QUADS);
    glVertex2f(-0.4,0.4);
    glVertex2f(-0.4,0.9);
    glVertex2f(0.0,0.7);
    glVertex2f(0.0,0.4);
glEnd();


//	tgl_triangle_strip, tiap vertex baru bikin segitiga baru
glBegin(GL_TRIANGLE_STRIP);    
    glVertex2f(0.2,0.4);
    glVertex2f(0.35,0.9);
    glVertex2f(0.5,0.4);
    glVertex2f(0.65,0.9);
glEnd();

//	triangle fan (semua segitiga berpusat ke vertex pertama)
glBegin(GL_TRIANGLE_FAN);
    glVertex2f(-0.6,0.0);
    glVertex2f(-0.8,-0.2);
    glVertex2f(-0.8,0.2);
    glVertex2f(-0.4,0.2);
    glVertex2f(-0.4,-0.2);
glEnd();

//	line_loop (bikin garis dari line, tapi balik ke titik pertama)
glBegin(GL_LINE_LOOP);
    glVertex2f(-0.2, -0.2);
    glVertex2f(-0.2, 0.2);
    glVertex2f(0.1, 0.2);
    glVertex2f(0.1, -0.35);
glEnd();

//	GL_LINE_STRIP(hubungin ke tiap vertex, bikin garis)
glBegin(GL_LINE_STRIP);
    glVertex2f(0.3, 0.2);
    glVertex2f(0.5, 0.05);
    glVertex2f(0.3, -0.1);
    glVertex2f(0.5, -0.25);
glEnd();
    glFlush();
    
    
}

int main(int argc, char* argv[])
{
    glutInit(&argc, argv);
    glutInitWindowSize(640, 480);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    glutCreateWindow("fungsiBaru");

    glutDisplayFunc(SegiEmpat);

    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);

    glutMainLoop();
    return 0;
}
