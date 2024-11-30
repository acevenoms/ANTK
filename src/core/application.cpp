//
// Created by ace on 11/29/24.
//

#include <antk/core/application.h>

namespace ANTK {
    Application::Application() {
        _state = Created;
    }

    Application::~Application() = default;

    void Application::Start() {
        _state = Starting;
        // Do startup stuff
        _state = Running;
    }

    bool Application::Done() const {
        return _state == Exited || _state == Faulted;
    }
}
