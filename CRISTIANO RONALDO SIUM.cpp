//virus simpatico e innocuo
#include <iostream>
int main(void){
	
	//tutte le variabili sono counter
	int a=1,b=1,c=1,d=1,e=1,f=1,z=1;
	
	//visualizzazione della schermata esplicativa del comando cmd color
	system("color /?");
	
	//stampa a video due messaggi con diversi colori
	do
	{
		a=a+1;
		if(a%2==0)
		{
			system("color cf");
			printf("?!I MISSED THE RAGE!?\n");
		}
		else
		{
			system("color fc");
			printf("?!I MISSED HER AGE!?\n");
		}
	}
	while(a<30);
	
	//cambia colore
	system("color b3");

	//stampa ripetutamente un messaggio a video
	do
	{
		b=b+1;
		printf("COMPUTER IS ABSOLUTELY NOT EXPLODING\n");
	}
	while(b<60);

	//stampa un messaggio complesso
	printf("|----------|   ----     ----    /----------|       -------\n");
	printf("|                |       |     |                   /      |\n");
	printf("|----------|     |       |     |                  /--------|\n");
	printf("           |     |       |     |                 /          |\n");
	printf("|----------|      |_____/       |----------|   _/_          _|_\n\n");
	
	//alterna ripetutamente 2 colori
	do
	{
		z=z+1;
		if(z%2==0)
		{
			system("color f5");
		}
		else
		{
			system("color 24");
		}
	}
	while(z<150);

	//stampa ripetutamente un messaggio alternando due colori
	while(c<51)
	{
		c=c+1;
		printf("\nERROR");
	
		if(c%3==0)
		{
			system("color 0c");
		}
		else
		{
			system("color c0");
		}
	};
	
	//cambia colore
	system("color 0f");
	
	//attiva un countdown fasullo (i secondi vanno in negativo)
	do
	{
		e=e+1;
		f=f+1;
		printf("Reparing errors. %d seconds remaning.",100-e);
		system("cls");
	}
	while(e<150||f<150);
	
	//stampa di un messaggio semplice
	printf("\nCOMPUTER IS EXPLODING... we are so sorry.");
	
	//apertura di alcune schede command prompt
	do
	{
		d=d+1;
		system("start");
	}
	while(d<60);

	//apre l'applicazione "Valorant"
	system("cd ../../../../../../../../../../../../../../../../ && cd C:/ProgramData/Microsoft/Windows/Start?Menu/Programs/Riot?games && start Valorant");

	//attiva un countdown
	do
	{
		e=e+1;
		f=f+1;
		printf("System is shutting down in %d seconds",150-e);
		system("cls");
	}
	while(e<150||f<150);
	
	//spegne il computer
	system("shutdown /s /t 15 /c Virus?rilevato");

}