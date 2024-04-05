#include "MathLibrary.h"
#include <cstdlib>
#include <ctime>
using namespace std;

string MathLibrary::adivinarFuturo(const string& nombre, int edad, const string& lugarResidencia) {
    int cantidadLetrasNombre = nombre.length();
    int cantidadLetrasLugar = lugarResidencia.length();
    string destinoCantidadLetrasNombre = obtenerDestinoPorCantidadLetrasNombre(cantidadLetrasNombre);
    string destinoCantidadLetrasLugar = obtenerDestinoPorCantidadLetrasLugar(cantidadLetrasLugar);
    string destinoAleatorio = obtenerDestinoAleatorio();

    return "Segun nuestros calculos, " + nombre + ", a la edad de " + to_string(edad) + " anos, viviendo en " +
        lugarResidencia + ", su destino sera " + destinoCantidadLetrasNombre + ", " + destinoCantidadLetrasLugar +
        ", o incluso " + destinoAleatorio + ".";
}

string MathLibrary::obtenerDestinoPorCantidadLetrasNombre(int cantidadLetrasNombre) {
    // Definir destinos posibles basados en la cantidad de letras del nombre
    if (cantidadLetrasNombre >= 8) {
        return "tener una vida llena de aventuras";
    }
    else if (cantidadLetrasNombre >= 5) {
        return "encontrar el amor verdadero";
    }
    else {
        return "alcanzar el éxito en su carrera";
    }
}

string MathLibrary::obtenerDestinoPorCantidadLetrasLugar(int cantidadLetrasLugar) {
    // Definir destinos posibles basados en la cantidad de letras del lugar de residencia
    if (cantidadLetrasLugar >= 6) {
        return "viajar por el mundo";
    }
    else if (cantidadLetrasLugar >= 4) {
        return "encontrar la paz interior";
    }
    else {
        return "hacer una diferencia en su comunidad";
    }
}

string MathLibrary::obtenerDestinoAleatorio() {
    // Definir una lista de destinos aleatorios
    vector<string> destinosAleatorios = {
        "descubrir un talento oculto",
        "ayudar a los demás",
        "ser una inspiración para los demás",
        "vivir una vida llena de aventuras"
    };

    // Generar un índice aleatorio para seleccionar un destino aleatorio
    srand(time(nullptr)); // Semilla del generador de números aleatorios
    int indice = rand() % destinosAleatorios.size();

    return destinosAleatorios[indice];
}
