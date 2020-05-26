#include "I2C_Controller.h"


int main(int argc, char ** argv){
    I2C_Controller * instance = I2C_Controller::getInstance();

    while(true){
        instance->handle_queues();
    }

    return 0;
}