#include <iostream>
#include <cstdlib>

using namespace std;

double KiloMeter (double w,double h) {
    double result=w/(h*h);
    return result;
}
double PoundsInch (double w, double h ) {
    double result=w/(h*h)*703;
    return result;
}
class Main {
public:
    double height, weight, bmi;
    int choice;

    void Intro(){

        do {
        system("cls");
        cout<<"What conversion you want to use in calculating the body mass index?";
        cout<<"\n\n\t\t\t\t\t1.) Kilogram & Meter";
        cout<<"\n\n\t\t\t\t\t2.) Pounds and Inches\n\n\t\t\t\t\t";
        cout<<"Enter the number: ";
        cin>>choice;
        } while (choice<1 || choice>2); {
            if(choice==1) {
                while(true) {
                   cout<<"Enter the following: (0)Back\n\n";
                    cout<<"Height(m): ";
                    cin>>height;

                    if(height==0) {
                        Main main;
                        main.Intro();
                    }
                    cout<<"\nWeight(kg): ";
                    cin>>weight;
                    if(height==0) {
                        Main main;
                        main.Intro();
                    }

                    bmi =KiloMeter(weight, height);
                    cout<<"\n\n\n\nYour BMI is: "<<bmi;
                    cout<<"\nYou are: ";
                    if (bmi<18.5) {
                        cout<<"Underweight\a\n\n\n\n";
                    } else if (18.5<bmi && bmi<24.9) {
                        cout<<"Normal\a\n\n\n\n";
                    }else if (25<bmi && bmi<30) {
                        cout<<"Overweight\a\n\n\n\n";
                    }else
                    cout<<"Obese\a\n\n\n\n";
                    system("pause");
                    system("cls");
                }
        }else if (choice==2) {
            while(true) {
               cout<<"Enter person's information:(0)Back\n\n";
                cout<<"Height(inch): ";
                cin>>height;
                if(height==0) {
                        Main main;
                        main.Intro();
                    }
                cout<<"\nWeight(lb): ";
                cin>>weight;
                if(height==0) {
                        Main main;
                        main.Intro();
                    }

                bmi= PoundsInch(weight, height);
                cout<<"\n\n\n\nYour BMI is: "<<bmi;
                cout<<"\n\nYou are: ";
                 if (bmi<18.5) {
                    cout<<"Underweight\a\n\n\n\n";
                    } else if (18.5<bmi && bmi<24.9) {
                      cout<<"Normal\a\n\n\n\n";
                    }else if(25<bmi && bmi<30) {
                        cout<<"Overweight\a\n\n\n\n";
                    }else cout<<"Obese\a\n\n\n\n";
                system("pause");
                system("cls");
                }
        }

        }
    }
};
int main() {

Main main;
main.Intro();


return 0;
}
