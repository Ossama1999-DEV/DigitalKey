# Add the test executable
set(TEST_FILES main.c)

# Include headers and link the shared library
include_directories(${PROJECT_SOURCE_DIR}/inc)
link_directories(${PROJECT_BINARY_DIR}/lib)

# Create the test executable
add_executable(TestApp ${TEST_FILES})

# Link the test executable with the shared library
target_link_libraries(TestApp DigitKey)
