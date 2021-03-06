#ifndef _inventario_
#define _inventario_

#include <map>
#include <string>

#include "objeto.h"

using namespace std;

class Inventario{
public:
    Inventario();

    //GETTERS
    Objeto* get_objeto(string nombre_objeto);
    bool get_existe_objeto(string nombre);
    Objeto extraer_objeto();
    string listar();

    bool posee_alcanzador();
    Objeto* tomar_alcanzador();

    bool posee_desatascador();
    Objeto* tomar_desatascador();

    //SETTERS
    void insertar_objeto(Objeto *objeto);
    void eliminar(string nombre);

private:
    map<string,Objeto*> objetos_inventario;
};

#endif

