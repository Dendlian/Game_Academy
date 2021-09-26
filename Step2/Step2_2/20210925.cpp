#include"F_Store.h"

int main() 
{
	F_Store Store;
	
	cout << Store.GetPlay() << endl;

	while (Store.GetPlay()) 
	{
		Store.Select_Menu(); 
	}
	 
	return 0;
}