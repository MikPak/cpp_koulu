void DisplayMenu(void) {
	int choice = 0;

	cout << endl << "Person register ( Max " << MAX_PERSON << " persons. )" << endl;
	cout << "---------------------------------" << endl << endl;
	cout << "Menu" << endl;
	cout << "0 - Quit" << endl;
	cout << "1 - Show menu" << endl;
	cout << "2 - Add person" << endl;
	cout << "3 - View person in array" << endl;
	cout << "4 - View all persons in array" << endl;
	cout << "5 - Delete person" << endl;
	cout << "6 - Export to file" << endl;
	cout << "7 - Import from file" << endl;
}

void AddPerson(person *persona, int *lkm) {
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

void DeletePerson(person *persona, int *lkm) {
	int choice = 0;

	cout << endl << "Delete person" << endl;
	cout << "------------" << endl << endl;
	cout << "1 - Delete all" << endl;
	cout << "2 - Delete person" << endl;

	if (*lkm > 0)
	{
		cout << endl << "Enter command: ";
		cin >> choice;

		if (choice == 1) { // Delete all
			for (int i = 0; i != *lkm; i++)
			{
				cout << "Deleted " << persona[i].firstname << endl;
				persona[i].firstname = "0";
				persona[i].distschool = 0;
				persona[i].sizehat = 0;
			}
			*lkm = 0;
		}

		if (choice == 2) // Delete person
		{
			int choice;
			cout << "Enter a number for person you want to delete (1-9):" << endl;
			cin >> choice;

			if (choice > 0)
			{
				if (choice > MAX_PERSON)
				{
					cout << "The maximum number of people in the array is: " << MAX_PERSON << "." << endl;
				}
				else
				{
					if (choice > *lkm)
					{
						cout << "Can't find this person, there is only " << *lkm << " people in register. You entered " << choice << "." << endl;
					}
					else {
						cout << "Deleted: " << persona[*lkm - 1].firstname << endl;
						persona[*lkm - 1].firstname = "0";
						persona[*lkm - 1].distschool = 0;
						persona[*lkm - 1].sizehat = 0;
						*lkm = *lkm - 1;
					}
				}
			}
		}
	}
	else
	{
		cout << endl << "There is no entries in the register." << endl;
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

		if (numb > 0) 
		{
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
				else 
				{
					cout << "Name: " << persona[numb - 1].firstname << endl;
					cout << "Distance from school: " << persona[numb - 1].distschool << "km" << endl;
					cout << "Size of the hat: " << persona[numb - 1].sizehat << endl;
				}
			}
		}
		else {
			cout << "Must be between 1-" << MAX_PERSON << "." << endl;
		}
	}
	else
		cout << "No persons in the register yet." << endl;
}

void ExportToFile(person *persona, int num) {
	cout << endl << "Export to file" << endl;
	cout << "--------------" << endl << endl;

	if (num != 0)
	{
		string filename;

		cout << "Enter file name without the file format. Eg. 'members'" << endl;
		cout << "File name (Will be created if doesn't exist): ";
		cin >> filename;

		filename.append(".txt");
		ofstream fout(filename);

		if (fout.is_open())
		{
			for (int i = 0; i < num; i++)
			{
				fout << persona[i].firstname << endl 
					<< persona[i].distschool << endl 
					<< persona[i].sizehat << endl 
					<< "-" << endl;
			}
			cout << "Saved " << num << " persons to " << filename << "." << endl;
			fout.close();
		}
		else
		{
			cout << "File could not be opened." << endl;
		}
	}
	else cout << "No persons in the register yet, nothing to export." << endl;
}

void ImportFromFile(person *persona, int *num) {
	cout << endl << "Import from file" << endl;
	cout <<	"----------------" << endl << endl;

if (*num != MAX_PERSON)
{
	string filename, line;

	cout << "Enter file name without the file format. Eg. 'members': ";
	cin >> filename;

	filename.append(".txt");
	ifstream fout(filename);

	if (fout.good()) {
		if (fout.is_open())
		{
			string char_ignore = "\t\n\v\f\r";
			while (!fout.eof() && *num != MAX_PERSON)
			{
				for (int i = 0; i < 4; i++) // Reading 3 lines from file to structure.
				{
					getline(fout, line);
						
					if (i != 3 && line.find_first_not_of(char_ignore) != string::npos) // Third line in text file is "-", which separates persons in the file.
					{
						if (i == 0) // Person name
						{
							persona[*num].firstname = line;
							cout << "Imported: " << persona[*num].firstname << "." << endl;
						}
						if (i == 1) // Person distance from school
						{
							persona[*num].distschool = stod(line);
						}
						if (i == 2) // Person hat size
						{
							persona[*num].sizehat = stoi(line);
						}
					}
				}
				*num = *num + 1;
			}
		}
		fout.close();
		}
		else {
			fout.close();
			cout << "File not found.";
		}
	} 
	else cout << "Can't import more persons, max number of persons is " << MAX_PERSON << endl;
}