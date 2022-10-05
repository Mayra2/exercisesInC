#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
void show_record();
void reset_score();
void help();
void edit_score(float , char []);
int main()
     {
     int r,count,i;
     float score;
     char choice;

     home:
    printf("Dobrodosli u kviz opceg znanja!\n");
    printf("********************************\n");
    printf("Za pokretanje kviza upisite S, za izlazak Q:\n");

     choice=toupper(getch());
	if (choice=='Q')
	exit(1);
    else if(choice=='S'){

    system("cls");
    printf("Odabrali ste start. Da biste pobijedili morate tacno odgovoriti na 5 pitanja.\n");
    printf("Ponudjene su vam 3 mogucnosti pod A, B ili C. Kviz pocinje. Pripremite se! \n");
    printf("********************************\n");
    printf("Odaberite S za pocetak!\n");
    printf("Odaberite bilo sta drugo da biste se vratili na glavni meni!\n");
    if (toupper(getch())=='S')
		{
		    goto game;
        }
	else
		{
        goto home;
       system("cls");
       }

     game:
     system("cls");
     count=0;
     for(i=1;i<=5;i++){
        system("cls");
        r=i;


     switch(r)
		{
		case 1:
		printf("Sta se ispituje anketama?\n");
		printf("A. Glas naroda \t B. Glas rauzma\t C. Dobar glas\n ");
		if (toupper(getch())=='A'){
			    printf("Tacno!!!");count++;
			    getch();
			    break;
            }else{
		           printf("Netacno, tacan odgovor je pod C.");
		           getch();
		       break;
		       }

        case 2:
		printf("Magnet najvise privlaci:\n");
		printf("A. Plastiku \t B. Metal\t C. Drvo\n");
		if (toupper(getch())=='B'){
            printf("Tacno!!!");count++;
                getch();
                break;
            }else{
            printf("Netacno, tacan odgovor je pod B.");
		       getch();
		       break;
                }

        case 3:
		printf("Koja rijec u igri 'Kaladont' vodi u poraz?\n");
		printf("A. Zubi \t B. Kvaka\t C. Jakna\n");
		if (toupper(getch())=='B'){
			    printf("Tacno!!!");count++;
                getch();
                break;
                }else{
		           printf("Netacno, tacan odgovor je pod B.");
                   getch();
                   break;
                    }

        case 4:
		printf("Koju titulu dijele historijske licnosti Katarina i Aleksandar?\n");
		printf("A. Velika/veliki \t B. Mocna/mocni\t C. Plemenita/plemeniti\n");
		if (toupper(getch())=='A'){
			    printf("Tacno!!!");count++;
			getch();
			 break;
			 }else{
                printf("Netacno, tacan odgovor je pod A.");
		        getch();
		        break;
		        }

        case 5:
        printf("Sta radi Druzba Pere Kvrzice?\n");
        printf("A. Cisti tavan \t B. Razgrce snijeg\t C.Obnavlja mlin\n");
        if (toupper(getch())=='C'){

                printf("Tacno!!!");count++;
                getch();
                break;
        }else{
                printf("Netacno, tacan odgovor je pod C.");
		       getch();
		       break;}

        case 6:
		printf("Koje od ovih imena nije u naslovu Shakespearovog djela?\n");
		printf("A. Macbeth\t B. Darren\t C. Hamlet\n ");
		if (toupper(getch())=='B' ){

            printf("Tacno!!!");count++;
			getch();
			break;
			}else{
		           printf("Netacno, tacan odgovor je pod B.");
		       getch();
		       break;}}
		       }

	if(count==5)
	{
	    goto score;
	}
	else
	{
	system("cls");
	printf("Izgubili ste. Vise srece drugi put\n");
	getch();
	goto home;
	}

	score:
    system("cls");
	score=(float)count*100000;
	if(score>0.00 && score<1000000)
	{
	   printf("Cestitamo osvojili ste %.2f\n", score);
	}else
	printf("Niste nista osvojili\n");

}
return 0;
}

