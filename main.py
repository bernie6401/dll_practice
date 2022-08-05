#Reference about MsgBox and function meaning by //practice progress reference by https://ithelp.ithome.com.tw/articles/10238425
#Reference about Stdio practice by https://pws.niu.edu.tw/~ttlee/sp.100.2/dll/
#Reference about Fabonacci practice by https://home.gamer.com.tw/artwork.php?sn=5026451

from ctypes import cdll
import time

#-----------------------------------MsgBox-----------------------------------#
dll = cdll.LoadLibrary(".\\dll-practice.dll")
dll.HelloWorld()


#-----------------------------------String&Number-----------------------------------#
startTime = time.time()
stu_id, num1, num2 = input("Please enter your student id and 2 numbers you want to add\n").split()

print("Adding result is: ", dll.Add(stu_id, int(num1), int(num2)))
print("Execution time on Stdio:", time.time() - startTime, "second(s)")


#-----------------------------------Fabonacci-----------------------------------#
startTime = time.time()
print("Fibonacci(45) =", dll.Fibonacci(int(input("Please enter a number: "))))
print("Execution time on Fabonacci:", time.time() - startTime, "second(s)")