#!/bin/bash

echo "Create directory and files."
echo -n "Name of problem to solve : "
read problem
echo "Name = ${problem}"

directory=${problem}
fileCPP=${problem}.cpp
fileTXT=${problem}.txt
pathToFileCPP=${directory}/${fileCPP}
pathToFileTXT=${directory}/${fileTXT}
pathToPatternCPP=patern.cpp

# check if ${directory} exists
if [ -d ${directory} ] 
then
	echo "Directory ${directory} exists"
else
	echo -n "Creating directory ${directory} ... "
	mkdir ${directory}
	echo "[OK]"
fi

# check if ${fileCPP} exists
if [ -e ${pathToFileCPP} ] 
then
	echo "File ${pathToFileCPP} exists."
else
	echo -n "Creating file ${pathToFileCPP} ... "
	cp pattern.cpp ${pathToFileCPP}
	echo "[OK]"
	echo -n "Adding file ${pathToFileCPP} fo git ..."
	git add ${pathToFileCPP}
	echo "[OK]"
fi

# check if ${fileTXT} exists
if [ -e ${pathToFileTXT} ] 
then
	echo "File ${pathToFileTXT} exists."
else
	echo -n "Creating file ${pathToFileTXT} ... "
	touch ${pathToFileTXT}
	echo "[OK]"
	echo -n "Adding file ${pathToFileTXT} fo git ..."
	git add ${pathToFileTXT}
	echo "[OK]"
fi