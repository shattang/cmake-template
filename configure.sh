ARG1=${1:-Debug}

mkdir -p build 
cd build

conan install ..

. ./activate.sh

echo cmake .. -DCMAKE_BUILD_TYPE=$ARG1 -DCMAKE_MODULE_PATH=$PWD

cmake .. -DCMAKE_BUILD_TYPE=$ARG1 -DCMAKE_MODULE_PATH=$PWD

. ./deactivate.sh
