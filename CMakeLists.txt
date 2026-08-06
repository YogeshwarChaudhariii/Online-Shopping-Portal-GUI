cmake_minimum_required(VERSION 3.16)

project(OnlineShoppingQt VERSION 1.0 LANGUAGES CXX)

# C++ Standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Enable Qt features
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_AUTOUIC_SEARCH_PATHS
    ${CMAKE_SOURCE_DIR}/ui
    ${CMAKE_SOURCE_DIR}/Widgets 
)

# Find Qt
find_package(Qt6 REQUIRED COMPONENTS Widgets)

qt_standard_project_setup()

# Source files
set(SOURCES
    src/main.cpp
    src/MainWindow.cpp
)

# Header files
set(HEADERS
    src/MainWindow.h
)

# UI files
set(UI_FILES
    ui/MainWindow.ui
    widgets/ProductCard.ui
)

# Managers 
set(MANAGERS 
    managers/LoginManager.cpp 
    managers/LoginManager.h
)

# Models  
set(MODELS  
    models/Product.cpp
    models/Product.h
    models/Cart.cpp
    models/Cart.h 
)

# Widgets
set(WIDGETS
    widgets/ProductCard.cpp
    widgets/ProductCard.h 
    widgets/ProductCard.ui
)

# Create executable
qt_add_executable(OnlineShoppingQt
    ${SOURCES}
    ${HEADERS}
    ${UI_FILES}
    ${MANAGERS}
    ${MODELS}
    ${WIDGETS}
)

# Include directories
target_include_directories(OnlineShoppingQt PRIVATE
    src
    models
    managers
)

# Link Qt libraries
target_link_libraries(OnlineShoppingQt PRIVATE
    Qt6::Widgets
)

# Install
install(TARGETS OnlineShoppingQt
    RUNTIME DESTINATION bin
)