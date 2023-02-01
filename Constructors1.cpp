#include <iostream>
#include <list>
using namespace std;

class YouTubeChannel
{
public:
    string Name;
    string OwnerName;
    int SubscribersCount;
    list<string> PublishedVideoTitles;

    //create a constructor 
    YouTubeChannel(string name, string ownerName){
        Name = name;
        OwnerName = ownerName;
        SubscribersCount = 0;
    }
    void GetInfo() { //class method
        cout << "Name: " << Name << endl;
        cout << "Name of Owner: " << OwnerName << endl;
        cout << "SubscribersCount: " << SubscribersCount << endl;
        cout << "Videos: " << endl;
        for (string videoTitle : PublishedVideoTitles)
        {
            cout << videoTitle << endl;
        }
    }
};

int main() {
    YouTubeChannel ytChannel("Adekyensroma Media", "Oduahoma Ofosua");
    ytChannel.PublishedVideoTitles.push_back("Data Framing");
    ytChannel.PublishedVideoTitles.push_back("Algorithms");
    ytChannel.PublishedVideoTitles.push_back("Cryptography");
    YouTubeChannel ytChannel2("AdeMusic", "Ade");

    ytChannel.GetInfo();
    ytChannel2.GetInfo();
}