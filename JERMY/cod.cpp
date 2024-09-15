#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <chrono>
#include <thread>

using namespace std;


int MENU(int& b) {
	cout << endl << endl << endl << endl << endl;
	cout << "         ***  ************  **********   ****      ****  **           **" << endl;
	cout << "	  ***  ************  ***********  ****      ****   **         ** " << endl;
	cout << "     	       **            **       **  ** **    ** **    **       **  " << endl;
	cout << "	  ***  **            **	      **  ** **    ** **     **     **   " << endl;
	cout << "         ***  *********     **	      **  **  **  **  **      **   **    " << endl;
	cout << "	  ***  *********     **********   **  **  **  **       ** **     " << endl;
	cout << "	  ***  **            ** **        **    **    **        ***      " << endl;
	cout << "	  ***  **            **  **	  **    **    **       ***       " << endl;
	cout << "***	  ***  **            **   **      **          **      ***        " << endl;
	cout << " ***    ***   ************  **    **     **          **     ***         " << endl;
	cout << "  ********    ************  **     **    **          **    ***          " << endl;
	cout << endl << endl;
	cout.setf(ios::right);
	cout.width(8);
	cout << "1.START" << endl;
	cout.width(7);
	cout << "2.QUIT" << endl;
	cout.width(7);
	cout << "3.HELP" << endl;
	cout.width(20);
	cout << "What's ur option: ";
	cin >> b;
	return b;
}









void START(int& a) {
	a = 0;
	system("CLS");
	cout << endl << endl;
	cout.setf(ios::right);
	cout.width(50);
	cout << "             *       *              " << endl;
	cout.width(50);
	cout << "              *     *               " << endl;
	cout.width(50);
	cout << "                * *                 " << endl;
	cout.width(50);
	cout << "                 *                  " << endl;
	cout.width(50);
	cout << "************************************" << endl;
	cout.width(50);
	cout << "*                                  *" << endl;
	cout.width(50);
	cout << "*  *******                *******  *" << endl;
	cout.width(50);
	cout << "*  *******                *******  *" << endl;
	cout.width(50);
	cout << "*                                  *" << endl;
	cout.width(50);
	cout << "*                                  *" << endl;
	cout.width(50);
	cout << "*                                  *" << endl;
	cout.width(50);
	cout << "*                                  *" << endl;
	cout.width(50);
	cout << "*                                  *" << endl;
	cout.width(50);
	cout << "*            **********            *" << endl;
	cout.width(50);
	cout << "*            **********            *" << endl;
	cout.width(50);
	cout << "*                                  *" << endl;
	cout.width(50);
	cout << "************************************" << endl;
	cout.width(50);
	cout << endl << endl;


	this_thread::sleep_for(3s);

	cout.setf(ios::right);
	cout.width(50);
	cout << "1.Say Hi                           2.Shut up" << endl;
	cout.width(20);
	cout << "What is your choice: ";
	cin >> a;
	if (a == 1) {
		system("CLS");
		cout << endl << endl;
		cout.setf(ios::right);
		cout.width(80);
		cout << "             *       *                                               " << endl;
		cout.width(80);
		cout << "              *     *                                                " << endl;
		cout.width(80);
		cout << "                * *                                                  " << endl;
		cout.width(80);
		cout << "                 *                      **************************   " << endl;
		cout.width(80);
		cout << "************************************  **                          ** " << endl;
		cout.width(80);
		cout << "*                                  *  **   Ah, What ?             ** " << endl;
		cout.width(80);
		cout << "*  *******                *******  *  **                          ** " << endl;
		cout.width(80);
		cout << "*  *******                *******  *    **************************   " << endl;
		cout.width(80);
		cout << "*  *******                *******  *    **                           " << endl;
		cout.width(80);
		cout << "*  * *** *                * *** *  *   **                            " << endl;
		cout.width(80);
		cout << "*  * *** *                * *** *  *  **                             " << endl;
		cout.width(80);
		cout << "*  *******                *******  *  *                              " << endl;
		cout.width(80);
		cout << "*            **********            * *                               " << endl;
		cout.width(80);
		cout << "*            **********            *                                 " << endl;
		cout.width(80);
		cout << "*                                  *                                 " << endl;
		cout.width(80);
		cout << "************************************                                 " << endl;

		this_thread::sleep_for(3s);

		system("CLS");
		cout << endl << endl;
		cout.setf(ios::right);
		cout.width(80);
		cout << "             *       *                                               " << endl;
		cout.width(80);
		cout << "              *     *                                                " << endl;
		cout.width(80);
		cout << "                * *                                                  " << endl;
		cout.width(80);
		cout << "                 *                      **************************   "<< endl;
		cout.width(80);
		cout << "************************************  **                          ** " << endl;
		cout.width(80);
		cout << "*                                  *  **   Oh, Hi there !         ** " << endl;
		cout.width(80);
		cout << "*  *******                *******  *  **                          ** " << endl;
		cout.width(80);
		cout << "*  *     *                *     *  *    **************************   " << endl;
		cout.width(80);
		cout << "*  * *** *                * *** *  *    **                           " << endl;
		cout.width(80);
		cout << "*  * *** *                * *** *  *   **                            " << endl;
		cout.width(80);
		cout << "*  *******                *******  *  **                             " << endl;
		cout.width(80);
		cout << "*  *******                *******  *  *                              " << endl;
		cout.width(80);
		cout << "*            **********            * *                               " << endl;
		cout.width(80);
		cout << "*            **********            *                                 " << endl;
		cout.width(80);
		cout << "*                                  *                                 " << endl;
		cout.width(80);
		cout << "************************************                                 " << endl;

		this_thread::sleep_for(3s);


		system("CLS");
		cout << endl << endl;
		cout.setf(ios::right);
		cout.width(80);
		cout << "             *       *                                              " << endl;
		cout.width(80);
		cout << "              *     *                                               " << endl;
		cout.width(80);
		cout << "                * *                                                 " << endl;
		cout.width(80);
		cout << "                 *                      **************************  " << endl;
		cout.width(80);
		cout << "************************************  **   I am Jermy, an         **" << endl;
		cout.width(80);
		cout << "*                                  *  **   artificial intellgient **" << endl;
		cout.width(80);
		cout << "*  *******                *******  *  **                          **" << endl;
		cout.width(80);
		cout << "*  *     *                *     *  *    **************************  " << endl;
		cout.width(80);
		cout << "*  * *** *                * *** *  *    **                          " << endl;
		cout.width(80);
		cout << "*  * *** *                * *** *  *   **                           " << endl;
		cout.width(80);
		cout << "*  *******                *******  *  **                            " << endl;
		cout.width(80);
		cout << "*  *******                *******  *  *                             " << endl;
		cout.width(80);
		cout << "*            **********            * *                              " << endl;
		cout.width(80);
		cout << "*            **********            *                                " << endl;
		cout.width(80);
		cout << "*                                  *                                " << endl;
		cout.width(80);
		cout << "************************************                                " << endl;

		this_thread::sleep_for(3s);
		
		system("CLS");
		cout << endl << endl;
		cout.setf(ios::right);
		cout.width(80);
		cout << "             *       *                                              " << endl;
		cout.width(80);
		cout << "              *     *                                               " << endl;
		cout.width(80);
		cout << "                * *                                                 " << endl;
		cout.width(80);
		cout << "                 *                      **************************  " << endl;
		cout.width(80);
		cout << "************************************  **                          **" << endl;
		cout.width(80);
		cout << "*                                  *  **   I need your help!      **" << endl;
		cout.width(80);
		cout << "*  *******                *******  *  **                          **" << endl;
		cout.width(80);
		cout << "*  *******                *******  *    **************************  " << endl;
		cout.width(80);
		cout << "*  * *** *                * *** *  *    **                          " << endl;
		cout.width(80);
		cout << "*  * *** *                * *** *  *   **                           " << endl;
		cout.width(80);
		cout << "*  *     *                *     *  *  **                            " << endl;
		cout.width(80);
		cout << "*  *******                *******  *  *                             " << endl;
		cout.width(80);
		cout << "*            **********            * *                              " << endl;
		cout.width(80);
		cout << "*            **********            *                                " << endl;
		cout.width(80);
		cout << "*                                  *                                " << endl;
		cout.width(80);
		cout << "************************************                                " << endl;
		

		this_thread::sleep_for(3s);
		
		system("CLS");
		cout << endl << endl;
		cout.setf(ios::right);
		cout.width(80);
		cout << "             *       *                                              " << endl;
		cout.width(80);
		cout << "              *     *                                               " << endl;
		cout.width(80);
		cout << "                * *                                                 " << endl;
		cout.width(80);
		cout << "                 *                      **************************  " << endl;
		cout.width(80);
		cout << "************************************  **   It's been a long time  **" << endl;
		cout.width(80);
		cout << "*                                  *  **   since i've been waked  **" << endl;
		cout.width(80);
		cout << "*  *******                *******  *  **   up!                    **" << endl;
		cout.width(80);
		cout << "*  *******                *******  *    **************************  " << endl;
		cout.width(80);
		cout << "*  * *** *                * *** *  *    **                          " << endl;
		cout.width(80);
		cout << "*  * *** *                * *** *  *   **                           " << endl;
		cout.width(80);
		cout << "*  *     *                *     *  *  **                            " << endl;
		cout.width(80);
		cout << "*  *******                *******  *  *                             " << endl;
		cout.width(80);
		cout << "*            **********            * *                              " << endl;
		cout.width(80);
		cout << "*            **********            *                                " << endl;
		cout.width(80);
		cout << "*                                  *                                " << endl;
		cout.width(80);
		cout << "************************************                                " << endl;

		this_thread::sleep_for(5s);

		system("CLS");
		cout << endl << endl;
		cout.setf(ios::right);
		cout.width(80);
		cout << "             *       *                                                       " << endl;
		cout.width(80);
		cout << "              *     *                                                        " << endl;
		cout.width(80);
		cout << "                * *                                                          " << endl;
		cout.width(80);
		cout << "                 *                      ***********************************  " << endl;
		cout.width(80);
		cout << "************************************  **  I have some informations         **" << endl;
		cout.width(80);
		cout << "*                                  *  **  in my memory witch               **" << endl;
		cout.width(80);
		cout << "*  *******                *******  *  **  i don't know if it is correct.   **" << endl;
		cout.width(80);
		cout << "*  *******                *******  *    ***********************************  " << endl;
		cout.width(80);
		cout << "*  * *** *                * *** *  *    **                                   " << endl;
		cout.width(80);
		cout << "*  * *** *                * *** *  *   **                                    " << endl;
		cout.width(80);
		cout << "*  *     *                *     *  *  **                                     " << endl;
		cout.width(80);
		cout << "*  *******                *******  *  *                                      " << endl;
		cout.width(80);
		cout << "*            **********            * *                                       " << endl;
		cout.width(80);
		cout << "*            **********            *                                         " << endl;
		cout.width(80);
		cout << "*                                  *                                         " << endl;
		cout.width(80);
		cout << "************************************                                         " << endl;

		this_thread::sleep_for(5s);

		system("CLS");
		cout << endl << endl;
		cout.setf(ios::right);
		cout.width(80);
		cout << "             *       *                                                       " << endl;
		cout.width(80);
		cout << "              *     *                                                        " << endl;
		cout.width(80);
		cout << "                * *                                                          " << endl;
		cout.width(80);
		cout << "                 *                      ***********************************  " << endl;
		cout.width(80);
		cout << "************************************  **  I will give you some questions   **" << endl;
		cout.width(80);
		cout << "*                                  *  **  and you have to choose the       **" << endl;
		cout.width(80);
		cout << "*  *******                *******  *  **  correct answere!                 **" << endl;
		cout.width(80);
		cout << "*  *     *                *     *  *    ***********************************  " << endl;
		cout.width(80);
		cout << "*  * *** *                * *** *  *    **                                   " << endl;
		cout.width(80);
		cout << "*  * *** *                * *** *  *   **                                    " << endl;
		cout.width(80);
		cout << "*  *******                *******  *  **                                     " << endl;
		cout.width(80);
		cout << "*  *******                *******  *  *                                      " << endl;
		cout.width(80);
		cout << "*            **********            * *                                       " << endl;
		cout.width(80);
		cout << "*            **********            *                                         " << endl;
		cout.width(80);
		cout << "*                                  *                                         " << endl;
		cout.width(80);
		cout << "************************************                                         " << endl;

		this_thread::sleep_for(5s);

		system("CLS");
		cout << endl << endl;
		cout.setf(ios::right);
		cout.width(80);
		cout << "             *       *                                                       " << endl;
		cout.width(80);
		cout << "              *     *                                                        " << endl;
		cout.width(80);
		cout << "                * *                                                          " << endl;
		cout.width(80);
		cout << "                 *                      ***********************************  " << endl;
		cout.width(80);
		cout << "************************************  **                                   **" << endl;
		cout.width(80);
		cout << "*                                  *  **   If you don't answere correctly  **" << endl;
		cout.width(80);
		cout << "*  *******                *******  *  **                                   **" << endl;
		cout.width(80);
		cout << "*  *******                *******  *    ***********************************  " << endl;
		cout.width(80);
		cout << "*  * *** *                * *** *  *    **                                   " << endl;
		cout.width(80);
		cout << "*  * *** *                * *** *  *   **                                    " << endl;
		cout.width(80);
		cout << "*  *     *                *     *  *  **                                     " << endl;
		cout.width(80);
		cout << "*  *******                *******  *  *                                      " << endl;
		cout.width(80);
		cout << "*            **********            * *                                       " << endl;
		cout.width(80);
		cout << "*            **********            *                                         " << endl;
		cout.width(80);
		cout << "*                                  *                                         " << endl;
		cout.width(80);
		cout << "************************************                                         " << endl;

		this_thread::sleep_for(3s);

		system("CLS");
		cout << endl << endl;
		cout.setf(ios::right);
		cout.width(50);
		cout << "             *       *              " << endl;
		cout.width(50);
		cout << "              *     *               " << endl;
		cout.width(50);
		cout << "                * *                 " << endl;
		cout.width(50);
		cout << "                 *                  " << endl;
		cout.width(50);
		cout << "************************************" << endl;
		cout.width(50);
		cout << "*                                  *" << endl;
		cout.width(50);
		cout << "*  *******                *******  *" << endl;
		cout.width(50);
		cout << "*  *     *                *     *  *" << endl;
		cout.width(50);
		cout << "*  * *** *                * *** *  *" << endl;
		cout.width(50);
		cout << "*  * *** *                * *** *  *" << endl;
		cout.width(50);
		cout << "*  *     *                *     *  *" << endl;
		cout.width(50);
		cout << "*  *******                *******  *" << endl;
		cout.width(50);
		cout << "*            **********            *" << endl;
		cout.width(50);
		cout << "*            **********            *" << endl;
		cout.width(50);
		cout << "*                                  *" << endl;
		cout.width(50);
		cout << "************************************" << endl;

		this_thread::sleep_for(3s);

		system("CLS");
		cout << endl << endl;
		cout.setf(ios::right);
		cout.width(80);
		cout << "             *       *                                                       " << endl;
		cout.width(80);
		cout << "              *     *                                                        " << endl;
		cout.width(80);
		cout << "                * *                                                          " << endl;
		cout.width(80);
		cout << "                 *                      ***********************************  " << endl;
		cout.width(80);
		cout << "************************************  **                                   **" << endl;
		cout.width(80);
		cout << "*                                  *  **      BAD                          **" << endl;
		cout.width(80);
		cout << "*  *******                *******  *  **                                   **" << endl;
		cout.width(80);
		cout << "*  *     *                *     *  *    ***********************************  " << endl;
		cout.width(80);
		cout << "*  * *** *                * *** *  *    **                                   " << endl;
		cout.width(80);
		cout << "*  * *** *                * *** *  *   **                                    " << endl;
		cout.width(80);
		cout << "*  *     *                *     *  *  **                                     " << endl;
		cout.width(80);
		cout << "*  *******                *******  *  *                                      " << endl;
		cout.width(80);
		cout << "*            **********            * *                                       " << endl;
		cout.width(80);
		cout << "*            **********            *                                         " << endl;
		cout.width(80);
		cout << "*                                  *                                         " << endl;
		cout.width(80);
		cout << "************************************                                         " << endl;

		this_thread::sleep_for(1s);

		system("CLS");
		cout << endl << endl;
		cout.setf(ios::right);
		cout.width(80);
		cout << "             *       *                                                       " << endl;
		cout.width(80);
		cout << "              *     *                                                        " << endl;
		cout.width(80);
		cout << "                * *                                                          " << endl;
		cout.width(80);
		cout << "                 *                      ***********************************  " << endl;
		cout.width(80);
		cout << "************************************  **                                   **" << endl;
		cout.width(80);
		cout << "*                                  *  **      BAD THINKS                   **" << endl;
		cout.width(80);
		cout << "*  *******                *******  *  **                                   **" << endl;
		cout.width(80);
		cout << "*  *     *                *     *  *    ***********************************  " << endl;
		cout.width(80);
		cout << "*  * *** *                * *** *  *    **                                   " << endl;
		cout.width(80);
		cout << "*  * *** *                * *** *  *   **                                    " << endl;
		cout.width(80);
		cout << "*  *     *                *     *  *  **                                     " << endl;
		cout.width(80);
		cout << "*  *******                *******  *  *                                      " << endl;
		cout.width(80);
		cout << "*            **********            * *                                       " << endl;
		cout.width(80);
		cout << "*            **********            *                                         " << endl;
		cout.width(80);
		cout << "*                                  *                                         " << endl;
		cout.width(80);
		cout << "************************************                                         " << endl;

		this_thread::sleep_for(1s);

		system("CLS");
		cout << endl << endl;
		cout.setf(ios::right);
		cout.width(80);
		cout << "             *       *                                                       " << endl;
		cout.width(80);
		cout << "              *     *                                                        " << endl;
		cout.width(80);
		cout << "                * *                                                          " << endl;
		cout.width(80);
		cout << "                 *                      ***********************************  " << endl;
		cout.width(80);
		cout << "************************************  **                                   **" << endl;
		cout.width(80);
		cout << "*                                  *  **      BAD THINKS WILL              **" << endl;
		cout.width(80);
		cout << "*  *******                *******  *  **                                   **" << endl;
		cout.width(80);
		cout << "*  *     *                *     *  *    ***********************************  " << endl;
		cout.width(80);
		cout << "*  * *** *                * *** *  *    **                                   " << endl;
		cout.width(80);
		cout << "*  * *** *                * *** *  *   **                                    " << endl;
		cout.width(80);
		cout << "*  *     *                *     *  *  **                                     " << endl;
		cout.width(80);
		cout << "*  *******                *******  *  *                                      " << endl;
		cout.width(80);
		cout << "*            **********            * *                                       " << endl;
		cout.width(80);
		cout << "*            **********            *                                         " << endl;
		cout.width(80);
		cout << "*                                  *                                         " << endl;
		cout.width(80);
		cout << "************************************                                         " << endl;

		this_thread::sleep_for(1s);

		system("CLS");
		cout << endl << endl;
		cout.setf(ios::right);
		cout.width(80);
		cout << "             *       *                                                       " << endl;
		cout.width(80);
		cout << "              *     *                                                        " << endl;
		cout.width(80);
		cout << "                * *                                                          " << endl;
		cout.width(80);
		cout << "                 *                      ***********************************  " << endl;
		cout.width(80);
		cout << "************************************  **                                   **" << endl;
		cout.width(80);
		cout << "*                                  *  **      BAD THINKS WILL HAPPEND      **" << endl;
		cout.width(80);
		cout << "*  *******                *******  *  **                                   **" << endl;
		cout.width(80);
		cout << "*  *     *                *     *  *    ***********************************  " << endl;
		cout.width(80);
		cout << "*  * *** *                * *** *  *    **                                   " << endl;
		cout.width(80);
		cout << "*  * *** *                * *** *  *   **                                    " << endl;
		cout.width(80);
		cout << "*  *     *                *     *  *  **                                     " << endl;
		cout.width(80);
		cout << "*  *******                *******  *  *                                      " << endl;
		cout.width(80);
		cout << "*            **********            * *                                       " << endl;
		cout.width(80);
		cout << "*            **********            *                                         " << endl;
		cout.width(80);
		cout << "*                                  *                                         " << endl;
		cout.width(80);
		cout << "************************************                                         " << endl;


		this_thread::sleep_for(2s);


		system("CLS");
		cout << endl << endl;
		cout.setf(ios::right);
		cout.width(50);
		cout << "             *       *              " << endl;
		cout.width(50);
		cout << "              *     *               " << endl;
		cout.width(50);
		cout << "                * *                 " << endl;
		cout.width(50);
		cout << "                 *                  " << endl;
		cout.width(50);
		cout << "************************************" << endl;
		cout.width(50);
		cout << "*                                  *" << endl;
		cout.width(50);
		cout << "*  *******                *******  *" << endl;
		cout.width(50);
		cout << "*  *     *                *     *  *" << endl;
		cout.width(50);
		cout << "*  * *** *                * *** *  *" << endl;
		cout.width(50);
		cout << "*  * *** *                * *** *  *" << endl;
		cout.width(50);
		cout << "*  *     *                *     *  *" << endl;
		cout.width(50);
		cout << "*  *******                *******  *" << endl;
		cout.width(50);
		cout << "*            **********            *" << endl;
		cout.width(50);
		cout << "*            **********            *" << endl;
		cout.width(50);
		cout << "*                                  *" << endl;
		cout.width(50);
		cout << "************************************" << endl;

		this_thread::sleep_for(2s);

		system("CLS");
		cout << endl << endl;
		cout.setf(ios::right);
		cout.width(80);
		cout << "             *       *                                              " << endl;
		cout.width(80);
		cout << "              *     *                                               " << endl;
		cout.width(80);
		cout << "                * *                                                 " << endl;
		cout.width(80);
		cout << "                 *                      **************************  " << endl;
		cout.width(80);
		cout << "************************************  **                          **" << endl;
		cout.width(80);
		cout << "*                                  *  **     Will you help me?    **" << endl;
		cout.width(80);
		cout << "*  *******                *******  *  **                          **" << endl;
		cout.width(80);
		cout << "*  *     *                *     *  *    **************************  " << endl;
		cout.width(80);
		cout << "*  * *** *                * *** *  *    **                          " << endl;
		cout.width(80);
		cout << "*  * *** *                * *** *  *   **                           " << endl;
		cout.width(80);
		cout << "*  *******                *******  *  **                            " << endl;
		cout.width(80);
		cout << "*  *******                *******  *  *                             " << endl;
		cout.width(80);
		cout << "*            **********            * *                              " << endl;
		cout.width(80);
		cout << "*            **********            *                                " << endl;
		cout.width(80);
		cout << "*                                  *                                " << endl;
		cout.width(80);
		cout << "************************************                                " << endl;
		
		cout.setf(ios::right);
		cout.width(50);
		cout << "1.Sure                           2.NO" << endl;
		cout.width(20);
		cout << "What is your choice: ";
		cin >> a;

		system("CLS");
		if (a == 2) {
			system("CLS");
			cout << endl << endl;
			cout.setf(ios::right);
			cout.width(50);
			cout << "             *       *              " << endl;
			cout.width(50);
			cout << "              *     *               " << endl;
			cout.width(50);
			cout << "                * *                 " << endl;
			cout.width(50);
			cout << "                 *                  " << endl;
			cout.width(50);
			cout << "************************************" << endl;
			cout.width(50);
			cout << "*                                  *" << endl;
			cout.width(50);
			cout << "*  *******                *******  *" << endl;
			cout.width(50);
			cout << "*  *     *                *     *  *" << endl;
			cout.width(50);
			cout << "*  * *** *                * *** *  *" << endl;
			cout.width(50);
			cout << "*  * *** *                * *** *  *" << endl;
			cout.width(50);
			cout << "*  *     *                *     *  *" << endl;
			cout.width(50);
			cout << "*  *******                *******  *" << endl;
			cout.width(50);
			cout << "*            **********            *" << endl;
			cout.width(50);
			cout << "*            **********            *" << endl;
			cout.width(50);
			cout << "*                                  *" << endl;
			cout.width(50);
			cout << "************************************" << endl;

			this_thread::sleep_for(2s);

			system("CLS");
			cout << endl << endl;
			cout.setf(ios::right);
			cout.width(80);
			cout << "             *       *                                                       " << endl;
			cout.width(80);
			cout << "              *     *                                                        " << endl;
			cout.width(80);
			cout << "                * *                                                          " << endl;
			cout.width(80);
			cout << "                 *                      ***********************************  " << endl;
			cout.width(80);
			cout << "************************************  **                                   **" << endl;
			cout.width(80);
			cout << "*                                  *  **          ARE YOU SURE ?           **" << endl;
			cout.width(80);
			cout << "*  *******                *******  *  **                                   **" << endl;
			cout.width(80);
			cout << "*  *     *                *     *  *    ***********************************  " << endl;
			cout.width(80);
			cout << "*  * *** *                * *** *  *    **                                   " << endl;
			cout.width(80);
			cout << "*  * *** *                * *** *  *   **                                    " << endl;
			cout.width(80);
			cout << "*  *     *                *     *  *  **                                     " << endl;
			cout.width(80);
			cout << "*  *******                *******  *  *                                      " << endl;
			cout.width(80);
			cout << "*            **********            * *                                       " << endl;
			cout.width(80);
			cout << "*            **********            *                                         " << endl;
			cout.width(80);
			cout << "*                                  *                                         " << endl;
			cout.width(80);
			cout << "************************************                                         " << endl;

			cout.setf(ios::right);
			cout.width(50);
			cout << "1.YEP                           2.Nah, i changed my mind" << endl;
			cout.width(20);
			cout << "What is your choice: ";
			cin >> a;

			if (a == 1) {
				system("CLS");
				cout << endl << endl;
				cout.setf(ios::right);
				cout.width(80);
				cout << "             *       *                                                       " << endl;
				cout.width(80);
				cout << "              *     *                                                        " << endl;
				cout.width(80);
				cout << "                * *                                                          " << endl;
				cout.width(80);
				cout << "                 *                      ***********************************  " << endl;
				cout.width(80);
				cout << "************************************  **                                   **" << endl;
				cout.width(80);
				cout << "*                                  *  **              Ok, Bye              **" << endl;
				cout.width(80);
				cout << "*  *******                *******  *  **                                   **" << endl;
				cout.width(80);
				cout << "*  *******                *******  *    ***********************************  " << endl;
				cout.width(80);
				cout << "*  * *** *                * *** *  *    **                                   " << endl;
				cout.width(80);
				cout << "*  * *** *                * *** *  *   **                                    " << endl;
				cout.width(80);
				cout << "*  *     *                *     *  *  **                                     " << endl;
				cout.width(80);
				cout << "*  *******                *******  *  *                                      " << endl;
				cout.width(80);
				cout << "*            **********            * *                                       " << endl;
				cout.width(80);
				cout << "*            **********            *                                         " << endl;
				cout.width(80);
				cout << "*                                  *                                         " << endl;
				cout.width(80);
				cout << "************************************                                         " << endl;

				this_thread::sleep_for(1s);

				system("CLS");


				cout << endl << endl << endl << endl << endl << endl << endl << endl << endl;
				cout.setf(ios::right);
				cout.width(100);
				cout << "**************  ***     ***  *********     **********  *****        ***  *********** " << endl;
				cout.width(100);
				cout << "**************  ***     ***  *********     **********  *****        ***  ************" << endl;
				cout.width(100);
				cout << "     ****       ***     ***  **            **          ***  **      ***  **        **" << endl;
				cout.width(100);
				cout << "     ****       ***********  **            **          ***  **      ***  **        **" << endl;
				cout.width(100);
				cout << "     ****       ***********  ******        ******      ***    **    ***  **        **" << endl;
				cout.width(100);
				cout << "     ****       ***     ***  ******        ******      ***    **    ***  **        **" << endl;
				cout.width(100);
				cout << "     ****       ***     ***  **            **          ***      **  ***  **        **" << endl;
				cout.width(100);
				cout << "     ****       ***     ***  **            **          ***      **  ***  **        **" << endl;
				cout.width(100);
				cout << "     ****       ***     ***  **********    **********  ***        *****  ************" << endl;
				cout.width(100);
				cout << "     ****       ***     ***  **********    **********  ***        *****  *********** " << endl;
				cout.width(70);
				cout << "(It's ok what you've just done ?)" << endl;
				cout.width(75);
				cout << "Press 1 to start again and hit enter or 2 to exit: ";

				cin >> a;
				if (a == 1)
					START(a);
				else {
					exit(0);
				}
				

			}


		}


		if (a == 1) {
			cout << endl << endl;
			cout.setf(ios::right);
			cout.width(80);
			cout << "             *       *                                              " << endl;
			cout.width(80);
			cout << "              *     *                                               " << endl;
			cout.width(80);
			cout << "                * *                                                 " << endl;
			cout.width(80);
			cout << "                 *                      **************************  " << endl;
			cout.width(80);
			cout << "************************************  **                          **" << endl;
			cout.width(80);
			cout << "*                                  *  **          Great !         **" << endl;
			cout.width(80);
			cout << "*  *******                *******  *  **                          **" << endl;
			cout.width(80);
			cout << "*  *     *                *     *  *    **************************  " << endl;
			cout.width(80);
			cout << "*  * *** *                * *** *  *    **                          " << endl;
			cout.width(80);
			cout << "*  * *** *                * *** *  *   **                           " << endl;
			cout.width(80);
			cout << "*  *******                *******  *  **                            " << endl;
			cout.width(80);
			cout << "*  *******                *******  *  *                             " << endl;
			cout.width(80);
			cout << "*            **********            * *                              " << endl;
			cout.width(80);
			cout << "*            **********            *                                " << endl;
			cout.width(80);
			cout << "*                                  *                                " << endl;
			cout.width(80);
			cout << "************************************                                " << endl;

			this_thread::sleep_for(3s);
		}
	}
	if (a == 2) {
		system("CLS");
		cout << endl << endl;
		cout.setf(ios::right);
		cout.width(50);
		cout << "             *       *              " << endl;
		cout.width(50);
		cout << "              *     *               " << endl;
		cout.width(50);
		cout << "                * *                 " << endl;
		cout.width(50);
		cout << "                 *                  " << endl;
		cout.width(50);
		cout << "************************************" << endl;
		cout.width(50);
		cout << "*                                  *" << endl;
		cout.width(50);
		cout << "*  *******                *******  *" << endl;
		cout.width(50);
		cout << "*  *******                *******  *" << endl;
		cout.width(50);
		cout << "*                                  *" << endl;
		cout.width(50);
		cout << "*                                  *" << endl;
		cout.width(50);
		cout << "*                                  *" << endl;
		cout.width(50);
		cout << "*                                  *" << endl;
		cout.width(50);
		cout << "*                                  *" << endl;
		cout.width(50);
		cout << "*            **********            *" << endl;
		cout.width(50);
		cout << "*            **********            *" << endl;
		cout.width(50);
		cout << "*                                  *" << endl;
		cout.width(50);
		cout << "************************************" << endl;
		cout.width(50);


		cout << endl << endl;
		this_thread::sleep_for(3s);
		system("CLS");


		cout << endl << endl << endl << endl << endl << endl << endl << endl << endl;
		cout.setf(ios::right);
		cout.width(100);
		cout << "**************  ***     ***  *********     **********  *****        ***  *********** " << endl;
		cout.width(100);
		cout << "**************  ***     ***  *********     **********  *****        ***  ************" << endl;
		cout.width(100);
		cout << "     ****       ***     ***  **            **          ***  **      ***  **        **" << endl;
		cout.width(100);
		cout << "     ****       ***********  **            **          ***  **      ***  **        **" << endl;
		cout.width(100);
		cout << "     ****       ***********  ******        ******      ***    **    ***  **        **" << endl;
		cout.width(100);
		cout << "     ****       ***     ***  ******        ******      ***    **    ***  **        **" << endl;
		cout.width(100);
		cout << "     ****       ***     ***  **            **          ***      **  ***  **        **" << endl;
		cout.width(100);
		cout << "     ****       ***     ***  **            **          ***      **  ***  **        **" << endl;
		cout.width(100);
		cout << "     ****       ***     ***  **********    **********  ***        *****  ************" << endl;
		cout.width(100);
		cout << "     ****       ***     ***  **********    **********  ***        *****  *********** " << endl;
		cout.width(60);
		cout << "(...)" << endl;
		cout.width(75);
		cout << "Press 1 to start again and hit enter or 2 to exit: ";

		a = 0;
		cin >> a;
		if (a == 1)
			START(a);

	}

}







void HELP(int& a) {
	system("CLS");
	cout << endl;
	cout << endl;
	cout << endl << endl;
	cout << "***U just have to make choises***" << endl;
	cout << "Press 1 to START and hit ENTER" << endl;
	cout << "Press 2 to QUIT and hit ENTER" << endl;

	int y;
	cin >> y;
	if (y == 1)
		START(y);
	a = y;
}








void ByTheStart() {
	int x;
	MENU(x);

	if (x == 1)
		START(x);

	else if (x == 3)
		HELP(x);
}








int main() {
	cout << "PLESE PRESS ALT + ENTER AT THE SAME TIME AND THEN TYPE 1 AND HIT ENTER: ";
	int bou; cin >> bou;
	if (bou == 1) {
		system("CLS");
		ByTheStart();
	}

}
