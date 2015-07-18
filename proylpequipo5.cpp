#include <conio>
#include <iostream>
//#include <<time>
struct horario
{
char ma[40],se[40],dia[40] hini[20],hfin[20];
//time hini
//time hfin
};
int menu()
{
int opcion;
do{
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
return(opcion);
 } while (opcion!=0);
 }
void ingreso(horario h[])
{
   int n;
   for (int i=1;i<5;i++)
   {
   do
   {
   for (int j=1;j<=10;j++)
   {
    cout<<"Ingrese el dia\n";
    cin>>h[j].dia;
    cout<<"ingrese su semestre\n";
    cin>>h[j].sem;
    cout<<"ingrese su materia\n";
    cin>>h[j].ma;
    cout<<"ingrese su hora inicial\n";
    cin>>h[j].hini
    cout<<"ingrese su hora final\n";
    cin>>h[j].hfin
    cout<<"Desea  seguir ingresando mas horas de clases\n";
    cout<<"En caso de seguir ingresando presione 1 y en caso contrario presione 0  para salir  del dia\n";
    cin>>n;
}

 }while(n!=0);
       }
 }

void impresion(horario h[])
{

  for  (int i=1;i<=5;i++)
     {
         cout<<"El dia es\n";
         cout<<h[i].dia;
         cout<<"El semestre es\n";
         cout<<h[i].sem;
         cout<<"Ingrese la materia\n";
         cout<<h[i].mat;
         cout<<"Ingrese la hora inicial\n";
         cin>>h[i].hini;
         cout<<"Ingrese la hora final\n";
         cin>>h[i].hfin;


      }




}


 main ()

{

int op,opcion;

   horario h[10];

do{
         op=menu();


   switch (op)

   {

   case 1:
   ingreso (h);
   break;
   case 2:
   impresion(h);
   break;


   }
}while(op!=0);






   getch();
}
