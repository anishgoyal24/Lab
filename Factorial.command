#!/bin/zsh

echo "Enter number: "
read a
fact=1
for (( i=2; i <= $a; i++)) 
do
   fact=$((fact * i))
done
echo "Factorial is: $fact"