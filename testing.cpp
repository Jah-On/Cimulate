#include "Cimulate.hpp"
#include <thread>
#include <chrono>
#include <vector>

int main(){
    Cimulate sim = Cimulate();
    std::vector<int> keysUp;
    std::vector<int> keysDown;
    std::vector<int> msUp;
    std::vector<int> msDown;
    keysDown.push_back(sim.keyboard._BACKSPACE);
    sim.keyboard.toggle(sim.keyboard._0, 1);
    std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    sim.keyboard.toggle(sim.keyboard._0, 0);
    std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    sim.keyboard.toggle(keysUp, keysDown);
    sim.mouse.setPos(100,0);
    sim.mouse.toggle(sim.mouse._LEFT, 1);
    sim.mouse.toggle(sim.mouse._LEFT, 0);
    std::this_thread::sleep_for(std::chrono::milliseconds(5000));
    keysUp.push_back(sim.keyboard._BACKSPACE);
    keysDown.clear();
    sim.keyboard.toggle(keysUp, keysDown);
    msDown.push_back(sim.mouse._RIGHT);
    sim.mouse.toggle(msUp, msDown);
    sim.mouse.toggle(msDown, msUp);
}
