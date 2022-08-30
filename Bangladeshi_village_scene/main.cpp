#include <stdio.h>
#include<GL/gl.h>
#include<iostream>
#include<math.h>
#include <GL/glut.h>
int posx=0,posy=0;
int day = 1;        //1 for day ,0 for night

///tree

void tree()
{
///tree1
glColor3f(0.6156863,0,0);

glBegin(GL_POLYGON);

    glVertex3i(50, 350, 0);
    glVertex3i(70, 350, 0);
    glVertex3i(70, 500, 0);
    glVertex3i(50, 500, 0);

glEnd();

  glColor3f(0.0, 0.5, 0.0);

glBegin(GL_POLYGON);

    glVertex3i(10, 500, 0);
    glVertex3i(110, 500, 0);


    glVertex3i(60, 600, 0);

glEnd();
glBegin(GL_POLYGON);


    glVertex3i(15, 550, 0);
    glVertex3i(105, 550, 0);


    glVertex3i(60, 650, 0);

glEnd();

///tree2
glColor3f(0.6156863,0,0);

glBegin(GL_POLYGON);


    glVertex3i(50+100, 350, 0);
    glVertex3i(70+100, 350, 0);


    glVertex3i(70+100, 500, 0);
    glVertex3i(50+100, 500, 0);


glEnd();

  glColor3f(0.0, 0.5, 0.0);

glBegin(GL_POLYGON);


    glVertex3i(10+100, 500, 0);
    glVertex3i(110+100, 500, 0);


    glVertex3i(60+100, 600, 0);



glEnd();
glBegin(GL_POLYGON);


    glVertex3i(15+100, 550, 0);
    glVertex3i(105+100, 550, 0);


    glVertex3i(60+100, 650, 0);



glEnd();
///tree3
glColor3f(0.6156863,0,0);

glBegin(GL_POLYGON);


    glVertex3i(50+1000, 350+100, 0);
    glVertex3i(70+1000, 350+100, 0);


    glVertex3i(70+1000, 500+100, 0);
    glVertex3i(50+1000, 500+100, 0);


glEnd();

  glColor3f(0.0, 0.5, 0.0);

glBegin(GL_POLYGON);


    glVertex3i(10+1000, 500+100, 0);
    glVertex3i(110+1000, 500+100, 0);


    glVertex3i(60+1000, 600+100, 0);



glEnd();
glBegin(GL_POLYGON);


    glVertex3i(15+1000, 550+100, 0);
    glVertex3i(105+1000, 550+100, 0);


    glVertex3i(60+1000, 650+100, 0);



glEnd();

///tree4
glColor3f(0.6156863,0,0);

glBegin(GL_POLYGON);


    glVertex3i(50+1100, 350+200, 0);
    glVertex3i(70+1100, 350+200, 0);


    glVertex3i(70+1100, 500+200, 0);
    glVertex3i(50+1100, 500+200, 0);


glEnd();

  glColor3f(0.0, 0.5, 0.0);

glBegin(GL_POLYGON);

    glVertex3i(10+1100, 500+200, 0);
    glVertex3i(110+1100, 500+200, 0);
    glVertex3i(60+1100, 600+200, 0);

glEnd();
glBegin(GL_POLYGON);


    glVertex3i(15+1100, 550+200, 0);
    glVertex3i(105+1100, 550+200, 0);
    glVertex3i(60+1100, 650+200, 0);



glEnd();
///tree5
glColor3f(0.6156863,0,0);

glBegin(GL_POLYGON);


    glVertex3i(50+900, 350+200, 0);
    glVertex3i(70+900, 350+200, 0);


    glVertex3i(70+900, 500+200, 0);
    glVertex3i(50+900, 500+200, 0);


glEnd();

  glColor3f(0.0, 0.5, 0.0);

glBegin(GL_POLYGON);


    glVertex3i(10+900, 500+200, 0);
    glVertex3i(110+900, 500+200, 0);


    glVertex3i(60+900, 600+200, 0);



glEnd();
glBegin(GL_POLYGON);


    glVertex3i(15+900, 550+200, 0);
    glVertex3i(105+900, 550+200, 0);


    glVertex3i(60+900, 650+200, 0);

glEnd();


}

///river
void river()
{
    glColor3f(0.0352941176470588, 0.5098039215686275, 0.9568627450980392);
    glBegin(GL_POLYGON);

    glVertex3i(0, 0, 0);
    glVertex3i(1200, 0, 0);
    glVertex3i(1200, 300, 0);
    glVertex3i(0, 300, 0);


glEnd();



}
//land
void land()
{
    glColor3f(0.5 ,1.0 ,0.5);
    glBegin(GL_POLYGON);

    glVertex3i(0, 300, 0);
    glVertex3i(1200, 300, 0);
    glVertex3i(1200, 600, 0);
    glVertex3i(0, 600, 0);


glEnd();

}
///hill
void hill()
{
    glColor3f(0.50196, 0.25098, 0.0);
    glBegin(GL_POLYGON);

    glVertex3i(600, 600, 0);
    glVertex3i(800, 900, 0);
    glVertex3i(900, 650, 0);
    //glVertex3i(600, 600, 0);

    glColor3f(0.50196, 0.25098, 0.0);
    glBegin(GL_POLYGON);

    //glVertex3i(600, 600, 0);
    glVertex3i(900, 650, 0);
    glVertex3i(1000, 800, 0);
    glVertex3i(1100, 620, 0);

    glColor3f(0.50196, 0.25098, 0.0);
    glBegin(GL_POLYGON);

    glVertex3i(1050, 620, 0);
    glVertex3i(1200, 800, 0);
    glVertex3i(1200, 600, 0);
    //glVertex3i(1100, 620, 0);




glEnd();

}


///house

void house()
{

///house1
glColor3f(0.5411764705882353, 0.0, 0.5411764705882353);

glBegin(GL_POLYGON);
    //rectangle
    glVertex3i(220, 350, 0);
    glVertex3i(380, 350, 0);
    glVertex3i(380, 450, 0);
    glVertex3i(220, 450, 0);


glEnd();

glColor3f(0, 0, 1);
glBegin(GL_POLYGON);
     //triangle
    glVertex3i(200, 450, 0);
    glVertex3i(400, 450, 0);
    glVertex3i(300, 650, 0);



glEnd();


glColor3f(1,1,0);
glBegin(GL_POLYGON);
    //door
    glVertex3i(280, 350, 0);
    glVertex3i(320, 350, 0);
    glVertex3i(320, 450, 0);
    glVertex3i(280, 450, 0);


glEnd();
///house2
glColor3f(0.5411764705882353, 0.0, 0.5411764705882353);

glBegin(GL_POLYGON);

    glVertex3i(220+200, 350+50, 0);
    glVertex3i(380+200, 350+50, 0);
    glVertex3i(380+200, 450+50, 0);
    glVertex3i(220+200, 450+50, 0);


glEnd();

glColor3f(1.444, .5, 0);
glBegin(GL_POLYGON);

    glVertex3i(200+200, 450+50, 0);
    glVertex3i(400+200, 450+50, 0);
    glVertex3i(300+200, 650+50, 0);



glEnd();


glColor3f(1,1,0);
glBegin(GL_POLYGON);

    glVertex3i(280+200, 350+50, 0);
    glVertex3i(320+200, 350+50, 0);
    glVertex3i(320+200, 450+50, 0);
    glVertex3i(280+200, 450+50, 0);


glEnd();

}

int a, b;

void sun()
{

glColor3f(0.9764705882352941, 0.4705882352941176, 0.0196078431372549);
a = 1000;
b = 1000;

    GLfloat theta = 0, x_c = a, y_c = b, xi, yi, r_x = 50, r_y = 50;

	for (int i = 1; i <= 100000; ++i)
    {
        theta = theta + 0.001;

	    xi = x_c + r_x * cos(theta);
	    yi = y_c + r_y * sin(theta);
	    glBegin(GL_POLYGON);
        glVertex2f(xi, yi);

	}

	glEnd();

}

///boat


void boat()
{
    ///boat1
    glColor3f(0,0,0);
    glBegin(GL_POLYGON);
        glVertex3i(10,150,0);
        glVertex3i(150+50,150,0);
        glVertex3i(120+50,100,0);
        glVertex3i(30,100,0);
    glEnd();

  glColor3f(1,0,0);
    // rectangle part of boat
    glBegin(GL_POLYGON);


    glVertex3i(50,150,0);
    glVertex3i(150,150,0);
    glVertex3i(150,220,0);
    glVertex3i(50,220,0);
    glEnd();
    ///boat2
    glColor3f(0,0,0);
    glBegin(GL_POLYGON);


    glVertex3i(10+200,150+50,0);
    glVertex3i(150+50+200,150+50,0);
    glVertex3i(120+50+200,100+50,0);
    glVertex3i(30+200,100+50,0);
    glEnd();

  glColor3f(1,0,0);
    glBegin(GL_POLYGON);


    glVertex3i(50+200,150+50,0);
    glVertex3i(150+200,150+50,0);
    glVertex3i(150+200,220+50,0);
    glVertex3i(50+200,220+50,0);
    glEnd();

    ///boat3
    glColor3f(0,0,0);
    glBegin(GL_POLYGON);


    glVertex3i(10+400,150-100,0);
    glVertex3i(150+50+400,150-100,0);
    glVertex3i(120+50+400,100-100,0);
    glVertex3i(30+400,100-100,0);
    glEnd();

  glColor3f(1,0,0);
    glBegin(GL_POLYGON);


    glVertex3i(50+400,150-100,0);
    glVertex3i(150+400,150-100,0);
    glVertex3i(150+400,220-100,0);
    glVertex3i(50+400,220-100,0);
    glEnd();



}
//night
void night_effect()
{
    glColor3ub(5 ,10, 65);
    glBegin(GL_POLYGON);
    glVertex3i(0, 300, 0);
    glVertex3i(1200, 300, 0);
    glVertex3i(1200, 1200, 0);
    glVertex3i(0, 1200, 0);


glEnd();

}
//star
void star()
{
    //star1
    glColor3f(1, 1, 1);
    glBegin(GL_POLYGON);
    glVertex3i(30, 1020, 0);
    glVertex3i(50, 1050, 0);
    glVertex3i(50, 1100, 0);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex3i(70, 1020, 0);
    glVertex3i(50, 1100, 0);
    glVertex3i(50, 1050, 0);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex3i(50, 1050, 0);
    glVertex3i(80, 1070, 0);
    glVertex3i(20, 1070, 0);
    glEnd();

//star2
 glColor3f(1, 1, 1);
    glBegin(GL_POLYGON);

    glVertex3i(30+60+60, 1020+60, 0);
    glVertex3i(50+60+60, 1050+60, 0);
    glVertex3i(50+60+60, 1100+60, 0);

glEnd();
glColor3f(1, 1, 1);
    glBegin(GL_POLYGON);
    glVertex3i(70+60+60, 1020+60, 0);
    glVertex3i(50+60+60, 1100+60, 0);
    glVertex3i(50+60+60, 1050+60, 0);
glEnd();
glColor3f(1, 1, 1);
    glBegin(GL_POLYGON);
    glVertex3i(50+60+60, 1050+60, 0);
    glVertex3i(80+60+60, 1070+60, 0);
    glVertex3i(20+60+60, 1070+60, 0);
glEnd();
//star3
 glColor3f(1, 1, 1);
    glBegin(GL_POLYGON);

    glVertex3i(30+120+120, 1020, 0);
    glVertex3i(50+120+120, 1050, 0);
    glVertex3i(50+120+120, 1100, 0);

glEnd();
glColor3f(1, 1, 1);
    glBegin(GL_POLYGON);
    glVertex3i(70+120+120, 1020, 0);
    glVertex3i(50+120+120, 1100, 0);
    glVertex3i(50+120+120, 1050, 0);
glEnd();
glColor3f(1, 1, 1);
    glBegin(GL_POLYGON);
    glVertex3i(50+120+120, 1050, 0);
    glVertex3i(80+120+120, 1070, 0);
    glVertex3i(20+120+120, 1070, 0);
glEnd();
//star4
glColor3f(1, 1, 1);
    glBegin(GL_POLYGON);

    glVertex3i(30+120+120+120, 1020+60, 0);
    glVertex3i(50+120+120+120, 1050+60, 0);
    glVertex3i(50+120+120+120, 1100+60, 0);

glEnd();
glColor3f(1, 1, 1);
    glBegin(GL_POLYGON);
    glVertex3i(70+120+120+120, 1020+60, 0);
    glVertex3i(50+120+120+120, 1100+60, 0);
    glVertex3i(50+120+120+120, 1050+60, 0);
glEnd();
glColor3f(1, 1, 1);
    glBegin(GL_POLYGON);
    glVertex3i(50+120+120+120, 1050+60, 0);
    glVertex3i(80+120+120+120, 1070+60, 0);
    glVertex3i(20+120+120+120, 1070+60, 0);
glEnd();

}
//mon
void moon()
{


glColor3f(1,1,1);


a = 600;
b = 1000;



    GLfloat theta = 0, x_c = a, y_c = b, xi, yi, r_x = 50, r_y = 50;


	for (int i = 1; i <= 10000; ++i) {
        theta = theta + 0.001;

	    xi = x_c + r_x * cos(theta);
	    yi = y_c + r_y * sin(theta);
        glBegin(GL_POLYGON);
        glVertex2f(xi, yi);
	}

	glEnd();

}



///clouds
void draw_object()
{
    if(day==1)
    {
        land();
        hill();
        tree();
        river();
        house();
        sun();

        glPushMatrix();
        glTranslatef(posx,0, 0);
        boat();
        glPopMatrix();

    }
    else
    {
        night_effect();
        land();
        star();
        hill();
        tree();
        river();
        house();
        moon();

        glPushMatrix();
        glTranslatef(posx,0,0);
        boat();
        glPopMatrix();

    }
}


void display(void)
{

  glClear(GL_COLOR_BUFFER_BIT);
  draw_object();

  glFlush();
}
// key - from keyboard, (x, y) - mouse location in window
void keyboardFunc(unsigned char key, int x, int y)
{
	switch(key)
	{
    case 'n':
        day=0;
        display();
        break;
	case 'd':
        day=1;
        display();
        break;
        case 'N':
        day=0;
        display();
        break;
	case 'D':
        day=1;
        display();
        break;
	}

}
void update(int value) {


    if(posx >= 1200)
    {
        posx=0;
    }
    else{
        posx++;
    }
    // glutPostRedisplay() causes redisplay of current window (basically if updated)
    glutPostRedisplay();
    //glutTimerFunc() registers a timer callback to be triggered in a specified number of milliseconds.
	glutTimerFunc(10, update, 0);
}
void init(void)
{
    // glClearColor(GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha)
    glClearColor(0.6196078431372549, 0.9333333333333333, 0.996078431372549, 1.0);
    glMatrixMode(GL_PROJECTION);
    // glLoadIdentity() replaces the current matrix with the identity matrix.
    glLoadIdentity();
    // glutOrtho2D(left, right, bottom, up)
    gluOrtho2D(0.0, 1200.0, 0, 1200.0);
}

int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitWindowSize(1000, 600);
glutInitWindowPosition(0, 0);
glutCreateWindow("Village Scenario");

glutDisplayFunc(display);
glutKeyboardFunc(keyboardFunc);

init();
//glutTimerFunc(25, update, 0);
update(1);
glutMainLoop();
return 0;
}


