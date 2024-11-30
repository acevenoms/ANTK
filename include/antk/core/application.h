//
// Created by ace on 11/29/24.
//

#ifndef APPLICATION_H
#define APPLICATION_H

namespace ANTK {

enum ApplicationState {
    Created = 0,
    Starting,
    Running,
    Stopping,
    Exited,
    Faulted
};

class Application {
public:
    Application();
    virtual ~Application();

    void Start();
    bool Done() const;
private:
    ApplicationState _state;
};

}

#endif //APPLICATION_H
