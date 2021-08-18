# CMakeList.txt : fichier projet CMake de niveau supérieur, effectuez une configuration globale
# et incluez les sous-projets ici.
#
cmake_minimum_required (VERSION 3.8)

# Solution
project ("SAE921-GRP4100-SFML")

# Each sub-project
set(CUSTOM_SUB_PROJECT_NAME "00-Starter")
add_subdirectory ("00-Starter")

set(CUSTOM_SUB_PROJECT_NAME "01-Window")
add_subdirectory ("01-Window")

set(CUSTOM_SUB_PROJECT_NAME "02-Graphics")
add_subdirectory ("02-Graphics")

set(CUSTOM_SUB_PROJECT_NAME "03a-Events")
add_subdirectory ("03a-Events")

set(CUSTOM_SUB_PROJECT_NAME "03b-Events")
add_subdirectory ("03b-Events")

set(CUSTOM_SUB_PROJECT_NAME "03c-Events")
add_subdirectory ("03c-Events")

set(CUSTOM_SUB_PROJECT_NAME "04-Animation")
add_subdirectory ("04-Animation")

set(CUSTOM_SUB_PROJECT_NAME "05-Sound")
add_subdirectory ("05-Sound")
