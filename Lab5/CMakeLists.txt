cmake_minimum_required(VERSION 3.15) # Проверка версии CMake.
									 # Если версия установленой программы
									 # старее указаной, произайдёт аварийный выход.

set(PROJECT_NAME BMP)				 # имя проекта		 
project("${PROJECT_NAME}")


set(CMAKE_CXX_STANDARD 17)			 # устанавливаем 17 стандарт языка
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_STANDARD_REQUIRED TRUE)

include_directories("inc/" "new_folder")


add_executable("${PROJECT_NAME}"  main.cpp
        inc/User.h
        inc/IUserManager.h
        inc/IUserRepository.h
        src/FileUserManager.cpp
        inc/FileUserManager.h
        src/FileUserRepository.cpp
        inc/FileUserRepository.h
        data.txt
)
