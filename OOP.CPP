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
};

int main()
{
    YouTubeChannel ytChannel;
    ytChannel.Name = "Adekyensroma Media";
    ytChannel.OwnerName = "Oduahoma Adekyensroma";
    ytChannel.SubscribersCount = 1234567890;
    ytChannel.PublishedVideoTitles = {"Comp Science for the Rest of US", "Machine Learning Fundamentals", "Advanced C++", "Introductory Engineering"};

    cout << "Name: " << ytChannel.Name << endl;
    cout << "Name of Owner: " << ytChannel.OwnerName << endl;
    cout << "SubscribersCount: " << ytChannel.SubscribersCount << endl;
    cout << "Videos: " << endl;
    for(string videoTitle : ytChannel.PublishedVideoTitles){
        cout << videoTitle << endl;
    }
} 