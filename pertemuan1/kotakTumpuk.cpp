#include <GL/glut.h>
// 24060124130095a

void SegiEmpat(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
//	tengah vertikal
    glColor3f(1.0f, 1.0f, 1.0f);
    glRectf(-0.06f, 0.30f, 0.06f, -0.30f);
    
//   kiri vertikal
	glColor3f(1.0f, 1.0f, 1.0f);
    glRectf(-0.42f, 0.30f, -0.30f, -0.30f); 

//   kanan vertikal
	glColor3f(1.0f, 1.0f, 1.0f);
    glRectf(0.30f, 0.30f, 0.42f, -0.30f); 
    
//   bawah 1
	glColor3f(1.0f, 1.0f, 1.0f);
    glRectf(-0.54f, -0.30f, 0.54f, -0.42f); 

//   bawah 2
	glColor3f(1.0f, 1.0f, 1.0f);
    glRectf(-0.66f, -0.42f, 0.66f, -0.54f); 
    
//   atas1
	glColor3f(1.0f, 1.0f, 1.0f);
    glRectf(-0.54f, 0.42f, 0.54f, 0.30f); 
    
//  tiang
    glColor3f(1.0f, 1.0f, 1.0f);
    glRectf(-0.03f, 0.78f, 0.03f, 0.42f);	

//  bendera
    glColor3f(1.0f, 1.0f, 1.0f);
    glRectf(0.03f, 0.78f, 0.20f, 0.62f);
    
    glFlush();


}

int main(int argc, char* argv[])
{
    glutInit(&argc, argv);
    glutInitWindowSize(640, 480);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    glutCreateWindow("Kotak Bertumpuk");

    glutDisplayFunc(SegiEmpat);

    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);

    glutMainLoop();
    return 0;
}
