#ifndef ALUMNO_H_INCLUDED
#define ALUMNO_H_INCLUDED
#include <iostream>

using namespace std;

class Alumno
{
private:
    string Nombre;
    string Edad;
    string Carrera;

public:
   
    Alumno(string _Nombre,string _Edad,string _Carrera){
        this->Nombre=_Nombre;
        this->Edad=_Edad;
        this->Carrera=_Carrera;
    }

 
    void setNombre(string Nombre);
    string getNombre();

    void setEdad(string Edad);
    string getEdad();

    void setCarrera(string Carrera);
    string getCarrera();

};



#endif