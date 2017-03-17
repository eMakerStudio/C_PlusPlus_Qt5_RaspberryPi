/*
 * books.cpp
 * Structure as argument
 *
 * 
 * Copyright 2017  <pi@raspberrypi>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */


#include <iostream>
#include <string.h>
using namespace std;

struct book
{
	int bno;
	char name[40];
};

void display(struct book);


void main()
{
	struct book b;
	cout << "Enter book no: ";
	cin >> b.bno << endl;
	cout << "Enter book name; ";
	cin >> b.name << endl;
	display(b);
	
}

void display(struct book b)
{
	cout << "Book details: " << endl;
	cout << "Book number: " << b.bno << endl;
	cout << "Book name; " << b.name << endl;
}


