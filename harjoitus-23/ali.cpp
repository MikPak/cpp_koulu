int menu(void)
{
	int choice = 0;

	cout << endl << "Person register ( Max " << MAX_PERSON << " persons. )" << endl;
	cout << "---------------------------------" << endl << endl;
	cout << "Menu" << endl;
	cout << "0 - Quit" << endl;
	cout << "1 - Add person" << endl;
	cout << "2 - View person in array" << endl;
	cout << "3 - View all persons in array" << endl;
	cout << endl << "Enter command: ";
	cin >> choice;

	return choice;
}

void add_person(person *persona, int *lkm) {

	if (*lkm != MAX_PERSON)
	{
		cout << endl << "Add person" << endl;
		cout << "------------" << endl << endl;
		cout << "First name: ";
		cin >> persona[*lkm].firstname;
		cout << "Distance from school: ";
		cin >> persona[*lkm].distschool;
		cout << "Sife of the hat: ";
		cin >> persona[*lkm].sizehat;
		cout << endl;

		cout << "Added " << persona[*lkm].firstname << "!" << endl;
		cout << "Total " << *lkm + 1 << " names in register. Max " << MAX_PERSON << " persons. " << endl;
		(*lkm)++;

	}
	else
	{
		cout << "Reached max number in persons. Can't add more." << endl;
	}
}

void PrintAllPersons(person *persona, int amount) {

	cout << endl << "View all persons in array" << endl;
	cout << "-------------------------" << endl << endl;

	if (amount == 0)
		cout << "No persons in the register yet." << endl;

	for (int i = 0; i < amount; i++)
	{
		cout << "Person #" << i + 1 << endl;
		cout << "First name: " << persona[i].firstname << endl;
		cout << "Distance from school: " << persona[i].distschool << "km" << endl;
		cout << "Size of the hat: " << persona[i].sizehat << endl;
		cout << "----------------" << endl;
	}

}

void PrintPerson(person *persona, int num) {

	cout << endl << "View person in array" << endl;
	cout << "--------------------" << endl << endl;

	if (num != 0)
	{
		int numb;
		cout << "Enter a number (1-9):" << endl;
		cin >> numb;

		if (numb > 0) {
			if (numb > MAX_PERSON)
			{
				cout << "The maximum number of people in the array is. " << MAX_PERSON << "." << endl;
			}
			else
			{
				if (numb > num)
				{
					cout << "Can't find this person, there is only " << num << " people in register. You entered " << numb << "." << endl;
				}
				else {
					cout << "Name: " << persona[numb - 1].firstname << endl;
					cout << "Distance from school: " << persona[numb - 1].distschool << "km" << endl;
					cout << "Size of the hat: " << persona[numb - 1].sizehat << endl;
				}
			}
		}
		else {
			cout << "Luvun on oltava 1-" << MAX_PERSON << " v\x84liss\x84." << endl;
		}
	}
	else
		cout << "No persons in the register yet." << endl;
}