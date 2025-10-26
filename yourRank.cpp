#include <iostream>
using namespace std;

int main() {
    string name;
    int publishedPapers, teachingHours;
    string rank;
    cout << "Enter your name: ";
    cin >> name;
    cout << "Enter your Published Papers: ";
    cin >> publishedPapers;
    cout << "Enter Teaching Hours: ";
    cin >> teachingHours;
    if(publishedPapers > 6){
        rank = "Professor";
    }else if(publishedPapers >= 3 && teachingHours >= 80){
        rank = "Lecturer";
    }else if(publishedPapers >= 0 && teachingHours >= 180){
        rank = "Associate";
    }else if(publishedPapers >= 0 && teachingHours >= 120){
        rank = "Assistant";
    }else{  
        rank = "Hard Worker";
    }
    cout << "Thanks for your patiance, " << rank << " " << name;
    return 0;
}