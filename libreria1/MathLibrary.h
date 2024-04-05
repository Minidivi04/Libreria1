#ifndef MATHLIBRARY_H
#define MATHLIBRARY_H

#include <string>
#include <vector>

using namespace std;

class MathLibrary {
public:
    static string adivinarFuturo(const string& nombre, int edad, const string& lugarResidencia);
private:
    static string obtenerDestinoPorCantidadLetrasNombre(int cantidadLetrasNombre);
    static string obtenerDestinoPorCantidadLetrasLugar(int cantidadLetrasLugar);
    static string obtenerDestinoAleatorio();
};

#endif // MATHLIBRARY_H
