#include <conio>
#include <iostream>

main()
{
int opcion;
char noma[40],nose[40],dise[40],hoini[40],hofin[40];
cout<<"+++++++---------ESCUELA SUPERIOR POLITECNICA DE CHIMBORAZO-------+++++++++++++++\n";
cout<<"+++++++++++++++-------LENGUAJES DE PROGRAMACION----------+++++++++++++++++++++++\n";
cout<<"Titulo del Proyecto: Horario de clases\n";
cout<<"MENU PRINCIPAL\n";
cout<<"1.Ingresar una nueva hora de clases\n";
cout<<"2.Ver el horario de hoy\n";
cout<<"3.Ver el horario de la semana\n";
cout<<"4.Salir\n";
cout<<"SELECCIONE UNA OPCION\n";
cin>>opcion;
switch(opcion)
{
case 1:
cout<<"*-Nombre de la materia\n";
cin>>noma;
cout<<"*-Nombre del semestre\n";
cin>>nose;
cout<<"*-Dia de la semana\n";
cin>>dise;
cout<<"*-Hora de inicio\n";
cin>>hoini;
cout<<"*-Hora de fin\n";
cin>>hofin;
break;
case 2:
break;
case 3:
break;
case 4:
break;
}
getch();
}