# Add the source files
set(SRC_FILES DigitKey.c)

# Include directory for headers
include_directories(${PROJECT_SOURCE_DIR}/inc)

# Create a shared library
add_library(DigitKey SHARED ${SRC_FILES})

# Set the library version
set_target_properties(DigitKey PROPERTIES VERSION ${PROJECT_VERSION})

# Install the library in the lib directory
install(TARGETS DigitKey
    LIBRARY DESTINATION ${PROJECT_SOURCE_DIR}/lib
)
set(CMAKE_EXE_LINKER_FLAGS "-mconsole")