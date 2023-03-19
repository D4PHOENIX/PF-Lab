#include <iostream>
#include <ctime>
using namespace std;

int main(){
    //declaring variables
    int birthDate, birthMonth, birthYear, ageGroup, age, curYear;
    //taking input
    cout<<"Enter your Birth Date: ";  cin>>birthDate;
    cout<<"Enter your Birth Month: "; cin>>birthMonth;
    cout<<"Enter your Birth Year: ";  cin>>birthYear;
    //defining the format of birthday
    if (birthMonth,birthDate >= 1 && birthMonth <= 12 && birthDate <=31){
        time_t now = time(0);
        tm *ltm = localtime(&now);
        curYear = 1900 + ltm->tm_year;
        age = curYear - birthYear;
        cout<<"Your age is "<<age<<", ";
        //defining age group
        if (age >= 0 and age <=14) //children
            ageGroup = 1;
        else if (age >= 15 and age <=24) //youth
            ageGroup = 2;
        else if (age >= 25 and age <=64) //adults
            ageGroup = 3;        
        else  //seniors
            ageGroup = 4;    
        //displaying age group
        switch (ageGroup){
            case 1:
                cout<<"and you are in the age group of Children.\n";
                break;
            case 2:
                cout<<"and you are in the age group of Youth.\n";
                break;
            case 3:
                cout<<"and you are in the age group of Adults.\n";
                break;
            case 4:
                cout<<"and you are in the age group of Seniors.\n";
                break;
        }
        //defining and displaying zodiac signs
        switch (birthMonth){
                //January
                case 1:
                    if (birthDate <= 19){
                        cout<<"Your Zodiac Sign is Capricorn.";
                        break;
                        }
                    else{
                        cout<<"Your Zodiac Sign is Aquarius.";   
                        break;
                }
                //February
                case 2:
                    if (birthDate <= 21){
                        cout<<"Your Zodiac Sign is Aquarius.";
                        break;
                        }
                    else{
                        cout<<"Your Zodiac Sign is Pisces.";   
                        break;
                }
                //March
                case 3:
                    if (birthDate <= 20){
                        cout<<"Your Zodiac Sign is Pisces.";
                        break;
                        }
                    else{ 
                        cout<<"Your Zodiac Sign is Aries.";   
                        break;
                }
                //April
                case 4:
                    if (birthDate <= 19){
                        cout<<"Your Zodiac Sign is Aries.";
                        break;
                        }
                    else{
                    cout<<"Your Zodiac Sign is Taurus.";   
                        break;
                }
                // May
                case 5:
                    if (birthDate <= 20){   
                        cout<<"Your Zodiac Sign is Taurus.";
                        break;
                        }
                    else{
                        cout<<"Your Zodiac Sign is Gemini.";   
                        break;
                }
                //June
                case 6:
                    if (birthDate <= 20){
                        cout<<"Your Zodiac Sign is Gemini.";
                        break;
                        }
                    else{ 
                        cout<<"Your Zodiac Sign is Cancer.";   
                        break;
                }
                //July
                case 7:
                    if (birthDate <= 2){
                        cout<<"Your Zodiac Sign is Cancer.";
                    break;
                    }
                    else{ 
                        cout<<"Your Zodiac Sign is Leo.";   
                        break;
                }
                //August
                case 8:
                    if (birthDate <= 22){
                        cout<<"Your Zodiac Sign is Leo.";
                        break;
                        }
                    else{ 
                        cout<<"Your Zodiac Sign is Virgo.";   
                        break;
                }
                //September
                case 9:
                    if (birthDate <= 21){
                        cout<<"Your Zodiac Sign is Virgo.";
                        break;
                        }
                    else{ 
                        cout<<"Your Zodiac Sign is Libra.";   
                        break;
                }
                //October
                case 10:
                    if (birthDate <= 22){
                        cout<<"Your Zodiac Sign is Libra.";
                        break;
                    }
                    else{
                        cout<<"Your Zodiac Sign is Scorpio.";   
                        break;
                }
                //November
                case 11:
                    if (birthDate <= 21){
                        cout<<"Your Zodiac Sign is Scorpio.";
                        break;
                    }
                    else{
                        cout<<"Your Zodiac Sign is Sagittarius.";   
                        break;
                    }
                //December
                case 12:
                    if (birthDate <= 21){
                        cout<<"Your Zodiac Sign is Sagittarius.";
                        break;
                        }
                    else{ 
                        cout<<"Your Zodiac Sign is Capricorn.";   
                        break;
                }
            }
    }    
    else
        cout<<"You enter wrong Parameters.";

return 0;
}