core_sources = [ 'application.cpp', 'window.cpp' ]
core_dependencies = []

if host_machine.system() == 'linux'
    core_sources += [ 'platforms/linux/x_window.cpp' ]
    core_sources += [ 'platforms/linux/wayland_window.cpp' ]
    core_dependencies += dependency('xcb')
elif host_machine.system() == 'windows'
    core_sources += [ 'platforms/win32/win32_window.cpp' ]
elif host_machine.system() == 'darwin'
    core_sources += [ 'platforms/mac/mtl_window.cpp' ]
else
    message('platform ' + host_machine.system() + ' is not supported by ANTK')
endif

core_library = library('libantk', core_sources, include_directories: project_headers, dependencies: core_dependencies)

core_export_dep = declare_dependency(link_with: core_library)