#include <dbus-cxx.h>
#include <iostream>
#include <exception>
int main()
{
    DBus::init();

    DBus::Dispatcher::pointer dispatcher;
    dispatcher = DBus::Dispatcher::create();

    DBus::Connection::pointer connection;
    connection = dispatcher->create_connection( DBus::BUS_SYSTEM );

    //create an object proxy, which stands in for a real object.
    //a proxy exists over the dbus
    DBus::ObjectProxy::pointer object;
    object = connection->create_object_proxy("com.example.SampleService", "/DbusObject");

    //a method proxy acts like a real method, but will go over the dbus
    //to do its work.
    DBus::MethodProxy<std::string, std::string>& HelloWorld
            = *(object->create_method<std::string, std::string>("com.example.SampleInterface","HelloWorld"));

    std::string answer;
    try {
        answer = HelloWorld("Client3");

        std::cout << answer << std::endl;
    }
    catch(std::exception& e){
        std::cout << e.what() <<std::endl;
    }

    return 0;
}