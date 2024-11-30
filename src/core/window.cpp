//
// Created by ace on 11/30/24.
//

#include <string.h>

#include <antk/core/window.h>

namespace ANTK {
Window::Window(const char *title)
{
    int titleLen = strlen(title);
    _title = new char[titleLen + 1];
    memcpy(_title, title, titleLen + 1);

    _platform_window = platform_create();
}

Window::~Window() = default;

void Window::Show() const
{
    // Do nothing?
}
}