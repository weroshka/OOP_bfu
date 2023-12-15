cmake_minimum_required(VERSION 3.15) # Проверка версии CMake.
									 # Если версия установленой программы
									 # старее указаной, произайдёт аварийный выход.

set(PROJECT_NAME BMP)				 # имя проекта		 
project("${PROJECT_NAME}")


set(CMAKE_CXX_STANDARD 17)			 # устанавливаем 17 стандарт языка
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_STANDARD_REQUIRED TRUE)

include_directories("inc/")

add_executable("${PROJECT_NAME}" main.cpp src/WorkFlow.cpp
        inc/WorkFlow.h
        src/Command/Command.cpp
        inc/Command/Command.h
        src/Command/TextCommand.cpp
        inc/Command/TextCommand.h
        src/Command/GroupCommandText.cpp
        inc/Command/GroupCommandText.h)


