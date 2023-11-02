#include <GL/freeglut.h>

void display() {
    glClear(GL_COLOR_BUFFER_BIT);

    // Mendapatkan lebar dan tinggi jendela
    int windowWidth = glutGet(GLUT_WINDOW_WIDTH);
    int windowHeight = glutGet(GLUT_WINDOW_HEIGHT);

    // Menggambar dua persegi panjang dengan ukuran yang sama
    glColor3f(0.0, 0.0, 0.5); // Warna biru
    glBegin(GL_QUADS);
    glVertex2f(-0.6, -0.2);  // Kiri bawah
    glVertex2f(0.6, -0.2);   // Kanan bawah
    glVertex2f(0.6, 0.2);    // Kanan atas
    glVertex2f(-0.6, 0.2);   // Kiri atas
    glEnd();

    glColor3f(1.0, 1.0, 0.0); // Warna kuning
    glBegin(GL_QUADS);
    glVertex2f(-0.6, -0.6);  // Kiri bawah
    glVertex2f(0.6, -0.6);   // Kanan bawah
    glVertex2f(0.6, -0.2);   // Kanan atas
    glVertex2f(-0.6, -0.2);  // Kiri atas
    glEnd();

    glFlush();
}

void myinit() {
    glClearColor(1.0, 1.0, 1.0, 1.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-1.0, 1.0, -1.0, 1.0);
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(400, 400);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("Bendera Ukraina");

    glutDisplayFunc(display);
    myinit();

    glutMainLoop();

    return 0;
}