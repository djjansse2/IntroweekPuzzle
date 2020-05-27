
OBJECTS=\
	Source.o\
	Automation.o\
	I2C_Controller.o

CXX=arm-linux-gnueabi-g++

game: $(OBJECTS)
	$(CXX) -o Automation $^
	scp Automation dion@192.168.2.66:/home/dion

clean:
	rm *.o