cmake_minimum_required(VERSION 4.3)
project(c_project_02_engineering_calculator C)

set(CMAKE_C_STANDARD 11)

add_executable(c_project_02_engineering_calculator main.c
        Menus/startmenu.h
        Menus/startmenu.c
        Menus/arithmeticmenu.h
        Menus/arithmeticmenu.c
        Operations/arithmetic.h
        Operations/arithmetic.c
        Operations/integer.h
        Operations/integer.c
        Menus/integermenu.c
        Menus/integermenu.h
        Menus/powersandrootsmenu.c
        Menus/powersandrootsmenu.h
        Operations/powersandroots.c
        Operations/powersandroots.h
)
