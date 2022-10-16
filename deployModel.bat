set user_host = %1
ssh %1% "sudo chmod 777 /home/"
scp -r .\cpp_cubesat_model\ %1%:/home
echo "Building Model.."
ssh %1% "cd /home/cpp_cubesat_model/; sudo chmod 777 *; ./build.sh"
echo "Build Complete"
echo %1%