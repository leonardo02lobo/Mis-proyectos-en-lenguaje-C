#include<stdio.h>
#include<string.h>
#include<locale.h>
#include<windows.h>
#include<ctype.h>
#include<stdbool.h>
#define NUM 5

int opcion;

/*case 1*/int Num,Inc,i;

/*case 2*/int numPar,num2Par,par;

/*case 3*/int num1,num2;

/*case 4*/int Mnum,mnum;

/*case 5*/int n, bin[999];
			int j = 0;
			
/*case 6*/int numerador,denominador;
			float total;
			
/*case 7*/int k,confirma [NUM];

int main(){
	
	do{
		do{
		printf("SENTENCIAS DE CONTROL DE FLUJO\n");
		printf("1 Incremento de un numero\n");
		printf("2 Numeros pares\n");
		printf("3 Numeros primos\n");
		printf("4 Mayor y Menor numero\n");
		printf("5 transformar numeros binarios\n");
		printf("6 fracciones\n");
		printf("7 confirmador de numeros\n");
		printf("8 Salir\n");
		scanf("%d",&opcion);
		system("cls");	
	if(opcion < 0 || opcion > 8){
			system("cls");
			printf("Por favor seleccione una opcion valida.\n\n");
			system("pause");
			system("cls");
		}
		
	}while(opcion < 0 || opcion > 8);
	
		switch(opcion){
			
			case 1:
				
				for( i = 0; i == Inc; i++){
					
				printf("ingresar el numero el cual desea obtener su incremento: ");
					scanf("%d",&Num);
				
				printf("ingresar el numero que desea llegar: ");
					scanf("%d",&Inc);
					
				}
				
				printf("el numero %d fue incrementado hasta llegar a %d",Num,Inc);
				
				printf("\n");
				system("pause");
				system("cls");
				break;
				
			case 2:
				
				printf("ingrese el primer numero:");
					scanf("%d",&numPar);
					
				printf("ingrese el segundo numero:");
					scanf("%d",&num2Par);
					
				if(par = (numPar / num2Par) == 1){
					
					printf("\nEl numero es par",par);
					
				}else {
					
					printf("\nEl numero no es par",par);
					
				}
				
				printf("\n");
				system("pause");
				system("cls");
				break;
				
			case 3:
				
				printf("ingrese el primer numero:");
					scanf("%d",&num1);
					
				printf("ingrese el segundo numero:");
					scanf("%d",&num2);
					
				if((num1 / num2) == 1){
					
					printf("\nEl numeo es primo");
					
				}else {
					
					printf("\nEl numero no es primo");
					
				}
				
				printf("\n");
				system("pause");
				system("cls");
				break;
				
			case 4:
				
				printf("digite el numero: ");
					scanf("%d",&Mnum);
					
				printf("digite el numero: ");
					scanf("%d",&mnum);
					
				if (Mnum > mnum){
					
					printf("el numero %d es mayor que %d",Mnum,mnum);
					
				}else if (Mnum < mnum){
					
					printf("el numero %d es menor que %d",Mnum,mnum);
					
				}else if (Mnum = mnum){
					
					printf("el numero %d es igual a %d",Mnum,mnum);
					
				}	
					
				printf("\n");
				system("pause");
				system("cls");
				break;
				
			case 5:
				
			printf("ingresar un numero entero: ");
				scanf("%d",&n);
			
			while (n != 0){
				
				bin[j] = n % 2;
				n = n / 2;
				j++;
			}
				j--;
				
				printf("binario:\n");
				
			while (j >= 0){
				
				printf("%d",bin[j]);
				j--;
				
			}
			
			printf("\n");
			system("pause");
			system("cls");
			break;
			
			case 6:
				
				printf("ingrese el numero del numerador: ");
					scanf("%d",&numerador);
					
				printf("ingrese el numero del denominador: ");
					scanf("%d",&denominador);
					
				total = denominador / numerador;
				
				printf("la fraccion obtenida de %d sobre %d es: %f",numerador,denominador,total);
				
				printf("\n");
				system("pause");
				system("cls");
				break;
				
			case 7:
				
				printf("//CONFIRMACION DE NUMEROS DE IDENTIDAD//\n");
				
				for(k = 0; k < NUM; k++){
					
					printf("ingrese un numero de cedula:\n ",k);
						scanf("%d",&confirma[k]);
					
				}printf("\n");
				
				printf("//LAS CEDULAS DE IDENTIDADES GUARDADAS SON://\n");
				
					for (int h = 0; h < NUM; h++){
						
						printf("la cedula %d es = %d\n",h,confirma[h]);
						
					}
				
				printf("\n");
				system("pause");
				system("cls");
				break;
				
			case 8:
				
				printf("hasta luego!!\n\n");
				break;
				
		}
		
	}while(opcion != 8);
	
}
