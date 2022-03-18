#include <stdio.h>
#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
  int menu;
  cout << "Seleccione su plato digitando el numero del menu :" << endl;
  cout << "1 Torta de Jamon :" << endl;
  cout << "2 La Guajolota :" << endl;
  cout << "3 La Torta Ahogada :" << endl;
  cout << "4 La Torta cubana:" << endl;
  cout << "5 La Torta pachuqueña:" << endl;
  cin >> menu;
  switch(menu)
    {
    case 1:
      cout << "Usted ha seleccionado Torta de Jamon" << endl;
      cout << "La Torta viene con 1 telera, 4 rebanadas de jamon, queso oaxaca, 1 jitomate, Mayonesa, Chiles, Aguacate." <<endl;
      cout << "VALOR $65.000" <<endl;
      break;
      
    case 2:
      cout << "Usted ha seleccionado La Guajolota: " << endl;
      cout << "una telera rellena de un tamal de harina de maíz,." <<endl;
      cout << "VALOR $60.000" <<endl;
      break;
      
    case 3:
      cout << "Usted ha seleccionado La Torta Ahogada:  " <<endl;
      cout << "1 birote de pan, carnitas, jitomate, chile de arbol, frijoles refritos, cebolla blanca, cilantro." <<endl;
      cout << "VALOR $70.000" <<endl;
      break;
     
    case 4:
    cout << "Usted ha seleccionado Torta cubana: " <<endl;
    cout << "1 telera, frijoles refritos, mayonesa, 1 milanesa de res, 1 huevo, 1 chorizo, salchichas, 2 rebanadas de jamon, queso oaxaca, aguacate, 
           jitomate, cebolla, chiles"<<endl;
    cout << "VALOR $75.000" <<endl;
      
    case 5:
    cout << "Usted ha seleccionado Torta pachuqueña: " <<endl;
    cout << "1 bolillo, mayonesa,2 milanesas de res,frijoles refritos,2 rebanadas de pierna de cerdo,queso oaxaca,aguacate,cabolla,chiles" <<endl;
    cout << "VALOR $80.000" <<endl;  
      
     break;
     
     
    default:
      cout << "ERROR, No tenemos ese menu" << endl;
      break;
    }
   
   
     system("pause");
     
     return 0;
 
   
   
   
}