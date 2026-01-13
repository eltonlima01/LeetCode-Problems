cmake_minimum_required(VERSION 3.23)

project(test)

add_executable(${PROJECT_NAME})

#

add_library(function)

target_sources(function
    PRIVATE
        function.c

    PUBLIC
        FILE_SET HEADERS
        TYPE HEADERS
        BASE_DIRS .
        FILES
            function.h
)

#

target_link_libraries(${PROJECT_NAME}
    PUBLIC
        function
)

target_sources(${PROJECT_NAME}
    PRIVATE
        test.c
)