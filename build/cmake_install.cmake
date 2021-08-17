# Install script for directory: D:/5_Repos/SAE921-GRP4100-SFML

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "C:/Program Files (x86)/00-Starter")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("D:/5_Repos/SAE921-GRP4100-SFML/build/00-Starter/cmake_install.cmake")
  include("D:/5_Repos/SAE921-GRP4100-SFML/build/01-Window/cmake_install.cmake")
  include("D:/5_Repos/SAE921-GRP4100-SFML/build/02-Graphics/cmake_install.cmake")
  include("D:/5_Repos/SAE921-GRP4100-SFML/build/03a-Events/cmake_install.cmake")
  include("D:/5_Repos/SAE921-GRP4100-SFML/build/03b-Events/cmake_install.cmake")
  include("D:/5_Repos/SAE921-GRP4100-SFML/build/03c-Events/cmake_install.cmake")
  include("D:/5_Repos/SAE921-GRP4100-SFML/build/04-Animation/cmake_install.cmake")
  include("D:/5_Repos/SAE921-GRP4100-SFML/build/05-Sound/cmake_install.cmake")

endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "D:/5_Repos/SAE921-GRP4100-SFML/build/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
