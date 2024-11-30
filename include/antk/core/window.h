//
// Created by ace on 11/30/24.
//

#ifndef WINDOW_H
#define WINDOW_H

namespace ANTK {

class Window
{
public:
    Window(const char *title);
    virtual ~Window();

    void Show() const;
private:
    char *_title;
    void *_platform_window;

    void *platform_create();
};

}

#endif //WINDOW_H
