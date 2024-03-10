#include <iostream>

using namespace std;

#include "gui_glut/gui.h" // GUI é uma biblioteca usada para criação de interfaces gráficas em C++

void draw() {
    GUI::displayInit(); // Comando utilizado para inicializar o display

    GUI::setLight(0,0.0,2.0,0.0, true, false, false, false, false, false, true); // Seta uma luz dentro do display dado as coordenadas corretas

    /*
     * O setColor seta cores no padrão RGB para todos os objetos. Todo objeto abaixo de um setColor
     * irá ter a cor designada.
     */

    GUI::setColor(0,0,0, 1.0, true);
    GUI::drawFloor(5.0, 5.0, 1, 1, 5.0, 5.0);

    GUI::setColor(0.0,1.0,0.0, 1, true);
    GUI::drawSphere(0.0,1,0.0,0.3);

    // GUI::drawOrigin(1.5); // Desenha um plano cartesiano de três dimensões no display

    GUI::setColor(0.0,1.0,0.0, 1, true);
    GUI::drawBox(-2.5, 0, 1.5, -1.5, 1, 2.5, false);

    GUI::displayEnd(); // Comando utilizado para finalizar o display
}


int main() {

    GUI gui(800,600,draw);
}
