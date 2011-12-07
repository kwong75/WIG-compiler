#!/bin/sh

JavaFile="$(find *.java)"
for Fich in ${JavaFile}; do
  echo "Compiling file ${Fich}"
  Res="$(../joos ../extern/*.joos  -O ${Fich})"
  echo ${Res}
done


JasminFile="$(find *.j)"
for Fich in ${JasminFile}; do
  echo "Compiling file ${Fich}"
  Res="$(java -jar ../jasmin.jar ${Fich})"
done

ClassFile="$(find *.class)"
for Fich in ${ClassFile}; do
  filename=${Fich%.*}
  echo "Running class ${filename}"
  Res="$(java ${filename})"
  echo ${Res}
done
