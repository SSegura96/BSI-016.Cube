#include <iostream>

using namespace std;

void EscogerAccion(int line)
{
	char simbolo = ' ';
	int n = 0;
	int veces = 0;
	
	switch (line)
	{
	case 1:
		simbolo = '*';
		while (n<12)
		{
			cout << simbolo<< " ";
			n++;
		}
		break;

	case 2:
		simbolo = '*';
		n = 0;
		veces = 2;
		while (n<5)
		{
			if (n == 1)
			{
				simbolo = ' ';
				veces = 16;
			}
			else
			{
				if (n == 2)
				{
					simbolo = '*';
					veces = 1;
				}
				else
				{
					if (n == 3)
					{
						simbolo = ' ';
						veces = 2;
					}
					else
					{
						if (n == 4)
						{
							simbolo = '*';
							veces = 1;
						}
					}
				}
			}
			int i = 0;
			while (i<veces)
			{
				cout << simbolo;
				if (simbolo == '*')
				{
					cout << " ";
				}
				i++;
			}
			n++;
		}
		break;

	case 3:
		simbolo = '*';
		n = 0;
		veces = 1;
		while (n < 7)
		{
			if (n == 1)
			{
				simbolo = ' ';
				veces = 2;
			}
			else
			{
				if (n == 2 || n == 4 || n == 6)
				{
					simbolo = '*';
					veces = 1;
				}
				else
				{
					if (n == 3)
					{
						simbolo = ' ';
						veces = 14;
					}
					else
					{
						if (n == 5)
						{
							simbolo = ' ';
							veces = 4;
						}
					}
				}
			}

			int i = 0;
			while (i<veces)
			{
				cout << simbolo;
				if (simbolo == '*')
				{
					cout << " ";
				}
				i++;
			}
			n++;
		}
		break;

	case 4:
		simbolo = '*';
		n = 0;
		veces = 1;
		while (n < 7)
		{
			if (n == 1)
			{
				simbolo = ' ';
				veces = 4;
			}
			else
			{
				if (n == 2 || n == 4 || n == 6)
				{
					simbolo = '*';
					veces = 1;
				}
				else
				{
					if (n == 3)
					{
						simbolo = ' ';
						veces = 12;
					}
					else
					{
						if (n == 5)
						{
							simbolo = ' ';
							veces = 6;
						}
					}
				}
			}

			int i = 0;
			while (i<veces)
			{
				cout << simbolo;
				if (simbolo == '*')
				{
					cout << " ";
				}
				i++;
			}
			n++;
		}
		break;

	case 5:
		simbolo = '*';
		n = 0;
		veces = 1;
		while (n < 3)
		{
			if (n == 1)
			{
				simbolo = ' ';
				veces = 6;
			}
			else
			{
				if (n == 2)
				{
					simbolo = '*';
					veces = 12;
				}
			}

			int i = 0;
			while (i<veces)
			{
				cout << simbolo;
				if (simbolo == '*')
				{
					cout << " ";
				}
				i++;
			}
			n++;
		}
		break;

	case 6:
	case 7:
		case 8:
		simbolo = '*';
		n = 0;
		veces = 1;
		while (n < 7)
		{
			if (n == 1)
			{
				simbolo = ' ';
				veces = 6;
			}
			else
			{
				if (n == 2 || n == 4 || n == 6)
				{
					simbolo = '*';
					veces = 1;
				}
				else
				{
					if (n == 3)
					{
						simbolo = ' ';
						veces = 10;
					}
					else
					{
						if (n == 5)
						{
							simbolo = ' ';
							veces = 8;
						}
					}
				}
			}

			int i = 0;
			while (i<veces)
			{
				cout << simbolo;
				if (simbolo == '*')
				{
					cout << " ";
				}
				i++;
			}
			n++;
		}
		break;

	case 9:
		simbolo = '*';
		n = 0;
		veces = 11;
		while (n < 3)
		{
			if (n == 1)
			{
				simbolo = ' ';
				veces = 8;
			}
			else
			{
				if (n == 2)
				{
					simbolo = '*';
					veces = 1;
				}
			}

			int i = 0;
			while (i<veces)
			{
				cout << simbolo;
				if (simbolo == '*')
				{
					cout << " ";
				}
				i++;
			}
			n++;
		}
		break;

	case 10:
		simbolo = ' ';
		n = 0;
		veces = 1;
		while (n < 8)
		{
			if (n == 1)
			{
				simbolo = '*';
				veces = 1;
			}
			else
			{
				if (n == 2)
				{
					simbolo = ' ';
					veces = 5;
				}
				else
				{
					if (n == 3 || n == 5 || n == 7)
					{
						simbolo = '*';
						veces = 1;
					}
					else
					{
						if (n == 4)
						{
							simbolo = ' ';
							veces = 11;
						}
						else
						{
							if (n == 6)
							{
								simbolo = ' ';
								veces = 7;
							}
						}

					}
				}
			}

			int i = 0;
			while (i<veces)
			{
				cout << simbolo;
				if (simbolo == '*')
				{
					cout << " ";
				}
				i++;
			}
			n++;
		}
		break;

	case 11:
		simbolo = ' ';
		n = 0;
		veces = 3;
		while (n < 8)
		{
			if (n == 1)
			{
				simbolo = '*';
				veces = 1;
			}
			else
			{
				if (n == 2)
				{
					simbolo = ' ';
					veces = 3;
				}
				else
				{
					if (n == 3 || n == 5 || n == 7)
					{
						simbolo = '*';
						veces = 1;
					}
					else
					{
						if (n == 4)
						{
							simbolo = ' ';
							veces = 13;
						}
						else
						{
							if (n == 6)
							{
								simbolo = ' ';
								veces = 5;
							}
						}

					}
				}
			}

			int i = 0;
			while (i<veces)
			{
				cout << simbolo;
				if (simbolo == '*')
				{
					cout << " ";
				}
				i++;
			}
			n++;
		}
		break;

	case 12:
		simbolo = ' ';
		n = 0;
		veces = 5;
		while (n < 8)
		{
			if (n == 1)
			{
				simbolo = '*';
				veces = 1;
			}
			else
			{
				if (n == 2)
				{
					simbolo = ' ';
					veces = 1;
				}
				else
				{
					if (n == 3 || n == 5 || n == 7)
					{
						simbolo = '*';
						veces = 1;
					}
					else
					{
						if (n == 4)
						{
							simbolo = ' ';
							veces = 15;
						}
						else
						{
							if (n == 6)
							{
								simbolo = ' ';
								veces = 3;
							}
						}

					}
				}
			}

			int i = 0;
			while (i<veces)
			{
				cout << simbolo;
				if (simbolo == '*')
				{
					cout << " ";
				}
				i++;
			}
			n++;
		}
		break;

	case 13:
		simbolo = ' ';
		n = 0;
		veces = 6;
		while (n < 6)
		{
			if (n == 1)
			{
				simbolo = '*';
				veces = 2;
			}
			else
			{
				if (n == 2)
				{
					simbolo = ' ';
					veces = 17;
				}
				else
				{
					if (n == 3)
					{
						simbolo = '*';
						veces = 1;
					}
					else
					{
						if (n == 4)
						{
							simbolo = ' ';
							veces = 1;
						}
						else
						{
							if (n == 5)
							{
								simbolo = '*';
								veces = 1;
							}
						}

					}
				}
			}

			int i = 0;
			while (i<veces)
			{
				cout << simbolo;
				if (simbolo == '*')
				{
					cout << " ";
				}
				i++;
			}
			n++;
		}
		break;

	case 14:
		simbolo = ' ';
		n = 0;
		veces = 8;
		while (n < 2)
		{
			if (n == 1)
			{
				simbolo = '*';
				veces = 12;
			}

			int i = 0;
			while (i<veces)
			{
				cout << simbolo;
				if (simbolo == '*')
				{
					cout << " ";
				}
				i++;
			}
			n++;
		}
		break;

	}

}

int main()
{
	cout << "Sergio Luis Segura Vidal" << endl << endl;
	int line = 1;

	while (line <= 14)
	{
		EscogerAccion(line);
		cout << endl;
		line++;
	}
	return 0;
}