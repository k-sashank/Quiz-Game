#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
void help();
int main()
     {
     int score,r,r1,count,i,n;
     char choice;
     char playername[20];
     mainhome:
     system("cls");
     printf("\t\t\t\t THE QUIZ\n");
     printf("\n\t\t\t\t   WELCOME ");
     printf("\n\t\t\t\t      to ");
     printf("\n\t\t\t\t   THE GAME ");
     printf("\n\n");
     printf("\n\t\t > Press S to start the game");
     printf("\n\t\t > press H for help            ");
     printf("\n\t\t > press Q to quit             ");
     choice=toupper(getch());
    if (choice=='H')
	{
	help();
	getch();
	goto mainhome;
	}
	else if (choice=='Q')
	return;
    else if(choice=='S')
    {
     system("cls");
    printf("\n\t\t\tEnter your name:");
     gets(playername);

    system("cls");
    printf("\n Welcome %s to The Quiz Game",playername);
    printf("\n\n Here are some tips you might wanna know before playing:");
    printf("\n");
    printf("\n >> There are 2 rounds in this Quiz Game,WARMUP ROUND & CHALLANGE ROUND");
    printf("\n >> In warmup round you will be asked a total of 6 questions to test your");
    printf("\n    general knowledge. You are eligible to play the game if you give atleast 4");
    printf("\n    right answers, otherwise you can't proceed further to the Challenge Round.");
    printf("\n >> Your game starts with CHALLANGE ROUND. In this round you will be asked a");
    printf("\n    total of 10 questions. Each right answer will be awarded $100,000!");
    printf("\n    By this way you can win upto ONE MILLION cash prize!!!!!..........");
    printf("\n >> You will be given 4 options and you have to press A, B ,C or D for the");
    printf("\n    right option.");
    printf("\n >> You will be asked questions continuously, till right answers are given");
    printf("\n >> No negative marking for wrong answers!");
    printf("\n\n\tALL THE BEST");
    printf("\n\n\n Press Y  to start the game!\n");
    printf("\n Press any other key to return to the main menu!");
    if (toupper(getch())=='Y')
		{
		    goto home;
        }
	else
		{
        goto mainhome;
       system("cls");
       }

     home:
     system("cls");
     count=0;
     for(i=1;i<=6;i++)
     {
    system("cls");
     r1=i;


     switch(r1)
		{
		case 1:
		printf("\n\nWhich of the following is a Palindrome number?");
		printf("\n\nA.42042\t\tB.101010\n\nC.23232\t\tD.01234");
		if (toupper(getch())=='C')
			{
			    printf("\n\nCorrect!!!");
				count++;
			    getch();
			    break;
}
		else
		       {
		           printf("\n\nWrong!!! The correct answer is C.23232");
		           getch();
		       break;
		       }

        case 2:
		printf("\n\n\nJoule is the unit of");
		printf("\n\nA.temperature\t\tB.pressure\n\nC.energy\t\tD.heat");
		if (toupper(getch())=='C')
			{
			printf("\n\nCorrect!!!");
			count++;
			getch();
			break;
			}
		else
		       {
			   printf("\n\nWrong!!! The correct answer is C.energy");
		       getch();
		       break;
			   }

        case 3:
		printf("\n\n\nKiran Bedi is");
		printf("\n\nA.first woman IAS officer\t\tB.first woman IPS officer\n\nC.first woman advocate\t\tD.first woman judge");
		if (toupper(getch())=='B')
			{
			printf("\n\nCorrect!!!");
			count++;
			getch();
			break;
			}
		else
		       {
			   printf("\n\nWrong!!! The correct answer is B.first woman IPS officer");
		       getch();
		       break;
			   }

        case 4:
		printf("\n\n\nNormally the Commonwealth Games are held at intervals of");
		printf("\n\nA.3 Years\t\tB.4 Years\n\nC.5 Years\t\tD.6 Years");
		if (toupper(getch())=='B')
			{
			printf("\n\nCorrect!!!");
			count++;
			getch();
			 break;
			 }
		else
		       {
			   printf("\n\nWrong!!! The correct answer is B.4 Years");
		       getch();
		       break;
			   }

        case 5:
        printf("\n\n\nWhich is the third highest mountain in the world?");
        printf("\n\nA.Mt. K2\t\tB.Mt. Kanchanjungha\n\nC.Mt. Makalu\t\tD.Mt. Kilimanjaro");
        if (toupper(getch())=='B')
               {
			   printf("\n\nCorrect!!!");
			   count++;
               getch();
               break;
			   }
        else
		       {
			   printf("\n\nWrong!!! The correct answer is B.Mt. Kanchanjungha");
		       getch();
		       break;
			   }

        case 6:
		printf("\n\n\nWhich international batsman has the highest career batting average?");
		printf("\n\nA.A Viv Richars\t\tB.Sachin Tendulkar\n\nC.Virat Kohli\t\tD.Brian Lara");
		if (toupper(getch())=='A' )
			{
			printf("\n\nCorrect!!!");
			count++;
			getch();
			break;
			}
		else
		       {
			   printf("\n\nWrong!!! The correct answer is A.Viv Richards");
		       getch();
		       break;
			   }
			   }
		       }

	if(count>=4)
	{
	goto test;
	}
	else
	{
	system("cls");
	printf("\n\nSORRY YOU ARE NOT ELIGIBLE TO PLAY THIS GAME, BETTER LUCK NEXT TIME");
	getch();
	goto mainhome;
	}
     test:
     system("cls");
     printf("\n\n\tCONGRATULATIONS %s. You are eligible to play the Game",playername);
     printf("\n\n\n\n\tPress enter key to Start the Game!");
     if(toupper(getch())=='p')
		{
		goto game;
		}
game:
     score=0;
     for(i=1;i<=20;i++)
     {
	 system("cls");
     r=i;

     switch(r)
		{
		case 1:
		printf("\n\nEntomology is the science that studies");
		printf("\n\nA.Behavior of human beings\t\tB.Insects\n\nC.The origin and history of technical and scientific terms\t\tD.The formation of rocks");
		if (toupper(getch())=='B')
			{
			printf("\n\nCorrect!!!");
			score++;
			getch();
			 break;
			 getch();
			 }
		else
		       {
			   printf("\n\nWrong!!! The correct answer is B.Insects");getch();
		       goto score;
		       break;
			   }

		case 2:
		printf("\n\n\nStudy of Earthquake is called");
		printf("\n\nA.Seismology\t\tB.Cosmology\n\nC.Orology\t\tD.Etimology");
		if (toupper(getch())=='A')
			{
			printf("\n\nCorrect!!!");
			score++;
			getch();
			 break;
			 }
		else
		       {
			   printf("\n\nWrong!!! The correct answer is A.Seismology");getch();
		      goto score;
		       break;
		       }

        case 3:
		printf("\n\n\nGarampani sanctuary is located at ");
		printf("\n\nA.Junagarh, Gujarat\t\tB.Diphu, Assam\n\nC.Kohima, Nagaland\t\tD.Gangtok, Sikkim");
		if (toupper(getch())=='B')
			{
			printf("\n\nCorrect!!!");
			score++;
			getch();
			 break;
			 }
		else
		       {
			   printf("\n\nWrong!!! The correct answer is B.Diphu, Assam");
			   getch();
		       goto score;
		       break;
			   }

        case 4:
		printf("\n\n\nThe Laws of Electromagnetic Induction were given by");
		printf("\n\nA.Faraday\t\tB.Tesla\n\nC.Maxwell\t\tD.Coulomb");
		if (toupper(getch())=='A')
			{
			printf("\n\nCorrect!!!");
			score++;
			getch();
			 break;
			 }
		else
		       {
                printf("\n\nWrong!!! The correct answer is A.Faraday");getch();
		       goto score;
		       break;
		       }

        case 5:
		printf("\n\n\nGalileo was an Italian astronomer who");
		printf("\n\nA.developed the telescope\t\tB.discovered four satellites of Jupiter\n\nC.discovered that the movement of pendulum produces a regular time measurement\t\tD.All of the above");
		if (toupper(getch())=='D')
			{
			printf("\n\nCorrect!!!");
			score++;
			getch(); 
			break;
			}
		else
		       {
		           printf("\n\nWrong!!! The correct answer is D.All of the above");
		       getch();
		       goto score;
		       break;
		       }

		case 6:
		printf("\n\n\nFirst Afghan War took place in");
		printf("\n\nA.1839\t\tB.1843\n\nC.1833\t\tD.1848");
		if (toupper(getch())=='A' )
			{
			printf("\n\nCorrect!!!");
			score++;
			getch();
			 break;
			 }
		else
		       {
			   printf("\n\nWrong!!! The correct answer is A.1839");
			   goto score;
		       getch();
		       break;
			   }

        case 7:
		printf("\n\n\nWhat is the National Name of Japan?");
		printf("\n\nA.Polska\t\tB.Hellas\n\nC.Drukyul\t\tD.Nippon");
		if (toupper(getch())=='D')
			{
			printf("\n\nCorrect!!!");
			score++;
			getch();
			 break;
			 }
		else
		       {
			   printf("\n\nWrong!!! The correct answer is D.Nippon");getch();
		       goto score;
		       break;
			   }

        case 8:
		printf("\n\n\nFilm and TV institute of India is located at");
		printf("\n\nA.Pune (Maharashtra)\t\tB.Rajkot (Gujarat)\n\nC.Pimpri (Maharashtra)\t\tD.Perambur (Tamil Nadu)");
		if (toupper(getch())=='A')
			{
			printf("\n\nCorrect!!!");
			score++;
			getch(); 
			break;
			}
		else
		       {
			   printf("\n\nWrong!!! The correct answer is A.Pune (Maharashtra)");
			   getch();
		       goto score;
		       break;
			   }

        case 9:
		printf("\n\n\nWhat is the capital of Denmark?");
		printf("\n\nA.Copenhagen\t\tB.Helsinki\n\nC.Ajax\t\tD.Galatasaray");
		if (toupper(getch())=='A')
			{
			printf("\n\nCorrect!!!");
			score++; 
			getch();
			break;
			}
		else
		       {
			   printf("\n\nWrong!!! The correct answer is A.Copenhagen");
			   getch();
		       goto score;
		       break;
			   }

        case 10:
		printf("\n\n\nWhich is the longest River in the world?");
		printf("\n\nA.Nile\t\tB.Koshi\n\nC.Ganga\t\tD.Amazon");
		if (toupper(getch())=='A')
			{
			printf("\n\nCorrect!!!");
			score++;
			getch(); break;
			}
		else
		       {
			   printf("\n\nWrong!!! The correct answer is A.Nile");
			   getch();
			   break;
			   goto score;}

        case 11:
		printf("\n\n\nThe ozone layer restricts");
		printf("\n\nVisible light\t\tB.Infrared radiation\n\nC.X-rays and gamma rays\t\tD.Ultraviolet radiation");
		if (toupper(getch())=='C')
			{
			printf("\n\nCorrect!!!");
			score++;
			getch();
			 break;
			 }
		else
              {
			  printf("\n\nWrong!!! The correct answer is D.Ultraviolet radiation");
			  getch();
              break;
			  goto score;}

        case 12:
		printf("\n\n\nWhich city is known at 'The City of Seven Hills'?");
		printf("\n\nA.Rome\t\tB.Vactican City\n\nC.Madrid\t\tD.Berlin");
		if (toupper(getch())=='A')
			  {
			  printf("\n\nCorrect!!!");
			  score++;
			  getch();
			   break;
			   }
		else
              {
			  printf("\n\nWrong!!! The correct answer is A.Rome");
			  getch();
              break;
			  goto score;
			  }

		case 13:
		printf("\n\n\nEcology deals with");
		printf("\n\nA.Birds\t\tB.Cell formation\n\nC.Relation between organisms and their environment\t\tD.Tissues");
		if (toupper(getch())=='D')
			{
			printf("\n\nCorrect!!!");
			score++;getch();
			break;
			}
		else
		       {
			   printf("\n\nWrong!!! The correct answer is C.Relation between organisms and their environment");
			   getch();
		       break;
			   goto score;
			   }

        case 14:
		printf("\n\n\nDRDL stands for");
		printf("\n\nA.Defence Research and Development Laboratary\t\tB.Department of Research and Development Laboratory\n\nC.Differential Research and Documentation Laboratary\t\tD.None of the above");
		if (toupper(getch())=='A')
			{
			printf("\n\nCorrect!!!");
			score++;
			getch();
			 break;
			 }
		else
		       {
			   printf("\n\nWrong!!! The correct answer is A.Defence Research and Development Laboratary");
			   getch();
		       break;
			   goto score;}

		case 15:
		printf("\n\n\nWhich Blood Group is known as the Universal Recipient?");
		printf("\n\nA.A\t\tB.AB\n\nC.B\t\tD.O");
		if (toupper(getch())=='B')
			{
			printf("\n\nCorrect!!!");
			score++;
			getch();
			 break;
			 }
		else
		       {printf("\n\nWrong!!! The correct answer is B.AB");getch();
		       goto score;
		       break;}

		case 16:
		printf("\n\n\nWhat is the unit of measurement of distance between Stars?");
		printf("\n\nA.Light Year\t\tB.Coulomb\n\nC.Nautical Mile\t\tD.Kilometer");
		if (toupper(getch())=='A')
			{
			printf("\n\nCorrect!!!");
			score++; 
			getch();
			break;
			}
		else
		       {
			   printf("\n\nWrong!!! The correct answer is A.Light Year");getch();
		       goto score;
		       break;
			   }


		case 17:
		printf("\n\n\nThe headquarters of UNO are situated at");
		printf("\n\nA.New York, USA	\t\tB.Hague (Netherlands)\n\nC.Geneva\t\tD.Paris");
		if (toupper(getch())=='A')
			{
			printf("\n\nCorrect!!!");
			score++; 
			getch();
			break;
			}
		else
		       {
			   printf("\n\nWrong!!! The correct answer is A.New York, USA");
			   getch();
			   goto score;
		       break;
			   }

		case 18:
		printf("\n\n\nWind speed is measured by");
		printf("\n\nA.Lysimeter\t\tB.Air vane\n\nC.Hydrometer\t\tD.Anemometer\n\n");
		if (toupper(getch())=='D')
			{
			printf("\n\nCorrect!!!");
			score++; 
			getch();
			break;
			}
		else
		       {
			   printf("\n\nWrong!!! The correct answer is D.Anemometer");
			   getch();
			   goto score;
		       break;
			   }

		case 19:
		printf("\n\n\nHockey was introduced in the Asian Games in");
		printf("\n\nA.1958 in Tokyo\tB.1962 in Jakarta\n\nC.1966 in Bangkok\tD.1970 in Bangkok\n\n");
		if (toupper(getch())=='A')
			{
			printf("\n\nCorrect!!!");
			score++; 
			getch();
			break;
			}
		else
		       {
			   printf("\n\nWrong!!! The correct answer is A.1958");
			   getch();
			   goto score;
		       break;
			   }

		case 20:
		printf("\n\n\nWhich hardware was used in the First Generation Computer?");
		printf("\n\nA.Transistor\t\tB.Valves\n\nC.I.C\t\tD.S.S.I");
		if (toupper(getch())=='B')
			{
			printf("\n\nCorrect!!!");
			score++; 
			getch();
			break;
			}
		else
		       {
			   printf("\n\nWrong!!! The correct answer is B.Valves");
			   getch();
			   goto score;
		       break;
			   }
			   }
			   }
	score:
    system("cls");
	if(score>0 && score<20)
	{
	   printf("\n\n\t\tCONGRATULATIONS");
	   printf("\n\t You scored %d points",score);
	   goto go;
		 }

	 else if(score==20)
	{
	    printf("\n\n\n \t\tCONGRATULATION");
	    printf("\n\t\t You scored %d points",score);
	    printf("\t\t Thank You!!");
	}
	 else
{
	    printf("\n\n\tSORRY YOU DIDN'T WIN");
	    printf("\n\t\t Thanks for your participation");
	    printf("\n\t\t TRY AGAIN");
		goto go;
		}

	go:
	puts("\n\n Press Y if you want to play next game");
	puts(" Press any key if you want to go main menu");
	if (toupper(getch())=='Y')
		goto home;
	else
		{
		goto mainhome;
		}
		}
		}

void help()
	{
	system("cls");
    printf("\n\n                              HELP");
    printf("\n                               Quiz Game              ");
    printf("\n >> There are two rounds in the game, WARMUP ROUND & CHALLANGE ROUND");
    printf("\n >> In warmup round you will be asked a total of 3 questions to test your general");
    printf("\n    knowledge. You will be eligible to play the game if you can give atleast 2");
    printf("\n    right answers otherwise you can't play the Game.");
    printf("\n >> Your game starts with the CHALLANGE ROUND. In this round you will be asked");
    printf("\n    total 10 questions each right answer will be awarded 1 point.");
    printf("\n >> You will be given 4 options and you have to press A, B ,C or D for the");
    printf("\n    right option");
    printf("\n >> You will be asked questions continuously if you keep giving the right answers.");
    printf("\n >> No negative marking for wrong answers");

	printf("\n\n\t                BEST OF LUCK                   ");
	}


