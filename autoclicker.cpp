
#include <iostream>
#include <string>
#include <Windows.h>   
using namespace std;


int main()
{
	SetConsoleTitle("Console Title here!");
	int delay;
	string Input;
	cout << "Type R for right click L for left click: ";
	cin >> Input;


	cout << "Delay between the clicks [1-1000]: ";
	cin >> delay;
	cout << "You are now ready to use the autoclicker, hold space to activate the Autoclicker." << endl;
	system("color A");  //after all of the user inputs the color of the text changes

						/*~I know this is fucking confusing, but it works :thumbs_up:~*/
	if (Input.compare("R"))  //this will activate RIGHTDOWN, not LEFTDOWN!
	{

		while (true)
		{
			if (GetAsyncKeyState(VK_SPACE))
			{
				mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
				Sleep(delay);
				mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
			}
		}
	}
	else if (Input.compare("L"))
	{
		while (true)
		{
			if (GetAsyncKeyState(VK_SPACE))
			{
				mouse_event(MOUSEEVENTF_RIGHTDOWN, 0, 0, 0, 0);
				Sleep(delay);
				mouse_event(MOUSEEVENTF_RIGHTUP, 0, 0, 0, 0);
			}
		}
	}
}
/*~~ CHANGE THE KEYS ~~*/
/*~~ http://www.kbdedit.com/manual/low_level_vk_list.html ~~*/
/*~Any good anti-cheat blocks this kind of consistent clicking(not randomized), so don't use on games that have a decent anti-cheat!~*/
