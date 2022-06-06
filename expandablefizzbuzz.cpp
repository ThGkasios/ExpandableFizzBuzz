#include <iostream> //Basics
#include <list> //List
#include <limits> //Show next by pressing Enter

/*
MIT License

Copyright (c) 2020 Themistoklis Gkasios

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
*/

///Struct to handle lists
struct chime{
	int num;
	std::string word;
	chime(int n, std::string w){num=n;word=w;}
};

///Method to handle game
void game(std::list<chime> l){
    int n = 1;
    std::string str;
    do {
	    str="";
	    for(std::list<chime>::iterator it = l.begin();it!=l.end();it++)
		    if(n%it->num==0)
			    str+=it->word;
	    if(str.length()==0)
		    std::cout << n;
	    else
		    std::cout << str;
	    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	    n++;
	} while (true);
}

///Words are added here
int main(){
	std::list<chime>chime_list;
	chime_list.push_back(chime(3,"Fizz"));
	chime_list.push_back(chime(5,"Buzz"));
//	chime_list.push_back(chime(7,"Jazz"));
	game(chime_list);
	return 0;
}
