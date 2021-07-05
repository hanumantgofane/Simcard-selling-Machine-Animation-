#include<iostream.h>
#include<stdlib.h>
#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<dos.h>
#include<string.h>
int SIM=0;

 void Adharno()
	{
		 char *adhar;
	    cout<<"\n\t Enter your adhar no==";
	    cout<<"\n\t  your adhar no should be 12 digit==";
	    cin>>adhar;
	    cout<<"\n\tYou adhar number is : "<<adhar;
	}


	void fingure()
	{
	int d,c;
	    cout<<"\n\t matching fingure process=";
	    cout<<"\n\t Enter your fingure process press 1=";
	  cin>>d;
	  if(d==1)
	   {
	   cout<<"\n\t fingure matching processing";
	   }
	   else
	   {
	   cout<<"\n\t no fingure match because you press another key ";
	   }
       }

    void body()
   {
setcolor(YELLOW);
	  line(450,100,600,100); //upper line
	  line(450,100,450,380);//first side line
	  line(450,380,600,380); //lower side
	  line(600,100,600,380); //second lower side

	  line(470,110,470,370);//first another line
	   line(580,110,580,370);//second another side line
	     line(450,110,600,110); //upper2 line

		  line(450,370,600,370); //lower side
		line(470,260,580,260);//middle line
			line(470,300,580,300);//middleline

   }

     void mcwork(int i=0)
 {
      int ch;
	int long mobile;
	int simidea,simair,simvoda,simtatad,ch1;
       char name[50] ;


      cout<<"\n\t1.MOBILE NO \n2.YOUR NAME:\n3.SIMCARD CHOICE:\n4.ADHAR NO:\n5.FINGURE MATCHING:==";
      cout<<"\n\t FOLLOW THE PROCESS PRESS: ";
      cout<<"\n ENTER 1:";

      cin>>ch;

clrscr();cleardevice();
cleardevice();
body();
  switch(ch){
     case 1 : cout<<"\n\t1.IDEA\n\t2.AIRTEL\n\t3.VODAFONE\n\t4.TATADOCOMO";
	  cout<<"\n\n SELECT YOUR CHOICE SIM=";
	  cin>>ch1;
	  switch(ch1){    

	  	case 1:cout<<"\n\t IDEA";SIM=1;
	  cout<<"\n\t CHOICE IDEA NO=";
	  cout<<"\n\n\t1.7875251608";
	  cout<<"\n\t2.7875035318";
	  cout<<"\n\t3.78752001878";
	   cout<<"\n\tYOUR LIKE NO SERIAL NO PRESS= ";
	  cin>>ch;
		 clrscr();cleardevice();
		  cout<<"\n\tYOUR LIKE Number is = ";
	  switch(ch)
	  {

	      case 1:   
		       cout<<"7875251608";
		       break;


	      case 2:  
		     cout<<"7875035318";
		     break;

	      case 3: 
		      cout<<"78752001878";
			 break;
			 default:
		     cout<<"\n\t NO NUMBER AVAILABLE PLEASE CHOICE ANOTHER NO";
		 }		clrscr();cleardevice();
break;
		      

	       case 2:cout<<"\n\t AIRTEL";SIM=2;
	       cout<<"\n\t CHOICE AIRTEL NO=";
	  cout<<"\n\n\t1.7875251608";
	  cout<<"\n\t2.7875035318";
	  cout<<"\n\t3.78752001878";

	   cout<<"\n\tYOUR LIKE NO SERIAL NO PRESS= ";
	  cin>>ch;
	  clrscr();cleardevice();
	  switch(ch)
	  {  case 1: 
		     cout<<"7875251608";
		       break;

	      case 2: 
		     cout<<"7875035318";
		     break;

	      case 3: 
		       cout<<"78752001878";
			 break;
			 default:
		     cout<<"\n\t NO NUMBER AVAILABLE PLEASE CHOICE ANOTHER NO";

	  }	  clrscr();cleardevice();
	  cout<<"\n\tYOUR LIKE Number is = ";
		   switch(ch)
	  {
		 case 1: 
		     cout<<"7875251608";
		       break;

	      case 2: 
		     cout<<"7875035318";
		     break;

	      case 3: cout<<"\n\t YOUR NO IS=" ;
		       cout<<"78752001878";
			 break;
			 default:
		     cout<<"\n\t NO NUMBER AVAILABLE PLEASE CHOICE ANOTHER NO";	
	}

break;
		case 3:cout<<"\n\tVODAFONE";SIM=3;
		cout<<"\n\t CHOICE VODAFONE NO=";
	  cout<<"\n\n\t1.7875251608";
	  cout<<"\n\t2.7875035318";
	  cout<<"\n\t3.78752001878";
	  cout<<"\n\tYOUR LIKE NO SERIAL NO PRESS= ";
	  cin>>ch;
	  clrscr();cleardevice();
	  switch(ch)
	  {  case 1: 
		      cout<<"7875251608";
		       break;

	      case 2: 
		     cout<<"7875035318";
		     break;

	      case 3:
		     cout<<"78752001878";
			 break;
			 default:
		     cout<<"\n\t NO NUMBER AVAILABLE PLEASE CHOICE ANOTHER NO";

	  }	  clrscr();cleardevice();
	  cout<<"\n\tYOUR LIKE Number is = ";
		       switch(ch)
	  {
		 case 1: 
		     cout<<"7875251608";
		       break;

	      case 2: 
		     cout<<"7875035318";
		     break;

	      case 3: cout<<"\n\t YOUR NO IS=" ;
		       cout<<"78752001878";
			 break;
			 default:
		     cout<<"\n\t NO NUMBER AVAILABLE PLEASE CHOICE ANOTHER NO";	
	}
break;

	       case 4:cout<<"\n\t TATADOCOMO";SIM=4;
	       cout<<"\n\t CHOICE TATADOCOMO NO=";
	  cout<<"\n\n\t1.7875251608";
	  cout<<"\n\t2.7875035318";
	  cout<<"\n\t3.78752001878";
	   cout<<"\n\tYOUR LIKE NO SERIAL NO PRESS= ";
	  cin>>ch;
	  clrscr();cleardevice();
	  switch(ch)
	  {
		 case 1: 
		     cout<<"7875251608";
		       break;

	      case 2: 
		     cout<<"7875035318";
		     break;

	      case 3: cout<<"\n\t YOUR NO IS=" ;
		       cout<<"78752001878";
			 break;
			 default:
		     cout<<"\n\t NO NUMBER AVAILABLE PLEASE CHOICE ANOTHER NO";	
	}	  clrscr();cleardevice();
cout<<"\n\tYOUR LIKE Number is = ";	
  switch(ch)
	  {
		       case 1: 
		     cout<<"7875251608";
		       break;

	      case 2: 
		     cout<<"7875035318";
		     break;

	      case 3: 
		       cout<<"78752001878";
			 break;
			 default:
		     cout<<"\n\t NO NUMBER AVAILABLE PLEASE CHOICE ANOTHER NO";

	  }
		       break;

		  default:
		  cout<<"SRY NO SIM AVAILABLE";

	  }//number switch close

	    cout<<"\n\t ENTER YOUR NAME:";
	    flushall();
	    gets(name);
	    cout<<"\n\tYOUR NAME IS:"<<name;

	 Adharno();
	 fingure();


	   switch(SIM)
	  {
	    case 1: cout<<"\n\t your idea simcard =";
	    body();
			for(i=0;i<=130;i++)
		{
			setcolor(YELLOW);
		      line(505,270+i,535,270+i);//simcardupper line
		   line(505,290+i,535,290+i);//simcard lower line
		   line(505,270+i,505,290+i);//simcard side line
		   line(535,270+i,535,290+i);//simcard second line
			delay(50);

			setcolor(RED);
		      settextstyle(1,0,3);
	     outtextxy(200,280,"idea");



				setcolor(BLACK);
		      line(505,270+i,535,270+i);//simcardupper line
		   line(505,290+i,535,290+i);//simcard lower line
		   line(505,270+i,505,290+i);//simcard side line
		   line(535,270+i,535,290+i);//simcard second line
			delay(15);

			setcolor(RED);
		      settextstyle(1,0,3);
	     outtextxy(200,280,"idea");
		 }

setcolor(YELLOW);
		      line(505,270+i,535,270+i);//simcardupper line
		   line(505,290+i,535,290+i);//simcard lower line
		   line(505,270+i,505,290+i);//simcard side line
		   line(535,270+i,535,290+i);//simcard second line
	    body();

		      break;

	     case 2:cout<<"\n\t your Airtel simcard =";
	     body();
			for(i=0;i<=130;i++)
		{
			setcolor(RED);
		      line(505,270+i,535,270+i);//simcardupper line
		   line(505,290+i,535,290+i);//simcard lower line
		   line(505,270+i,505,290+i);//simcard side line
		   line(535,270+i,535,290+i);//simcard second line
			delay(50);

			setcolor(RED);
		      settextstyle(1,0,3);
	     outtextxy(200,280,"Airtel");



				setcolor(BLACK);
		      line(505,270+i,535,270+i);//simcardupper line
		   line(505,290+i,535,290+i);//simcard lower line
		   line(505,270+i,505,290+i);//simcard side line
		   line(535,270+i,535,290+i);//simcard second line
			delay(15);

			setcolor(RED);
		      settextstyle(1,0,3);
	     outtextxy(200,280,"Airtel");


		 }

		 setcolor(RED);
		      line(505,270+i,535,270+i);//simcardupper line
		   line(505,290+i,535,290+i);//simcard lower line
		   line(505,270+i,505,290+i);//simcard side line
		   line(535,270+i,535,290+i);//simcard second line
		   body();


		    break;

	     case 3:cout<<"\n\t your vodafone simcard=";
	     body();
			for(i=0;i<=130;i++)
		{
			setcolor(RED);
		      line(505,270+i,535,270+i);//simcardupper line
		   line(505,290+i,535,290+i);//simcard lower line
		   line(505,270+i,505,290+i);//simcard side line
		   line(535,270+i,535,290+i);//simcard second line
			delay(50);

			setcolor(RED);
		      settextstyle(1,0,3);
	     outtextxy(200,280,"vodafone");



				setcolor(BLACK);
		      line(505,270+i,535,270+i);//simcardupper line
		   line(505,290+i,535,290+i);//simcard lower line
		   line(505,270+i,505,290+i);//simcard side line
		   line(535,270+i,535,290+i);//simcard second line
			delay(15);

			setcolor(RED);
		      settextstyle(1,0,3);
	     outtextxy(200,280,"vodafone");


		 }
	setcolor(RED);
		      line(505,270+i,535,270+i);//simcardupper line
		   line(505,290+i,535,290+i);//simcard lower line
		   line(505,270+i,505,290+i);//simcard side line
		   line(535,270+i,535,290+i);//simcard second line
		   body();

		   break;

	      case 4:cout<<"\n\t your Tatadocomo simcard=";
	      body();
			for(i=0;i<=130;i++)
		{
			setcolor(BLUE);
		      line(505,270+i,535,270+i);//simcardupper line
		   line(505,290+i,535,290+i);//simcard lower line
		   line(505,270+i,505,290+i);//simcard side line
		   line(535,270+i,535,290+i);//simcard second line
			delay(50);

			setcolor(BLUE);
		      settextstyle(1,0,3);
	     outtextxy(200,280,"Tatadocomo");



				setcolor(BLACK);
		      line(505,270+i,535,270+i);//simcardupper line
		   line(505,290+i,535,290+i);//simcard lower line
		   line(505,270+i,505,290+i);//simcard side line
		   line(535,270+i,535,290+i);//simcard second line
			delay(15);

			setcolor(BLUE);
		      settextstyle(1,0,3);
	     outtextxy(200,280,"Tatadocomo");


		 }
setcolor(BLUE);
		      line(505,270+i,535,270+i);//simcardupper line
		   line(505,290+i,535,290+i);//simcard lower line
		   line(505,270+i,505,290+i);//simcard side line
		   line(535,270+i,535,290+i);//simcard second line
		   body();

		   break;


	    default:

	   cout<<"\n\t no sim";

	  }
}
}



	

   void main()
 {int c;
 clrscr();
 int gd=DETECT,gm;
 initgraph(&gd,&gm,"c:\\tc\\bgi");
       body();
	 mcwork();
	 

   getch();
   closegraph();
 }





