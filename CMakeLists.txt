## 
cmake_minimum_required (VERSION 3.10)

if(MSVC)
    if (POLICY CMP0141)
      cmake_policy(SET CMP0141 NEW)
      set(CMAKE_MSVC_DEBUG_INFORMATION_FORMAT "$<IF:$<AND:$<C_COMPILER_ID:MSVC>,$<CXX_COMPILER_ID:MSVC>>,$<$<CONFIG:Debug,RelWithDebInfo>:EditAndContinue>,$<$<CONFIG:Debug,RelWithDebInfo>:ProgramDatabase>>")
    endif()
endif()

project ("cro RTS")
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Vulkan REQUIRED)

add_executable (CMakeTarget
    "main.cpp"
    "crorts.cpp"
    "Window.cpp"
    "VulkanRenderer.cpp"
)


if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET CMakeTarget PROPERTY CXX_STANDARD 20)
endif()

if(WIN32)
    target_include_directories(CMakeTarget PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}/deps/GLFW/include")
    add_library(glfw STATIC IMPORTED)
    set_target_properties(glfw PROPERTIES
        IMPORTED_LOCATION "${CMAKE_CURRENT_SOURCE_DIR}/deps/GLFW/lib-vc2022/glfw3.lib"
    )

elseif(UNIX)
    find_package(glfw3 REQUIRED)
endif()




target_link_libraries(CMakeTarget PRIVATE Vulkan::Vulkan glfw)
