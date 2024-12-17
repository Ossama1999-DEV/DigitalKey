# CMake minimum version
cmake_minimum_required(VERSION 3.10)

# Nom du projet
project(DigitalKey)

# Spécification des fichiers sources
set(SOURCES
    src/DigitKey.c
)

# Ajouter les répertoires d'en-têtes
include_directories(inc)

# Créer l'exécutable
add_executable(DigitalKey ${SOURCES})
set(CMAKE_EXE_LINKER_FLAGS "-mconsole")
set(CMAKE_WIN32_EXECUTABLE TRUE)

# (Optionnel) Lier des bibliothèques externes
# target_link_libraries(DigitalKey some_library)

# (Optionnel) Activer les tests unitaires
# enable_testing()
# add_test(NAME test_name COMMAND DigitalKey)
