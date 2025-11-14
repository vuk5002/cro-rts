
# Cro RTS

- Cro RTS (real time strategy) game made with lightweight members in Vulkan(R)

# Building
## Requirements
- [Vulkan SDK](https://vulkan.lunarg.com/sdk/home) (latest preferably)
- [GLFW](https://www.glfw.org/download)
- GPU that supports Vulkan
## Windows
- Run `cmake .` in the project root, open the .sln file, visual studio will compile with msvc
- Or open `x64 Native Tools Command Prompt for VS 2022` and run `code .` you will get your vscode open, from there open the Cro RTS folder, and build with F7 (for CMake), your exe is in `out/build/x64-debug/CMakeTarget.exe`

## Linux
- Run `cmake .` in the project root, after that run `make` and if no errors, you will get `CMakeTarget` executable

