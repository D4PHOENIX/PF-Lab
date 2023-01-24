#include <iostream>
using namespace std;

int main(){
    float math, phy, che, eng, urdu, PakSt, isl;
    math = 179,  phy = 182,  che = 177,  eng = 177,  urdu = 143,  PakSt = 33, isl = 47;  
    float totalMarks, obtainedMarks, subjectTotal, entryTestTotal, entryTestObtained, islPakTotal;
    totalMarks = 1100,  subjectTotal = 200,  entryTestTotal = 400,  entryTestObtained = 269, islPakTotal= 50;
    obtainedMarks = math + phy + che + eng + urdu + PakSt + isl;
    float mathPercent, phyPercent, chePercent, engPercent, urduPercent, PakStPercent, islPercent;
    mathPercent= (math*100)/subjectTotal, phyPercent= (phy*100)/subjectTotal, chePercent= (che*100)/subjectTotal;
    engPercent= (eng*100)/subjectTotal, urduPercent= (urdu*100)/subjectTotal, PakStPercent= (PakSt*100)/islPakTotal;
    islPercent= (isl*100)/islPakTotal;
    float totalPercent, entryPercent, aggregatePercent;
    totalPercent= (obtainedMarks*100)/totalMarks, entryPercent= (entryTestObtained*100)/entryTestTotal;
    aggregatePercent= (totalPercent*70)/100 + (entryPercent*30)/100;

    cout<<"Hi, I am Daud. My marks details are as under:\n\n";
    cout<<"\t-------------------------------------------\n";
    cout<<"\tSubject\t  |   \tMarks\t   | \tPercentage\n";
    cout<<"\t-------------------------------------------\n";
    cout<<"\tMath\t\t"<<math<<"/"<<subjectTotal<<"\t\t"<<mathPercent<<"%\n";
    cout<<"\tPhysics\t\t"<<phy<<"/"<<subjectTotal<<"\t\t"<<phyPercent<<"%\n";
    cout<<"\tChemistry\t"<<che<<"/"<<subjectTotal<<"\t\t"<<chePercent<<"%\n";
    cout<<"\tEnglish\t\t"<<eng<<"/"<<subjectTotal<<"\t\t"<<engPercent<<"%\n";
    cout<<"\tUrdu\t\t"<<urdu<<"/"<<subjectTotal<<"\t\t"<<urduPercent<<"%\n";
    cout<<"\tPak St.\t\t"<<PakSt<<"/"<<islPakTotal<<"\t\t"<<PakStPercent<<"%\n";
    cout<<"\tIslamiat\t"<<isl<<"/"<<islPakTotal<<"\t\t"<<islPercent<<"%\n";
    cout<<"\t-------------------------------------------\n";
    cout<<"\tTotal:\t\t"<<obtainedMarks<<"/"<<totalMarks<<"\t"<<totalPercent<<"%\n";
    cout<<"\tEntry Test:\t"<<entryTestObtained<<"/"<<entryTestTotal<<"\t\t"<<entryPercent<<"%\n";
    cout<<"\tAggregate:\t\t\t"<<aggregatePercent<<"%\n";

return 0;
}