@echo off

cmake -B build-gl -G Ninja -DCMAKE_EXPORT_COMPILE_COMMANDS=ON -DSOKOL_EXPERIMENT_GL=ON
cmake -B build-d3d -G Ninja -DCMAKE_EXPORT_COMPILE_COMMANDS=ON -DSOKOL_EXPERIMENT_D3D=ON