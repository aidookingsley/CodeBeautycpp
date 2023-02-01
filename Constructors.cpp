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
    // ytChannel is an instance of the class 
    YouTubeChannel ytChannel;
    ytChannel.Name = "Adekyensroma Media";
    ytChannel.OwnerName = "Oduahoma Adekyensroma";
    ytChannel.SubscribersCount = 1234567890;
    ytChannel.PublishedVideoTitles = {"Comp Science for the Rest of US", "Machine Learning Fundamentals", "Advanced C++", "Introductory Engineering"};

    cout << "Name: " << ytChannel.Name << endl;
    cout << "Name of Owner: " << ytChannel.OwnerName << endl;
    cout << "SubscribersCount: " << ytChannel.SubscribersCount << endl;
    cout << "Videos: " << endl;
    for (string videoTitle : ytChannel.PublishedVideoTitles)
    {
        cout << videoTitle << endl;
    }

    YouTubeChannel ytChannel2;
    ytChannel2.Name = "AdeMusic";
    ytChannel2.OwnerName = "Maame Fosua";
    ytChannel2.SubscribersCount = 1234567890;
    ytChannel2.PublishedVideoTitles = {"Music galore", "Evryday is a friday", "lovewalk"};

    cout << "Name: " << ytChannel2.Name << endl;
    cout << "Name of Owner: " << ytChannel2.OwnerName << endl;
    cout << "SubscribersCount: " << ytChannel2.SubscribersCount << endl;
    cout << "Videos: " << endl;
    for (string videoTitle : ytChannel2.PublishedVideoTitles)
    {
        cout << videoTitle << endl;
    }
}