# Install script for directory: /media/q/Elenments/5ubuntu/rosresoure/ros1/myrobots/src/up

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/media/q/Elenments/5ubuntu/rosresoure/ros1/myrobots/install")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
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

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/up/action" TYPE FILE FILES "/media/q/Elenments/5ubuntu/rosresoure/ros1/myrobots/src/up/action/add.action")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/up/msg" TYPE FILE FILES
    "/media/q/Elenments/5ubuntu/rosresoure/ros1/myrobots/devel/share/up/msg/addAction.msg"
    "/media/q/Elenments/5ubuntu/rosresoure/ros1/myrobots/devel/share/up/msg/addActionGoal.msg"
    "/media/q/Elenments/5ubuntu/rosresoure/ros1/myrobots/devel/share/up/msg/addActionResult.msg"
    "/media/q/Elenments/5ubuntu/rosresoure/ros1/myrobots/devel/share/up/msg/addActionFeedback.msg"
    "/media/q/Elenments/5ubuntu/rosresoure/ros1/myrobots/devel/share/up/msg/addGoal.msg"
    "/media/q/Elenments/5ubuntu/rosresoure/ros1/myrobots/devel/share/up/msg/addResult.msg"
    "/media/q/Elenments/5ubuntu/rosresoure/ros1/myrobots/devel/share/up/msg/addFeedback.msg"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/up/cmake" TYPE FILE FILES "/media/q/Elenments/5ubuntu/rosresoure/ros1/myrobots/build/up/catkin_generated/installspace/up-msg-paths.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE DIRECTORY FILES "/media/q/Elenments/5ubuntu/rosresoure/ros1/myrobots/devel/include/up")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roseus/ros" TYPE DIRECTORY FILES "/media/q/Elenments/5ubuntu/rosresoure/ros1/myrobots/devel/share/roseus/ros/up")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/common-lisp/ros" TYPE DIRECTORY FILES "/media/q/Elenments/5ubuntu/rosresoure/ros1/myrobots/devel/share/common-lisp/ros/up")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/gennodejs/ros" TYPE DIRECTORY FILES "/media/q/Elenments/5ubuntu/rosresoure/ros1/myrobots/devel/share/gennodejs/ros/up")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(COMMAND "/usr/bin/python3" -m compileall "/media/q/Elenments/5ubuntu/rosresoure/ros1/myrobots/devel/lib/python3/dist-packages/up")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3/dist-packages" TYPE DIRECTORY FILES "/media/q/Elenments/5ubuntu/rosresoure/ros1/myrobots/devel/lib/python3/dist-packages/up")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/media/q/Elenments/5ubuntu/rosresoure/ros1/myrobots/build/up/catkin_generated/installspace/up.pc")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/up/cmake" TYPE FILE FILES "/media/q/Elenments/5ubuntu/rosresoure/ros1/myrobots/build/up/catkin_generated/installspace/up-msg-extras.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/up/cmake" TYPE FILE FILES
    "/media/q/Elenments/5ubuntu/rosresoure/ros1/myrobots/build/up/catkin_generated/installspace/upConfig.cmake"
    "/media/q/Elenments/5ubuntu/rosresoure/ros1/myrobots/build/up/catkin_generated/installspace/upConfig-version.cmake"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/up" TYPE FILE FILES "/media/q/Elenments/5ubuntu/rosresoure/ros1/myrobots/src/up/package.xml")
endif()

