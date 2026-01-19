# CMakeList.txt: проект CMake для DZ_ProjectFigures; включите исходный код и определения,
# укажите здесь логику для конкретного проекта.
#
cmake_minimum_required (VERSION 3.8)

# Включение горячей перезагрузки для компиляторов MSVC, если поддерживается.
if (POLICY CMP0141)
  cmake_policy(SET CMP0141 NEW)
  set(CMAKE_MSVC_DEBUG_INFORMATION_FORMAT "$<IF:$<AND:$<C_COMPILER_ID:MSVC>,$<CXX_COMPILER_ID:MSVC>>,$<$<CONFIG:Debug,RelWithDebInfo>:EditAndContinue>,$<$<CONFIG:Debug,RelWithDebInfo>:ProgramDatabase>>")
endif()

project ("DZ_ProjectFigures")

# Добавьте источник в исполняемый файл этого проекта.
add_executable (DZ_ProjectFigures "DZ_ProjectFigures.cpp"  "Figures/MyFigures.h" "Figures/MyTriangle.h" "Figures/MyQadrangle.h" "Figures/MyRight_Triangle.h" "Figures/MyIsosceles_Triangle.h" "Figures/MyEquilateral_Triangle.h" "Figures/MySquare.h" "Figures/MyRhombus.h" "Figures/MyExeptions.h" "Figures/MyRectangle.h" "Figures/MyParallelogramm.h" "Figures/MyFigures.cpp" "Figures/MyTriangle.cpp" "Figures/MyRight_Triangle.cpp" "Figures/MyIsosceles_Triangle.cpp" "Figures/MyExeptions.cpp" "Figures/MyEquilateral_Triangle.cpp" "Figures/MyQadrangle.cpp" "Figures/MyParallelogramm.cpp" "Figures/MyRectangle.cpp" "Figures/MyRhombus.cpp" "Figures/MySquare.cpp")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET DZ_ProjectFigures PROPERTY CXX_STANDARD 20)
endif()

# TODO: Добавьте тесты и целевые объекты, если это необходимо.
