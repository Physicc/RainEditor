# Prerequisites

* C++ Compiler

* CMake (Comes with MSVC)

* git (Obviously)

* vcpkg (Can install into ~/)

	* `cd /path/you/want/to/install/to/`

	* `git clone https://github.com/microsoft/vcpkg`

	* `.\vcpkg\bootstrap-vcpkg.bat` (or `.sh`)


# Build Instructions

* Configure step

	* `cmake -Bbuild -DCMAKE_TOOLCHAIN_FILE=/path/to/vcpkg/scripts/buildsystems/vcpkg.cmake -DCMAKE_BUILD_TYPE=Release`

	* `-DCMAKE_BUILD_TYPE=Release` is not required for multiconfiguration generators (like MSVC)

	* vcpkg will install the packages in `vcpkg.json` at this step

* Build step

	* `cmake --build build --config Release`

	* `--config Release` is not required for single configuration generators (like Makefiles)

	* Your native build system (like MSBuild/Make) will consume the packages installed by vcpkg at this step
