#include <iostream>
#include <fstream> 
#include<windows.h> 
#include<vector>
#include<string>

using namespace std;

#include"../Entity/User.h"

#include"../DTO/DTOUser.h"

#include"../Entity/Advertisement.h"

#include"../DTO/DTOAdvertisement.h"

#include"../AUTH/CorrectLogIn.h"

#include"../AUTH/Registration.h"

#include"../AUTH/ViewAllBeforeLogIn.h"

#include"../AUTH/LogIn.h"



#include"../AUTH/MainMenu.h"

int main()
{
	cout << "\t\t\tHello \n";
	mainMenu();
	return 0;
}