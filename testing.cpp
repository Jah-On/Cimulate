#include "Cimulate.hpp"

int main(){
    Cimulate sim = Cimulate();
    sim.keyboard.toggle(sim.keyboard._0, 1);
    sim.keyboard.toggle(sim.keyboard._0, 0);
    sim.mouse.setPos(0,0);
    sim.mouse.toggle(sim.mouse._LEFT, 1);
    sim.mouse.toggle(sim.mouse._LEFT, 0);
}
