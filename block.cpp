//Il file deve essere eseguito come amministratore e blocca l'input da tastiera

#include <iostream>
#include <windows.h>
#include <winable.h>
#include <unistd.h>

int main(){
	BlockInput(true);
	sleep(300);//blocca l'input per 5 minuti

	BlockInput(false);
	return 0;
}