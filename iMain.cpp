#include "iGraphics.h"
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<iostream>
#include<string>
#include "movingObjects.h"
#include "allFileWorks.h"
#include<ctime>

struct g
{
	int girlMove[2][10];

	int girlX,girlY;

	g(){}

	g(int _girlX,int _girlY)
	{
	
		girlX=_girlX;
		girlY=_girlY;

	}

	int girlIndex,girlView;

	void girlImageLoad()
	{
	
		girlMove[0][0]=iLoadImage("right\\1.png");
		girlMove[0][1]=iLoadImage("right\\2.png");
		girlMove[0][2]=iLoadImage("right\\3.png");
		girlMove[0][3]=iLoadImage("right\\4.png");
		girlMove[0][4]=iLoadImage("right\\5.png");
		girlMove[0][5]=iLoadImage("right\\6.png");
		girlMove[0][6]=iLoadImage("static\\right.png");
	
		girlMove[1][0]=iLoadImage("left\\1.png");
		girlMove[1][1]=iLoadImage("left\\2.png");
		girlMove[1][2]=iLoadImage("left\\3.png");
		girlMove[1][3]=iLoadImage("left\\4.png");
		girlMove[1][4]=iLoadImage("left\\5.png");
		girlMove[1][5]=iLoadImage("left\\6.png");
		girlMove[1][6]=iLoadImage("static\\left.png");
	
	
	
	}

	void girlShow()
	{
		iShowImage(girlX,girlY,75,75,girlMove[girlView][girlIndex]);

	}
};


g H(650,100);

//global variables for file
char nameOfPlayers[100][100];
int numOfPlayers;
int scoring[100];
char scoreInString[100][100];
int mode;
int len;
char str[100],str2[100];


int  i[100],j,k,l,page=1,x=0;

//Variables for different pages
int frontPage,controls,scoreBoard,credits;

//Variables for gameplay
int sky, expStar,basket,gameOver,sickGirl,scoreBackground,instruction;

int basketX,basketY;

//for images of junk foods
int burger,chocolate,coke,doughnut1,doughnut2,fries,hotdog,pizza;

//for coOrdinates of junk foods
int burgerX,burgerY;
int chocolateX,chocolateY=700;
int cokeX,cokeY;
int doughnut1X,doughnut1Y;
int doughnut2X,doughnut2Y;
int friesX,friesY;
int hotdogX,hotdogY;
int pizzaX,pizzaY;

//for images of healthy foods
int carrot,strawberry,apple,watermelon,milk,grape1,grape2,orange;

//for coOrdinates of healthy foods

int carrotX,carrotY;
int strawberryX,strawberryY;
int appleX,appleY;
int watermelonX,watermelonY;
int milkX,milkY;
int grape1X,grape1Y;
int grape2X,grape2Y;
int orangeX,orangeY;

//variable for the girl
int girl[2][7];
int girlIndex=0;
int girlCoOrdinateX=H.girlX;
int girlCoOrdinateY=H.girlY;

bool standPosition= true;
int standCounter=0;
int side=0;


int timer1;

//variable for score and life
int score=0;
int life=19;
int speed=0;

//flags
int flagForLevelUp=1;
int flagForStar=0;

int bar[10];

int flag=1;
int flag2=1;
int flag3=0;
int flag4=1;







void iDraw()
{
	iClear();

	//page=1 for front page showing
	if(page==1)
	{

		iShowImage(0,0,1360,720,frontPage);
		
		

	}
	//page=6 for instruction page
	if(page==7)
	{
		
		iShowImage(0,0,1360,720,instruction);
	
	
	}

	//page=2 for gameplay
	if(page==2||page==6)
	{


		iShowImage(0,0,1360,720,sky);//background
		iShowImage(chocolateX,chocolateY,120,100,chocolate);
		iShowImage(cokeX,cokeY,90,100,coke);
		iShowImage(doughnut1X,doughnut1Y,120,100,doughnut1);
		iShowImage(doughnut2X,doughnut2Y,105,100,doughnut2);
		iShowImage(hotdogX,hotdogY,150,100,hotdog);
		iShowImage(friesX,friesY,100,100,fries);
		iShowImage(burgerX,burgerY,90,100,burger);
		iShowImage(pizzaX,pizzaY,90,100,pizza);

		
		iShowImage(milkX,milkY,100,100,milk);
		iShowImage(strawberryX,strawberryY,100,100,strawberry);
		iShowImage(grape1X,grape1Y,100,100,grape1);
		iShowImage(grape2X,grape2Y,100,100,grape2);
		iShowImage(watermelonX,watermelonY,120,100,watermelon);
		iShowImage(orangeX,orangeY,100,100,orange);
		iShowImage(appleX,appleY,100,100,apple);
		iShowImage(carrotX,carrotY,100,100,carrot);

		if(score>=20)
		{
		
			iShowImage(basketX,basketY,100,125,basket);
		
		
		}


		if(!standPosition)
		{
			if(flag==1&&flag4==1)
			{
				iShowImage(girlCoOrdinateX,girlCoOrdinateY,100,100,girl[side][girlIndex]);
				
			
			}
			
			standCounter++;
			if(standCounter>=100)
			{
			
				standCounter=0;
				girlIndex=0;
				standPosition=true;

			
			}
		}
		else
		{
			if(flag==1&&flag4==1)
			{
				iShowImage(girlCoOrdinateX,girlCoOrdinateY,100,100,girl[side][6]);
				
			
			}

		}



		if(life==0)
		{
			page=6;
			
		}
		//page=6 for game over
		if(page==6)
		{
		
			flag4=0;
			iPauseTimer(timer1);
		
			iShowImage(girlCoOrdinateX,girlCoOrdinateY,200,200,sickGirl);
			iShowImage(288,205,700,500,gameOver);

			if(mode==1)
			{
		
				iText(452,367,str,GLUT_BITMAP_TIMES_ROMAN_24);
				iText(453,313,"You can write now",GLUT_BITMAP_TIMES_ROMAN_24);
		
		
			}
			else
			{
				iText(453,313, "Click to activate the box, enter to finish.",GLUT_BITMAP_TIMES_ROMAN_24);
		
			}
		
	
	
	
		}

		if(life==19||life==18)
		{
			iShowImage(1123,636,200,20,bar[0]);
		}
		else if(life==17||life==16)
		{
			iShowImage(1123,636,200,20,bar[1]);
		}
		else if(life==15||life==14)
		{
			iShowImage(1123,636,200,20,bar[2]);
		}
		else if(life==13||life==12)
		{
			iShowImage(1123,636,200,20,bar[3]);
		}
		else if(life==11||life==10)
		{
			iShowImage(1123,636,200,20,bar[4]);
		}
		else if(life==9||life==8)
		{
			iShowImage(1123,636,200,20,bar[5]);
		}
		else if(life==6||life==7)
		{
			iShowImage(1123,636,200,20,bar[6]);
		}
		else if(life==5||life==4)
		{
			iShowImage(1123,636,200,20,bar[7]);
		}
		else if(life==3||life==2)
		{
			iShowImage(1123,636,200,20,bar[8]);
		}
		else if(life==1||life==0)
		{
			iShowImage(1123,636,200,20,bar[9]);
		}
		


		if(flag3 && flagForStar<350)
		{
		
			flag=0;
			iShowImage(374,100,612,423,expStar);
			flagForStar++;
		
		}
		else
		{
		
			flag=1;
		}

		iShowImage(1100,655,140,70,scoreBackground);
		
		//iText(1130,664,xyz);
		////
		char xyz[33];
		itoa(score,xyz,10);
		iText(1150,674,xyz,GLUT_BITMAP_TIMES_ROMAN_24);

		
    

	}

	//page =3 for controls
	if(page==3)
	{

		iShowImage(0,0,1360,720,controls);

	}

	//page = 4 for scoreBoard
	if(page==4)
	{

		iShowImage(0,0,1360,720,scoreBoard);

		iText(199,468,nameOfPlayers[0],GLUT_BITMAP_TIMES_ROMAN_24);
		iText(821,468,scoreInString[0],GLUT_BITMAP_TIMES_ROMAN_24);

		iText(199,362,nameOfPlayers[1],GLUT_BITMAP_TIMES_ROMAN_24);
		iText(821,362,scoreInString[1],GLUT_BITMAP_TIMES_ROMAN_24);

		iText(199,256,nameOfPlayers[2],GLUT_BITMAP_TIMES_ROMAN_24);
		iText(821,256,scoreInString[2],GLUT_BITMAP_TIMES_ROMAN_24);

		iText(199,149,nameOfPlayers[3],GLUT_BITMAP_TIMES_ROMAN_24);
		iText(821,149,scoreInString[3],GLUT_BITMAP_TIMES_ROMAN_24);


		
	}

	//page = 5 for credits
	if(page==5)
	{

		iShowImage(0,0,1360,720,credits);
		
	}

	


}





/*function iMouseMove() is called when the user presses and drags the mouse.
(mx, my) is the position where the mouse pointer is.
*/


void iMouseMove(int mx, int my)
{
	
}
//*******************************************************************ipassiveMouse***********************************************************************//
void iPassiveMouseMove(int mx, int my)
{

}

void iMouse(int button, int state, int mx, int my)
{
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		printf("(%d %d)\n",mx,my);
		if(page==7)
		{
		
			if(mx>=975 &&mx<=1225 &&my>=85 && my<=127)
			{
				iResumeTimer(timer1);
				page=2;//page=2 for gameplay

			}
		
		
		}
		//page = 1 for front page
		if(page==1)
		{
			if(mx>=833 &&mx<=1226 &&my>=539 && my<=609)
			{
				
				page=7;//page=6 for instruction

			}
			

			if(mx>=833 &&mx<=1226 &&my>=432 && my<=503)
			{
				page=3;//page =3 for controls

			}
			if(mx>=833 &&mx<=1226 &&my>=326 && my<=396)
			{
				file();
				page=4;//page = 4 for scoreBoard

			}
			if(mx>=833 &&mx<=1226 &&my>=221 && my<=288)
			{
				page=5;//page = 5 for credits
			}
			if(mx>=725 &&mx<=833 &&my>=61 && my<=168)
			{
				exit(0);//exit button
			}
			
		}
		if(page==6)
		{
			if(mx>=452 &&mx<=839 &&my>=367 && my<=410)
			{
				mode=1;

			}
		
		
		
		}
	}


	if (button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
	{

	}
}

/*
function iKeyboard() is called whenever the user hits a key in keyboard.
key- holds the ASCII value of the key pressed.
*/


void iKeyboard(unsigned char key)
{
	if(key == 'b')//used for going back
	{
		//page=0;
		
		page=1;
	}
	if(key=='j')
	{
	
		page=6;
	
	}
	if(mode==1)
	{
		if(key=='\r')
		{
		
			mode=0;
			strcpy(str2,str);
			FILE *fp=fopen("name.txt","a");
			fprintf(fp,"%s\n",str2);
			FILE *fp2=fopen("play.txt","w");
			fprintf(fp2,"%d",numOfPlayers+1);
			FILE *fp3=fopen("score.txt","a");
			fprintf(fp3,"%d\n",score);
			fclose(fp);
			fclose(fp2);
			fclose(fp3);
			page=1;
		
		}
		else
		{
			str[len]=key;
			len++;
		
		
		}
	
	
	
	
	}
	

}

/*
function iSpecialKeyboard() is called whenver user hits special keys like-
function keys, home, end, pg up, pg down, arraows etc. you have to use
appropriate constants to detect them. A list is:
GLUT_KEY_F1, GLUT_KEY_F2, GLUT_KEY_F3, GLUT_KEY_F4, GLUT_KEY_F5, GLUT_KEY_F6,
GLUT_KEY_F7, GLUT_KEY_F8, GLUT_KEY_F9, GLUT_KEY_F10, GLUT_KEY_F11, GLUT_KEY_F12,
GLUT_KEY_LEFT, GLUT_KEY_UP, GLUT_KEY_RIGHT, GLUT_KEY_DOWN, GLUT_KEY_PAGE UP,
GLUT_KEY_PAGE DOWN, GLUT_KEY_HOME, GLUT_KEY_END, GLUT_KEY_INSERT
*/
void iSpecialKeyboard(unsigned char key)
{


	if (key == GLUT_KEY_RIGHT)
	{
		

		if(girlCoOrdinateX+15<1260)
		{
			girlCoOrdinateX+=15;
		
		
		}
		
		side=0;
		girlIndex++;

		if(girlIndex>=5)
		{
		
			girlIndex=0;
		
		}
		standPosition=false;
		//x+=20;//to take the model to right
	}
	if (key == GLUT_KEY_LEFT)
	{
		

		if(girlCoOrdinateX-15>0)
		{
			girlCoOrdinateX-=15;
		
		
		}
		
		side=1;
		girlIndex++;

		if(girlIndex>=5)
		{
		
			girlIndex=0;
		
		}
		standPosition=false;
		
	}

	if (key == GLUT_KEY_HOME)
	{

	}

}




int main()
{
	srand(time(0));

	file();
	
	timer1=iSetTimer(10, fun);

	iPauseTimer(timer1);
	
	iInitialize(1360, 720, "Food Fall");

	frontPage = iLoadImage("images\\Front Page.jpg");

	controls=iLoadImage("images\\Controls.jpg");

	scoreBoard=iLoadImage("images\\Main score.png");

	credits=iLoadImage("images\\Credits.jpg");

	sky= iLoadImage("images\\sky.jpg");



	burger= iLoadImage("images\\burger.png");
	chocolate= iLoadImage("images\\chocolate.png");
	coke= iLoadImage("images\\coke.png");
	doughnut1= iLoadImage("images\\doughnut.png");
	doughnut2= iLoadImage("images\\donut.png");
	fries= iLoadImage("images\\fries.png");
	hotdog= iLoadImage("images\\hotdog.png");
	pizza= iLoadImage("images\\pizza.png");


	carrot=iLoadImage("images\\carrot.png");
	strawberry=iLoadImage("images\\strawberry.png");
	apple= iLoadImage("images\\apple.png");
	watermelon=iLoadImage("images\\watermelon.png");
	milk= iLoadImage("images\\milk.png");
	grape1= iLoadImage("images\\grape.png");
	grape2=iLoadImage("images\\green grape.png");
	orange=iLoadImage("images\\orange.png");


	H.girlImageLoad();

	girl[0][0]=H.girlMove[0][0];
	girl[0][1]=H.girlMove[0][1];
	girl[0][2]=H.girlMove[0][2];
	girl[0][3]=H.girlMove[0][3];
	girl[0][4]=H.girlMove[0][4];
	girl[0][5]=H.girlMove[0][5];
	girl[0][6]=H.girlMove[0][6];

	girl[1][0]=H.girlMove[1][0];
	girl[1][1]=H.girlMove[1][1];
	girl[1][2]=H.girlMove[1][2];
	girl[1][3]=H.girlMove[1][3];
	girl[1][4]=H.girlMove[1][4];
	girl[1][5]=H.girlMove[1][5];
	girl[1][6]=H.girlMove[1][6];


	bar[0]=iLoadImage("Health bar\\01.png");
	bar[1]=iLoadImage("Health bar\\02.png");
	bar[2]=iLoadImage("Health bar\\03.png");
	bar[3]=iLoadImage("Health bar\\04.png");
	bar[4]=iLoadImage("Health bar\\05.png");
	bar[5]=iLoadImage("Health bar\\06.png");
	bar[6]=iLoadImage("Health bar\\07.png");
	bar[7]=iLoadImage("Health bar\\08.png");
	bar[8]=iLoadImage("Health bar\\09.png");
	bar[9]=iLoadImage("Health bar\\10.png");


	expStar=iLoadImage("images\\exp star.jpg");

	basket=iLoadImage("images\\basket.png");
	
	gameOver=iLoadImage("images\\game over page.png");

	sickGirl=iLoadImage("images\\sick.png");

	scoreBackground=iLoadImage("images\\score.png");

	instruction=iLoadImage("images\\ins.jpg");
	

	iStart();


	return 0;
}
