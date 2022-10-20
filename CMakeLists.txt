# CMakeList.txt : fichier projet CMake de niveau supérieur, effectuez une configuration globale
# et incluez les sous-projets ici.
#
cmake_minimum_required (VERSION 3.8)

# Solution
project ("SAE921-GRP4100-SFML")

# Each sub-project
set(EXECUTABLE_CUSTOM_NAME "00-Starter")
add_subdirectory ("00-Starter")

set(EXECUTABLE_CUSTOM_NAME "01-Window")
add_subdirectory ("01-Window")

set(EXECUTABLE_CUSTOM_NAME "02-Graphics")
add_subdirectory ("02-Graphics")

set(EXECUTABLE_CUSTOM_NAME "03a-Events")
add_subdirectory ("03a-Events")

set(EXECUTABLE_CUSTOM_NAME "03b-Events")
add_subdirectory ("03b-Events")

set(EXECUTABLE_CUSTOM_NAME "03c-Events")
add_subdirectory ("03c-Events")

set(EXECUTABLE_CUSTOM_NAME "03d-Events")
add_subdirectory ("03d-Events")

set(EXECUTABLE_CUSTOM_NAME "04-Animation")
add_subdirectory ("04-Animation")

set(EXECUTABLE_CUSTOM_NAME "05-Sound")
add_subdirectory ("05-Sound")

set(EXECUTABLE_CUSTOM_NAME "06-Text")
add_subdirectory ("06-Text")

set(EXECUTABLE_CUSTOM_NAME "07-Fireball")
add_subdirectory ("07-Fireball")

set(EXECUTABLE_CUSTOM_NAME "08-TransformableDrawable")
add_subdirectory ("08-TransformableDrawable")

set(EXECUTABLE_CUSTOM_NAME "hero")
add_subdirectory ("hero")
