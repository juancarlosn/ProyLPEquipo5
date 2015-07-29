#include<iostream>
#include<conio>
#include<time>
#include<fstream>
#include<stdio>
#include<stdlib>

int MenuDatos(int menu)
{
      int w;
// primer ingreso al menu con lazo mientras este en el rango 1 a 4
 do
  {
   		cout<<"Ingrese la opcion que desea realizar\n";
   		cin>>menu;
   	if(menu>4)
   	{
    		cout<<"Opcion no valida\n";
   	}
  }while(w<0 && w>=4);
  return menu;
}

//CUERPO PRINCIPAL DEL PROGRAMA

main()
{
  	char fecha[40], hora[40], horah[40];
   int w, horario, opc;
   //Creacion del archivo horario
   ofstream archivo("C:/BC5/Archivos/horario.txt");
	archivo<<"\n";
	archivo.close();

   do
   {

   		cout<<"+++++++---------ESCUELA SUPERIOR POLITECNICA DE CHIMBORAZO-------+++++++++++++++\n";
   		cout<<"+++++++++++++++-------LENGUAJES DE PROGRAMACION----------+++++++++++++++++++++++\n";
   		cout<<"Titulo del Proyecto: Horario de clases\n";
   		cout<<"MENU PRINCIPAL\n";
   		cout<<"1.Ingresar una nueva hora de clases\n";
   		cout<<"2.Ver el horario de hoy\n";
     		cout<<"3.Ver el horario de la semana\n";
   		cout<<"4.Salir\n";
   		opc = MenuDatos(w);
         switch(opc)
   		{

   			cout<<" El valor ingresado es incorrecto\n";
            char mat[40], sem[10],  dia[10], ini[40], fin[40], caracter;
    			case 1:

      			cout<<"Ingresar los siguientes datos requeridos: \n\n";
      			cout<<"Nombre de la materia : \n";
      			cin>>mat;
					cout<<"Nombre del semestre: \n";
      			cin>>sem;
      			cout<<"Dia de la semana: \n";
         		scanf("%s",&dia);
//Restringe en caso de que el dia no sea ingresado en el formato correcto
            while(strcmp(dia,"LUN")!=0 && strcmp(dia,"MAR")!=0 && strcmp(dia,"MIE")!=0 && strcmp(dia,"JUE")!=0 && strcmp(dia,"VIE")!=0)
            {
               printf("Formato permtido para el ingreso: LUN, MAR, MIE, JUE, VIE\nVuelva a ingresar el dia correctamente: \n");
               scanf("%s",&dia);
         	}
      		cout<<"Ingrese la hora de inicio: \n";
      		scanf("%s",&ini);
//Restringe para que las horas sean exactas y  empiezen desde las 7 am hasta las 9 pm que es un horario usual
         	while(strcmp(ini,"07h00")!=0 && strcmp(ini,"08h00")!=0 && strcmp(ini,"09h00")!=0 && strcmp(ini,"10h00")!=0 && strcmp(ini,"11h00")!=0 && strcmp(ini,"12h00")!=0 && strcmp(ini,"13h00")!=0 && strcmp(ini,"14h00")!=0 && strcmp(ini,"15h00")!=0 && strcmp(ini,"16h00")!=0 && strcmp(ini,"17h00")!=0 && strcmp(ini,"18h00")!=0 && strcmp(ini,"19h00")!=0 && strcmp(ini,"20h00")!=0 && strcmp(ini,"21h00")!=0)
         	{
          		printf("Formato permitido para el ingreso: 07h00\nVuelva a ingresar correctamente la hora de inicio\n");
               scanf("%s",&ini);
            }

            cout<<"Ingrese la hora fin: \n";
      	   scanf("%s",&fin);
            while(strcmp(fin,"07h00")!=0 && strcmp(fin,"08h00")!=0 && strcmp(fin,"09h00")!=0 && strcmp(fin,"10h00")!=0 && strcmp(fin,"11h00")!=0 && strcmp(fin,"12h00")!=0 && strcmp(fin,"13h00")!=0 && strcmp(fin,"14h00")!=0 && strcmp(fin,"15h00")!=0 && strcmp(fin,"16h00")!=0 && strcmp(fin,"17h00")!=0 && strcmp(fin,"18h00")!=0 && strcmp(fin,"19h00")!=0 && strcmp(fin,"20h00")!=0 && strcmp(fin,"21h00")!=0)
            {
           		printf("Formato permitido para el ingreso: 07h00\nVuelva a ingresar correctamente la hora fin\n");
          		scanf("%s",&fin);
            }

				cout<<" Para regresar al menu de inicio presione una tecla.....\n\n";
         getch();
      break;

      case 2:

         getch();

      break;

      case 3:

         getch();
      break;

      case 4:
      	return 0;
      break;

    }

  }while(w=4);

getch();
}
