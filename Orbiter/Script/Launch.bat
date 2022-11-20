@echo off
if exist %~dp0/Package/Windows/Orbiter.exe (
	echo "Launching Orbiter"
) else (
  echo "Orbiter has not been installed."
  echo "Please install using the PackageOrbiter.bat"
  pause
  exit
)

%~dp0/Package/Windows/Orbiter.exe -ResX=720 -ResY=720 -WINDOWED 