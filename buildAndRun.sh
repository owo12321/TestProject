echo "build: "
rm -r ./build
mkdir ./build
cd ./build
cmake ..
make

echo "========="
echo "run: "
cd ..
./build/TestProject