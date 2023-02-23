#include <iostream>
#include <string>
using namespace std;
class Menu
{
protected:
    int p1 = 320, p2 = 280, p3 = 250;
    int b1 = 80, b2 = 220, b3 = 280;
    int s1 = 160, s2 = 120, s3 = 130;
    int r1 = 250, r2 = 200, r3 = 170;
    int d1 = 140, d2 = 200, d3 = 180;
    int order;
    int quantity;
    int total_bill;
    char ch;
    int no;
    int price;
    int bill = 0;
    int pizza_bill = 0;
    int burger_bill = 0;
    int sandwich_bill = 0;
    int rolls_bill = 0;
    int dosa_bill = 0;

public:
    void food()
    {
        cout << "PRESS  FOR YOUR ORDER: ";
        cin >> order;

        cout << "YOUR ORDER IS: " << order << endl;
        if (order == 1)
        {
            cout << "1. CHEESE BURST PIZZA..Rs.." << p1 << endl;
            cout << "2. MAXICAN PIZZA..Rs.." << p2 << endl;
            cout << "3. ITALIAN PIZZA..Rs." << p3 << endl;

            cout << "PLEASE ENTER WHICH TYPE OF PIZZA YOU WANT SIR/MAM... ";
            cin >> no;

            switch (no == 1)
            {
            case 1:
                cout << "PLEASE ENTER QUANTITY OF CHEESE BURST PIZZA...  ";
                cin >> quantity;
                price = p1 * quantity;
                pizza_bill = bill + price;
                cout << "BILL IS.." << pizza_bill << endl;
                break;
            }

            switch (no == 2)
            {
            case 1:
                cout << "PLEASE ENTER QUANTITY OF MAXICAN PIZZA..  ";
                cin >> quantity;
                price = p2 * quantity;
                pizza_bill = bill + price;
                cout << "BILL IS: " << pizza_bill << endl;
                break;
            }

            switch (no == 3)
            {
            case 1:
                cout << "PLEASE ENTER QUANTITY OF ITALIAN PIZZA..  ";
                cin >> quantity;
                price = p3 * quantity;
                pizza_bill = bill + price;
                cout << "BILL IS: " << pizza_bill << endl;
                break;
            }
        }
    }

    void burger()
    {
        cout << "YOUR ORDER: ";
        cin >> order;

        cout << "YOUR ORDER IS: " << order << endl;
        if (order == 2)
        {
            cout << "1. ALLO TIKKI BURGER..Rs." << b1 << endl;
            cout << "2. AMERICAN SUPEREME BURGER..Rs." << b2 << endl;
            cout << "3. MAHARAJA MAC BURGER..Rs." << b3 << endl;

            cout << "PLEASE ENTER WHICH TYPE OF BURGER YOU WANT SIR/MAM... ";
            cin >> no;

            switch (no == 1)
            {
            case 1:
                cout << "PLEASE ENTER QUANTITY OF ALLO TIKKI BURGER..  ";
                cin >> quantity;
                price = b1 * quantity;
                burger_bill = bill + price;
                cout << "BILL IS: " << burger_bill << endl;
                break;
            }

            switch (no == 2)
            {
            case 1:
                cout << "PLEASE ENTER QUANTITY OF AMERICAN SUPEREME BURGER..  ";
                cin >> quantity;
                price = b2 * quantity;
                burger_bill = bill + price;

                cout << "BILL IS: " << burger_bill << endl;
                break;
            }

            switch (no == 3)
            {
            case 1:
                cout << "PLEASE ENTER QUANTITY OF MAHARAJA MAC BURGER..  ";
                cin >> quantity;
                price = b3 * quantity;
                burger_bill = bill + price;
                cout << "BILL IS: " << burger_bill << endl;
                break;
            }
        }
    }

    void sandwich()
    {
        cout << "YOUR ORDER: ";
        cin >> order;

        cout << "YOUR ORDER IS: " << order << endl;
        if (order == 3)
        {
            cout << "1. PANEER SANDWICH..Rs." << s1 << endl;
            cout << "2. CHEESE SANDWICH..Rs." << s2 << endl;
            cout << "3. VEG GREEL SANDWICH..Rs." << s3 << endl;

            cout << "PLEASE ENTER WHICH TYPE OF BURGER YOU WANT SIR/MAM... ";
            cin >> no;

            switch (no == 1)
            {
            case 1:
                cout << "PLEASE ENTER QUANTITY OF of PANEER SANDWICH..  ";
                cin >> quantity;
                price = s1 * quantity;
                sandwich_bill = bill + price;
                cout << "BILL IS: " << sandwich_bill << endl;
                break;
            }

            switch (no == 2)
            {
            case 1:
                cout << "PLEASE ENTER QUANTITY OF CHEESE SANDWICH..  ";
                cin >> quantity;
                price = s2 * quantity;
                sandwich_bill = bill + price;
                cout << "BILL IS: " << sandwich_bill << endl;
                break;
            }

            switch (no == 3)
            {
            case 1:
                cout << "PLEASE ENTER QUANTITY OF VEG GREEL SANDWICH..  ";
                cin >> quantity;
                price = s3 * quantity;
                sandwich_bill = bill + price;
                cout << "BILL IS: " << sandwich_bill << endl;
                break;
            }
        }
    }

    void rolls()
    {
        cout << "YOUR ORDER: ";
        cin >> order;

        cout << "YOUR ORDER IS: " << order << endl;
        if (order == 4)
        {
            cout << "1. CHEESE PANEER ROLL..Rs." << r1 << endl;
            cout << "2. AMERICAN ROLL..Rs." << r2 << endl;
            cout << "3. ITALIAN ROLL..Rs." << r3 << endl;

            cout << "PLEASE ENTER WHICH TYPE OF BURGER YOU WANT SIR/MAM... ";
            cin >> no;

            switch (no == 1)
            {
            case 1:
                cout << "PLEASE ENTER QUANTITY OF CHEESE PANEER ROLL..  ";
                cin >> quantity;
                price = r1 * quantity;
                rolls_bill = bill + price;
                cout << "BILL IS: " << rolls_bill << endl;
                break;
            }

            switch (no == 2)
            {
            case 1:
                cout << "PLEASE ENTER QUANTITY OF  AMERICAN ROLL..  ";
                cin >> quantity;
                price = r2 * quantity;
                rolls_bill = bill + price;
                cout << "BILL IS: " << rolls_bill << endl;
                break;
            }

            switch (no == 3)
            {
            case 1:
                cout << "PLEASE ENTER QUANTITY OF ITALIAN ROLL..  ";
                cin >> quantity;
                price = r3 * quantity;
                rolls_bill = bill + price;
                cout << "BILL IS: " << rolls_bill << endl;
                break;
            }
        }
    }

    void dosa()
    {
        cout << "YOUR ORDER: ";
        cin >> order;

        cout << "YOUR ORDER IS: " << order << endl;
        if (order == 5)
        {
            cout << "1. MASHALA DHOSHA..Rs." << d1 << endl;
            cout << "2. MESSUR DHOSHA..Rs." << d2 << endl;
            cout << "3. CHEESE DHOSHA..Rs." << d3 << endl;

            cout << "PLEASE ENTER WHICH TYPE OF BURGER YOU WANT SIR/MAM... ";
            cin >> no;

            switch (no == 1)
            {
            case 1:
                cout << "PLEASE ENTER QUANTITY OF MASHALA DHOSHA..  ";
                cin >> quantity;
                price = d1 * quantity;
                dosa_bill = bill + price;
                cout << "BILL IS: " << dosa_bill << endl;
                break;
            }

            switch (no == 2)
            {
            case 1:
                cout << "PLEASE ENTER QUANTITY OF MESSUR DHOSHA..  ";
                cin >> quantity;
                price = d2 * quantity;
                dosa_bill = bill + price;
                cout << "BILL IS: " << dosa_bill << endl;
                break;
            }

            switch (no == 3)
            {
            case 1:
                cout << "PLEASE ENTER QUANTITY OF CHEESE DHOSHA..  ";
                cin >> quantity;
                price = d3 * quantity;
                dosa_bill = bill + price;
                cout << "BILL IS: " << dosa_bill << endl;
                break;
            }
        }
    }

    void amount()
    {
        total_bill = pizza_bill + burger_bill + sandwich_bill + rolls_bill + dosa_bill;
        cout << "TOTAL BILL IS : " << total_bill << endl;
    }
};

int main()
{

    Menu z;
    string name;
    int repeat;
    int choice;
    cout << "\n ----------Hello Dear Wellcome You in U & ME CAFE --------- \n" << endl;
    cout << "YOUR GOOD NAME SIR/MAM: ";
    getline(cin, name);
    cout << "YOUR NAME IS: " << name << endl;
here:

    cout << "1. PIZZA" << endl;
    cout << "2. BURGER" << endl;
    cout << "3. SANDWICH" << endl;
    cout << "4. ROLLS" << endl;
    cout << "5. DHOSHA" << endl;

    cout << "0. FINAL BILL" << endl;

    cout << "PLEASE ENTER YOUR CHOICE SIR/MAM: ";
    cin >> choice;
    switch (choice)
    {
    case 1:
        z.food();
        break;

    case 2:
        z.burger();
        break;

    case 3:
        z.sandwich();
        break;

    case 4:
        z.rolls();
        break;

    case 5:
        z.dosa();
        break;

    case 6:
        z.amount();
        break;
    }
    cout << "DO YOU WANT MORE ORDER SIR/MAM ?(1.YES/2.NO):";
    cin >> repeat;
    if (repeat == 1)
    {
        goto here;
    }
    else
    {
        cout << "----------------------------" << endl;
        z.amount();
        cout << "----------------------------" << endl;
        cout << "---------THANK YOU DEAR------------" << endl;
        cout << "---------VISIT AGAIN------------" << endl;
        cout << "---------WELL COME------------" << endl;
    }
}
