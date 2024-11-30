//
// Created by ace on 11/29/24.
//
#include "include/demo.h"

#include <antk/core/application.h>
#include <antk/core/window.h>

int main(int argc, char *argv[])
{
    ANTK::Application app;
    app.Start();
    if (app.Done())
    {
        std::cout << "This shouldn't show up";
    }
    std::cout << "Application running...";

    ANTK::Window window("ANTK Demo");

    pause();

    return 0;
}