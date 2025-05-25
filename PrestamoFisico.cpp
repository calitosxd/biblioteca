// src/patrones/factory/PrestamoFisico.cpp
#include "PrestamoFisico.h"
#include <iostream>

void PrestamoFisico::procesar()
{
    std::cout << "Procesando prestamo fisico: asignando libro fisico a usuario" << std::endl;
}

std::string PrestamoFisico::obtenerTipo()
{
    return "Fisico";
}
