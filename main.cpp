#include <iostream>
#include "Seccion.cpp"
#include "Alumno.cpp"
using namespace std;

//Seccion *objSeccion;
Seccion *objSeccion= new Seccion();
string *Listado,*Listado2, *ptr;


int main()
{
    int tamanio;
     Alumno* alumno1 =new Alumno("Kevin","21","Ing Sistemas");
      Alumno* alumno2 =new Alumno("Carlos","20","Ing Sistemas");
       Alumno* alumno3 =new Alumno("Sergio","25","Ing Sistemas");

    objSeccion->setNombre("Programacion I");
    objSeccion->setAula("666");
    objSeccion->setHora("1800");
    objSeccion->setUV("5");
    
    objSeccion->setCupos(5);
    objSeccion->Matricular(alumno1->getNombre());
    objSeccion->Matricular(alumno2->getNombre());
    objSeccion->Matricular(alumno3->getNombre());

    Listado=objSeccion->Listado();
    cout << objSeccion->getNombre()<<endl;
    cout<< objSeccion->getHora()<<endl;
    
    

    cout << endl << "======Con ciclo for=======";
    ptr=Listado;
   
    for(int i= 0; i <= objSeccion->getUltimo(); i++){
        cout << endl << *ptr;
        ptr++;

    }
    return 0;
}
