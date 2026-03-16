#include <gl/glut.h>

void Garis(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    glLineWidth(2.0f);
//    h1 vertikal
    glBegin(GL_LINES);
	    glColor3f(1.0f, 0.0f, 1.0f);
	    glVertex3f(-0.910, 0.50, 0.0);
	    glVertex3f(-0.910, 0.15, 0.0);
    glEnd();
    
//    h2 vertikal
    glBegin(GL_LINES);
	    glColor3f(1.0f, 0.0f, 1.0f);
	    glVertex3f(-0.710, 0.50, 0.0);
	    glVertex3f(-0.710, 0.15, 0.0);
    glEnd();

//    h1 vertikal
    glBegin(GL_LINES);
	    glColor3f(1.0f, 0.0f, 1.0f);
	    glVertex3f(-0.910, 0.3250, 0.0);
	    glVertex3f(-0.710, 0.325, 0.0);
    glEnd();
    
//    i
    glBegin(GL_LINES);
	    glColor3f(1.0f, 0.0f, 1.0f);
	    glVertex3f(-0.60, 0.50, 0.0);
	    glVertex3f(-0.60, 0.15, 0.0);
    glEnd();
    
//    d1 vertikal
    glBegin(GL_LINES);
	    glColor3f(1.0f, 0.0f, 1.0f);
	    glVertex3f(-0.50, 0.50, 0.0);
	    glVertex3f(-0.50, 0.15, 0.0);
    glEnd();

//    d1 diagonal
    glBegin(GL_LINES);
	    glColor3f(1.0f, 0.0f, 1.0f);
	    glVertex3f(-0.50, 0.50, 0.0);
	    glVertex3f(-0.30, 0.325, 0.0);
    glEnd(); 

//    d1 diagonal
    glBegin(GL_LINES);
	    glColor3f(1.0f, 0.0f, 1.0f);
	    glVertex3f(-0.50, 0.15, 0.0);
	    glVertex3f(-0.30, 0.325, 0.0);
    glEnd(); 
    
//    u1 vertikal
    glBegin(GL_LINES);
	    glColor3f(1.0f, 0.0f, 1.0f);
	    glVertex3f(-0.20, 0.50, 0.0);
	    glVertex3f(-0.20, 0.15, 0.0);
    glEnd();
    
//    u2 vertikal
    glBegin(GL_LINES);
	    glColor3f(1.0f, 0.0f, 1.0f);
	    glVertex3f(-0.00, 0.50, 0.0);
	    glVertex3f(-0.00, 0.15, 0.0);
    glEnd();

//    u1 vertikal
    glBegin(GL_LINES);
	    glColor3f(1.0f, 0.0f, 1.0f);
	    glVertex3f(-0.00, 0.15, 0.0);
	    glVertex3f(-0.20, 0.15, 0.0);
    glEnd();

//    p 1 vertikal
    glBegin(GL_LINES);
	    glColor3f(1.0f, 0.0f, 1.0f);
	    glVertex3f(0.10, 0.50, 0.0);
	    glVertex3f(0.10, 0.15, 0.0);
    glEnd();  

//    p 1 diagonal
    glBegin(GL_LINES);
	    glColor3f(1.0f, 0.0f, 1.0f);
	    glVertex3f(0.10, 0.50, 0.0);
	    glVertex3f(0.30, 0.375, 0.0);
    glEnd();    

//    p 2 diagonal
    glBegin(GL_LINES);
	    glColor3f(1.0f, 0.0f, 1.0f);
	    glVertex3f(0.10, 0.25, 0.0);
	    glVertex3f(0.30, 0.375, 0.0);
    glEnd();    
	
//    j1 vertikal
    glBegin(GL_LINES);
	    glColor3f(1.0f, 0.0f, 1.0f);
	    glVertex3f(-0.710, 0.05, 0.0);
	    glVertex3f(-0.710, -0.30, 0.0);
    glEnd();

//    j 
    glBegin(GL_LINES);
	    glColor3f(1.0f, 0.0f, 1.0f);
	    glVertex3f(-0.910, -0.30, 0.0);
	    glVertex3f(-0.710, -0.30, 0.0);
    glEnd();

//    j2 vertikal
    glBegin(GL_LINES);
	    glColor3f(1.0f, 0.0f, 1.0f);
	    glVertex3f(-0.910, -0.30, 0.0);
	    glVertex3f(-0.910, -0.1250, 0.0);
    glEnd();

//    o1 vertikal
    glBegin(GL_LINES);
	    glColor3f(1.0f, 0.0f, 1.0f);
	    glVertex3f(-0.60, 0.05, 0.0);
	    glVertex3f(-0.60, -0.30, 0.0);
    glEnd();

//    o2 vertikal
    glBegin(GL_LINES);
	    glColor3f(1.0f, 0.0f, 1.0f);
	    glVertex3f(-0.40, 0.05, 0.0);
	    glVertex3f(-0.40, -0.30, 0.0);
    glEnd();

//    o1 horizontal
    glBegin(GL_LINES);
	    glColor3f(1.0f, 0.0f, 1.0f);
	    glVertex3f(-0.60, 0.05, 0.0);
	    glVertex3f(-0.40, 0.05, 0.0);
    glEnd();

//    o2 horizontal
    glBegin(GL_LINES);
	    glColor3f(1.0f, 0.0f, 1.0f);
	    glVertex3f(-0.40, -0.30, 0.0);
	    glVertex3f(-0.60, -0.30, 0.0);
    glEnd();

//    k vertikal
    glBegin(GL_LINES);
	    glColor3f(1.0f, 0.0f, 1.0f);
	    glVertex3f(-0.30, 0.05, 0.0);
	    glVertex3f(-0.30, -0.30, 0.0);
    glEnd();

//    k1 diagonal
    glBegin(GL_LINES);
	    glColor3f(1.0f, 0.0f, 1.0f);
	    glVertex3f(-0.10, 0.05, 0.0);
	    glVertex3f(-0.30, -0.1250, 0.0);
    glEnd();

//    k2 diagonal
    glBegin(GL_LINES);
	    glColor3f(1.0f, 0.0f, 1.0f);
	    glVertex3f(-0.10, -0.30, 0.0);
	    glVertex3f(-0.30, -0.1250, 0.0);
    glEnd();

//    o1.2 vertikal
    glBegin(GL_LINES);
	    glColor3f(1.0f, 0.0f, 1.0f);
	    glVertex3f(-0.00, 0.05, 0.0);
	    glVertex3f(-0.00, -0.30, 0.0);
    glEnd();

//    o2.2 vertikal
    glBegin(GL_LINES);
	    glColor3f(1.0f, 0.0f, 1.0f);
	    glVertex3f(0.20, 0.05, 0.0);
	    glVertex3f(0.20, -0.30, 0.0);
    glEnd();	

//    o1.2 horizontal
    glBegin(GL_LINES);
	    glColor3f(1.0f, 0.0f, 1.0f);
	    glVertex3f(-0.00, 0.05, 0.0);
	    glVertex3f(0.20, 0.05, 0.0);
    glEnd();

//    o1.2 horizontal
    glBegin(GL_LINES);
	    glColor3f(1.0f, 0.0f, 1.0f);
	    glVertex3f(0.20, -0.30, 0.0);
	    glVertex3f(-0.00, -0.30, 0.0);
    glEnd();

//    w1 vertikal
    glBegin(GL_LINES);
	    glColor3f(1.0f, 0.0f, 1.0f);
	    glVertex3f(0.30, 0.05, 0.0);
	    glVertex3f(0.30, -0.30, 0.0);
    glEnd(); 
	 
//    w2 vertikal
    glBegin(GL_LINES);
	    glColor3f(1.0f, 0.0f, 1.0f);
	    glVertex3f(0.50, 0.05, 0.0);
	    glVertex3f(0.50, -0.30, 0.0);
    glEnd(); 	 
    
//    w1 diagonal
    glBegin(GL_LINES);
	    glColor3f(1.0f, 0.0f, 1.0f);
	    glVertex3f(0.40, 0.05, 0.0);
	    glVertex3f(0.30, -0.30, 0.0);
    glEnd(); 
	 
//    w2 diagonal
    glBegin(GL_LINES);
	    glColor3f(1.0f, 0.0f, 1.0f);
	    glVertex3f(0.40, 0.05, 0.0);
	    glVertex3f(0.50, -0.30, 0.0);
    glEnd(); 	

//    i vertikal
    glBegin(GL_LINES);
	    glColor3f(1.0f, 0.0f, 1.0f);
	    glVertex3f(0.60, 0.05, 0.0);
	    glVertex3f(0.60, -0.30, 0.0);
    glEnd(); 
	 
	 
    glFlush();
}

int main(int argc, char* argv[])
{
    glutInit(&argc, argv);
    glutInitWindowSize(640, 480);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    glutCreateWindow("Hidup Jokowi");
    glutDisplayFunc(Garis);
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glutMainLoop();
    return 0;
}
