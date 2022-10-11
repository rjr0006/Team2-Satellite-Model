baseDir=~/Team2-Satellite-Model
groundIP=192.168.5.5
txPort1=25000
txPort2=25001
rxPort=24999

curDir=$(pwd)

cd $baseDir/cpp_cubesat_model
echo "building"
./build.sh
echo "running"
./cubesat -tx $groundIP:$txPort1 -tx $groundIP:$txPort2 -rx $rxPort
