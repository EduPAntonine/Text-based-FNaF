/*
projeto fnaf

etapas:
	definicao mapas ascii:
		sala
		sala + animatronics porta
		sala + animatronics ataque
		tela final
	
autor: Eduardo
*/

#include<cstdlib>
#include<iostream>
#include<random>
#include<ctime>

using namespace std;

main(){
	system("CLS");
	
	string animatronicd, animatronice;
	int pd, pe, ninguem, bonnie, freddy, chica, portad, portae, lantd, lante;
	
	srand((unsigned)time(0)); 
    portad = rand() % 4;
	portae = rand() % 4;
	
	ninguem = 0;
	bonnie = 0;
	freddy = 0;
	chica = 0;
	
	switch(portad)
	{
		case 0 : ninguem = 1;
		case 1 : bonnie = 1;
		case 2 : freddy = 1;
		case 3 : chica = 1;
	}
	
	switch(portae)
	{
		case 0 : ninguem = 1;
		case 1 : bonnie = 1;
		case 2 : freddy = 1;
		case 3 : chica = 1;
	}
	
	if(portad == portae){
		portad = 0;
	}
	
	cout << "\n******************************************************************"
		 << "\n******************************************************************"
		 << "\n******************************************************************"
		 << "\n******************************************************************"
		 << "\n******************************************************************"
		 << "\n  **************************************************************  "
		 << "\n**  *********************************************************  ***"
		 << "\n****  *****************************************************  *****"
		 << "\n******  *************************************************  *******"
		 << "\n********  *********************************************  *********"
		 << "\n**********  *****************************************  ***********"
		 << "\n**********  *****************************************  ***********"
		 << "\n**********  *****************************************  ***********"
		 << "\n**********  *****************************************  ***********"
		 << "\n**********  *****************************************  ***********"
		 << "\n**********  *****************************************  ***********"
		 << "\n**********  *****************************************  ***********"
		 << "\n**********  *****************************************  ***********"
		 << "\n**********  *****************************************  ***********"
		 << "\n**********  *****************************************  ***********"
		 << "\n**********  *****************************************  ***********"
		 << "\n**********  *****************************************  ***********"
		 << "\n**********  *****************************************  ***********"
		 << "\n**********  *****************************************  ***********"
		 << "\n**********  *****************************************  ***********"
		 << "\n**********  *****************************************  ***********"
		 << "\n**********  *****************************************  ***********"
		 << "\n**********  *****************************************  ***********"
		 << "\n**********  *****************************************  ***********"
		 << "\n**********  *****************************************  ***********"
		 << "\n**********  *****************************************  ***********";
	
	cout << "\nluz direita> "; cin >> lantd;
	if(portad == 0 && lantd == 1)
	{
		system("CLS");
		cout << "\nninguem\n";
	}
	
	if(portad == 1 && lantd == 1)
	{
		system("CLS");
		cout << "\nbonnie\n";
	}
	
	if(portad == 2 && lantd == 1)
	{
		system("CLS");
		cout << "\nfreddy\n";
	}
	
	if(portad == 3 && lantd == 1)
	{
		system("CLS");
		cout << "\nchica\n";
	}

	cout << "\nporta direita> "; cin >> pd;
	if(portad == 0 && pd == 1)
	{
		system("CLS");
		cout << "\n******************************************************************"
		 << "\n******************************************************************"
		 << "\n******************************************************************"
		 << "\n******************************************************************"
		 << "\n******************************************************************"
		 << "\n  **************************************************************  "
		 << "\n    *********************************************************  ***"
		 << "\n      *****************************************************  *****"
		 << "\n        *************************************************  *******"
		 << "\n          *********************************************  *********"
		 << "\n            *****************************************  ***********"
		 << "\n            *****************************************  ***********"
		 << "\n            *****************************************  ***********"
		 << "\n            *****************************************  ***********"
		 << "\n            *****************************************  ***********"
		 << "\n            *****************************************  ***********"
		 << "\n            *****************************************  ***********"
		 << "\n            *****************************************  ***********"
		 << "\n            *****************************************  ***********"
		 << "\n            *****************************************  ***********"
		 << "\n            *****************************************  ***********"
		 << "\n            *****************************************  ***********"
		 << "\n            *****************************************  ***********"
		 << "\n            *****************************************  ***********"
		 << "\n            *****************************************  ***********"
		 << "\n            *****************************************  ***********"
		 << "\n            *****************************************  ***********"
		 << "\n            *****************************************  ***********"
		 << "\n            *****************************************  ***********"
		 << "\n            *****************************************  ***********"
		 << "\n            *****************************************  ***********";
		cout << "\nninguem saiu\n";
	}
	
	if(portad == 1 && pd == 1)
	{
		system("CLS");
		cout << "\n******************************************************************"
		 << "\n******************************************************************"
		 << "\n******************************************************************"
		 << "\n******************************************************************"
		 << "\n******************************************************************"
		 << "\n  **************************************************************  "
		 << "\n    *********************************************************  ***"
		 << "\n      *****************************************************  *****"
		 << "\n        *************************************************  *******"
		 << "\n          *********************************************  *********"
		 << "\n            *****************************************  ***********"
		 << "\n            *****************************************  ***********"
		 << "\n            *****************************************  ***********"
		 << "\n            *****************************************  ***********"
		 << "\n            *****************************************  ***********"
		 << "\n            *****************************************  ***********"
		 << "\n            *****************************************  ***********"
		 << "\n            *****************************************  ***********"
		 << "\n            *****************************************  ***********"
		 << "\n            *****************************************  ***********"
		 << "\n            *****************************************  ***********"
		 << "\n            *****************************************  ***********"
		 << "\n            *****************************************  ***********"
		 << "\n            *****************************************  ***********"
		 << "\n            *****************************************  ***********"
		 << "\n            *****************************************  ***********"
		 << "\n            *****************************************  ***********"
		 << "\n            *****************************************  ***********"
		 << "\n            *****************************************  ***********"
		 << "\n            *****************************************  ***********"
		 << "\n            *****************************************  ***********";
		cout << "\nbonnie saiu\n";
	}
	
	if(portad == 2 && pd == 1)
	{
		system("CLS");
		cout << "\n******************************************************************"
		 << "\n******************************************************************"
		 << "\n******************************************************************"
		 << "\n******************************************************************"
		 << "\n******************************************************************"
		 << "\n  **************************************************************  "
		 << "\n    *********************************************************  ***"
		 << "\n      *****************************************************  *****"
		 << "\n        *************************************************  *******"
		 << "\n          *********************************************  *********"
		 << "\n            *****************************************  ***********"
		 << "\n            *****************************************  ***********"
		 << "\n            *****************************************  ***********"
		 << "\n            *****************************************  ***********"
		 << "\n            *****************************************  ***********"
		 << "\n            *****************************************  ***********"
		 << "\n            *****************************************  ***********"
		 << "\n            *****************************************  ***********"
		 << "\n            *****************************************  ***********"
		 << "\n            *****************************************  ***********"
		 << "\n            *****************************************  ***********"
		 << "\n            *****************************************  ***********"
		 << "\n            *****************************************  ***********"
		 << "\n            *****************************************  ***********"
		 << "\n            *****************************************  ***********"
		 << "\n            *****************************************  ***********"
		 << "\n            *****************************************  ***********"
		 << "\n            *****************************************  ***********"
		 << "\n            *****************************************  ***********"
		 << "\n            *****************************************  ***********"
		 << "\n            *****************************************  ***********";
		cout << "\nfreddy saiu\n";
	}
	
	if(portad == 3 && pd == 1)
	{
		system("CLS");
		cout << "\n******************************************************************"
		 << "\n******************************************************************"
		 << "\n******************************************************************"
		 << "\n******************************************************************"
		 << "\n******************************************************************"
		 << "\n  **************************************************************  "
		 << "\n    *********************************************************  ***"
		 << "\n      *****************************************************  *****"
		 << "\n        *************************************************  *******"
		 << "\n          *********************************************  *********"
		 << "\n            *****************************************  ***********"
		 << "\n            *****************************************  ***********"
		 << "\n            *****************************************  ***********"
		 << "\n            *****************************************  ***********"
		 << "\n            *****************************************  ***********"
		 << "\n            *****************************************  ***********"
		 << "\n            *****************************************  ***********"
		 << "\n            *****************************************  ***********"
		 << "\n            *****************************************  ***********"
		 << "\n            *****************************************  ***********"
		 << "\n            *****************************************  ***********"
		 << "\n            *****************************************  ***********"
		 << "\n            *****************************************  ***********"
		 << "\n            *****************************************  ***********"
		 << "\n            *****************************************  ***********"
		 << "\n            *****************************************  ***********"
		 << "\n            *****************************************  ***********"
		 << "\n            *****************************************  ***********"
		 << "\n            *****************************************  ***********"
		 << "\n            *****************************************  ***********"
		 << "\n            *****************************************  ***********";
		cout << "\nchica saiu\n";
	}
	
	cout << "\nluz esquerda> "; cin >> lante;
	if(portae == 0 && lante == 1)
	{
		cout << "\nninguem\n";
	}
	
	if(portae == 1 && lante == 1)
	{
		cout << "\nbonnie\n";
	}
	
	if(portae == 2 && lante == 1)
	{
		cout << "\nfreddy\n";
	}
	
	if(portae == 3 && lante == 1)
	{
		cout << "\nchica\n";
	
	}
		
	cout << "\nporta esquerda> "; cin >> pe;
	if(portae == 0 && pe == 1)
	{
		system("CLS");
		cout << "\n******************************************************************"
		 << "\n******************************************************************"
		 << "\n******************************************************************"
		 << "\n******************************************************************"
		 << "\n******************************************************************"
		 << "\n  **************************************************************  "
		 << "\n**  *********************************************************  ***"
		 << "\n****  *****************************************************  *****"
		 << "\n******  *************************************************  *******"
		 << "\n********  *********************************************  *********"
		 << "\n**********  *****************************************  ***********"
		 << "\n**********  *****************************************  ***********"
		 << "\n**********  *****************************************  ***********"
		 << "\n**********  *****************************************  ***********"
		 << "\n**********  *****************************************  ***********"
		 << "\n**********  *****************************************  ***********"
		 << "\n**********  *****************************************  ***********"
		 << "\n**********  *****************************************  ***********"
		 << "\n**********  *****************************************  ***********"
		 << "\n**********  *****************************************  ***********"
		 << "\n**********  *****************************************  ***********"
		 << "\n**********  *****************************************  ***********"
		 << "\n**********  *****************************************  ***********"
		 << "\n**********  *****************************************  ***********"
		 << "\n**********  *****************************************  ***********"
		 << "\n**********  *****************************************  ***********"
		 << "\n**********  *****************************************  ***********"
		 << "\n**********  *****************************************  ***********"
		 << "\n**********  *****************************************  ***********"
		 << "\n**********  *****************************************  ***********"
		 << "\n**********  *****************************************  ***********";
		cout << "\nninguem saiu\n";
	}
	
	if(portae == 1 && pe == 1)
	{
		system("CLS");
		cout << "\n******************************************************************"
		 << "\n******************************************************************"
		 << "\n******************************************************************"
		 << "\n******************************************************************"
		 << "\n******************************************************************"
		 << "\n  **************************************************************  "
		 << "\n**  *********************************************************  ***"
		 << "\n****  *****************************************************  *****"
		 << "\n******  *************************************************  *******"
		 << "\n********  *********************************************  *********"
		 << "\n**********  *****************************************  ***********"
		 << "\n**********  *****************************************  ***********"
		 << "\n**********  *****************************************  ***********"
		 << "\n**********  *****************************************  ***********"
		 << "\n**********  *****************************************  ***********"
		 << "\n**********  *****************************************  ***********"
		 << "\n**********  *****************************************  ***********"
		 << "\n**********  *****************************************  ***********"
		 << "\n**********  *****************************************  ***********"
		 << "\n**********  *****************************************  ***********"
		 << "\n**********  *****************************************  ***********"
		 << "\n**********  *****************************************  ***********"
		 << "\n**********  *****************************************  ***********"
		 << "\n**********  *****************************************  ***********"
		 << "\n**********  *****************************************  ***********"
		 << "\n**********  *****************************************  ***********"
		 << "\n**********  *****************************************  ***********"
		 << "\n**********  *****************************************  ***********"
		 << "\n**********  *****************************************  ***********"
		 << "\n**********  *****************************************  ***********"
		 << "\n**********  *****************************************  ***********";
		cout << "\nbonnie saiu\n";
	}
	
	if(portae == 2 && pe == 1)
	{
		system("CLS");
		cout << "\n******************************************************************"
		 << "\n******************************************************************"
		 << "\n******************************************************************"
		 << "\n******************************************************************"
		 << "\n******************************************************************"
		 << "\n  **************************************************************  "
		 << "\n**  *********************************************************  ***"
		 << "\n****  *****************************************************  *****"
		 << "\n******  *************************************************  *******"
		 << "\n********  *********************************************  *********"
		 << "\n**********  *****************************************  ***********"
		 << "\n**********  *****************************************  ***********"
		 << "\n**********  *****************************************  ***********"
		 << "\n**********  *****************************************  ***********"
		 << "\n**********  *****************************************  ***********"
		 << "\n**********  *****************************************  ***********"
		 << "\n**********  *****************************************  ***********"
		 << "\n**********  *****************************************  ***********"
		 << "\n**********  *****************************************  ***********"
		 << "\n**********  *****************************************  ***********"
		 << "\n**********  *****************************************  ***********"
		 << "\n**********  *****************************************  ***********"
		 << "\n**********  *****************************************  ***********"
		 << "\n**********  *****************************************  ***********"
		 << "\n**********  *****************************************  ***********"
		 << "\n**********  *****************************************  ***********"
		 << "\n**********  *****************************************  ***********"
		 << "\n**********  *****************************************  ***********"
		 << "\n**********  *****************************************  ***********"
		 << "\n**********  *****************************************  ***********"
		 << "\n**********  *****************************************  ***********";
		cout << "\nfreddy saiu\n";
	}
	
	if(portae == 3 && pe == 1)
	{
		system("CLS");
		cout << "\n******************************************************************"
		 << "\n******************************************************************"
		 << "\n******************************************************************"
		 << "\n******************************************************************"
		 << "\n******************************************************************"
		 << "\n  **************************************************************  "
		 << "\n**  *********************************************************  ***"
		 << "\n****  *****************************************************  *****"
		 << "\n******  *************************************************  *******"
		 << "\n********  *********************************************  *********"
		 << "\n**********  *****************************************  ***********"
		 << "\n**********  *****************************************  ***********"
		 << "\n**********  *****************************************  ***********"
		 << "\n**********  *****************************************  ***********"
		 << "\n**********  *****************************************  ***********"
		 << "\n**********  *****************************************  ***********"
		 << "\n**********  *****************************************  ***********"
		 << "\n**********  *****************************************  ***********"
		 << "\n**********  *****************************************  ***********"
		 << "\n**********  *****************************************  ***********"
		 << "\n**********  *****************************************  ***********"
		 << "\n**********  *****************************************  ***********"
		 << "\n**********  *****************************************  ***********"
		 << "\n**********  *****************************************  ***********"
		 << "\n**********  *****************************************  ***********"
		 << "\n**********  *****************************************  ***********"
		 << "\n**********  *****************************************  ***********"
		 << "\n**********  *****************************************  ***********"
		 << "\n**********  *****************************************  ***********"
		 << "\n**********  *****************************************  ***********"
		 << "\n**********  *****************************************  ***********";
		cout << "\nchica saiu\n";
	}
	
	cout << "\n\n";

	system("PAUSE");
}
