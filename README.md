# dll_practice

## Project Purpose
* This project is just a DLL file practice for myself and often refers to some website notes such as [Web1](https://ithelp.ithome.com.tw/articles/10238425) , [Web2](https://pws.niu.edu.tw/~ttlee/sp.100.2/dll/), [Web3](https://home.gamer.com.tw/artwork.php?sn=5026451), and [Web4](https://officeguide.cc/visual-studio-2019-create-dll-files-tutorial-examples/).

***

## Knowledge
* [This page](http://ot-note.logdown.com/posts/775098/ms-dllexport-vs-dllimport) talked about what exactly are dllimport and dllexport, though I can't aware of this.

***

## Something Important
* DEV-C++ IDE
	* I use C language as my DLL file and use python as my main file language.
	* All these files must run or compile in DEV-C++ IDE because the special macro DLLIMPORT is written by DEV-C++. I can't use it in other IDE like Visual Studio, etc.(of course I know)
	* Call_DLL.c file which is the main file to call the DLL file is what I get in [Web2](https://pws.niu.edu.tw/~ttlee/sp.100.2/dll/). But when I compile the file, I got an error like this.![compile error](./img/compile_error.jpg)Unfortunately, I can't solve it by browsing some websites. So, I just keep it, maybe someday I can solve it somehow.
	* [Solved](#solved)I got another error about C language. Please check Add function in dllmain.c file. I can't received the whole string but the other int type parameters. An error message like this<img src="./img/parse_error.jpg" alt="parse_error" style="zoom:200%;" />According to the image, I can just receive one character and show it on the monitor and I have no idea.

* VS IDE
	* [VisualStudioExample](/VisualStudioExample/) folder is refer to [Web4](https://officeguide.cc/visual-studio-2019-create-dll-files-tutorial-examples/) and implements how to use .dll file in other projects by VS2022.

***

## Solved
* According to [Stackoverflow post](https://stackoverflow.com/questions/55037429/passing-string-from-python-to-c-using-ctypes-only-the-first-character-is-sen), you have to transfer the data type of stu_id parameter before passing through the function.