#include "Pipe.h"
#include "Automation_settings.h"

uint64_t Pipe::PIXEL_BANK = 0;

Pipe::Pipe(/* args */)
{
}

Pipe::~Pipe()
{
}

void Pipe::begin(uint64_t pixels, Adafruit_NeoPixel * neoPixel){
    uint64_t checkIfOwned = this->PIXEL_BANK & pixels; //get a mask of already owned pixels
    pixels ^= checkIfOwned; //remove already owned pixel from the list
    this->PIXEL_BANK |= (this->ownedPixels = pixels); //store the owned pixels in the pipe and mark them as owned

    this->neoPixel = neoPixel;
}

void Pipe::set_pipe_color(Color color){
    this->pipeColor = color;

    for (int i = 0; i < NUMBER_OF_PIXELS; i++)
    {
        if ((this->ownedPixels >> i) & 1) 
        {
            (*this->neoPixel).setPixelColor(i, (*this->neoPixel).Color(color.red,color.green,color.blue));
        }
        
    }
}

void Pipe::set_color_by_valve(VALVE_BIT valve, Pipe connectedPipe){
    if (ToggleSwitch::is_valve_open(valve))
    {
        this->set_pipe_color(connectedPipe.pipeColor);
    }else{
        this->set_pipe_color({0,0,0});
    }
    
}

void Pipe::set_color_by_valve(VALVE_BIT valve, Color color){
    if (ToggleSwitch::is_valve_open(valve))
    {
        this->set_pipe_color(color);
    }else{
        this->set_pipe_color({0,0,0});
    }
}

void Pipe::set_color_by_mix(Pipe pipe1, Pipe pipe2){
    Color pipe1Color = pipe1.pipeColor;
    Color pipe2Color = pipe2.pipeColor;

    bool isPipe1On = !(  pipe1Color.red == 0 && 
                        pipe1Color.green == 0 &&
                        pipe1Color.blue == 0);

    bool isPipe2On = !(  pipe2Color.red == 0 && 
                        pipe2Color.green == 0 &&
                        pipe2Color.blue == 0);

    if (isPipe1On && isPipe2On)
    {
        Color newColor;
        newColor.red = (pipe1Color.red + pipe2Color.red) / 2;
        newColor.green = (pipe1Color.green + pipe2Color.green) / 2;
        newColor.blue = (pipe1Color.blue + pipe2Color.blue) / 2;
        this->set_pipe_color(newColor);
    }
    else if ( !isPipe1On && !isPipe2On)
    {
        this->set_pipe_color({0,0,0});
    }
    else if (isPipe1On)
    {
        this->set_pipe_color(pipe1Color);
    }
    else{
        this->set_pipe_color(pipe2Color);
    }
}
