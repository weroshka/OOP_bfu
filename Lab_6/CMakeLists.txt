cmake_minimum_required(VERSION 3.15) # Проверка версии CMake.
									 # Если версия установленой программы
									 # старее указаной, произайдёт аварийный выход.

set(PROJECT_NAME BMP)				 # имя проекта		 
project("${PROJECT_NAME}")


set(CMAKE_CXX_STANDARD 17)			 # устанавливаем 17 стандарт языка
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_STANDARD_REQUIRED TRUE)

include_directories("inc/")


add_executable(Lab_6 main.cpp
        inc/AbsctractControl.h
        src/ControllerForm.cpp
        inc/ControllerForm.h
        src/Windows/WindowsControllerButton.cpp
        inc/Windows/WindowsControllerButton.h
        src/Windows/WindowsControllerText.cpp
        inc/Windows/WindowsControllerText.h
        src/Windows/WindowsInputField.cpp
        inc/Windows/WindowsInputField.h
        src/Windows/WindowsControllerWidget.cpp
        inc/Windows/WindowsControllerWidget.h
        src/Linux/LinuxControllerButton.cpp
        inc/Linux/LinuxControllerButton.h
        src/Linux/LinuxControllerText.cpp
        inc/Linux/LinuxControllerText.h
        src/Linux/LinuxInputField.cpp
        inc/Linux/LinuxInputField.h
        src/Linux/LinuxControllerWidget.cpp
        inc/Linux/LinuxControllerWidget.h
        src/MacOS/MacOSControllerButton.cpp
        inc/MacOS/MacOSControllerButton.h
        src/MacOS/MacOSControllerText.cpp
        inc/MacOS/MacOSControllerText.h
        src/MacOS/MacOSInputField.cpp
        inc/MacOS/MacOSInputField.h
        src/MacOS/MacOSControllerWidget.cpp
        inc/MacOS/MacOSControllerWidget.h)
