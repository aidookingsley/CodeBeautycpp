#include <iostream>
#include <list>
using namespace std;
class YouTubeChannel // base class
{
private:
    string Name;
    int SubscribersCount;
    list<string> PublishedVideoTitles;

protected:
    string OwnerName;

public:
    // create a constructor
    YouTubeChannel(string name, string ownerName)
    {
        Name = name;
        OwnerName = ownerName;
        SubscribersCount = 0;
    }

    void GetInfo()
    { // class method
        cout << "Name: " << Name << endl;
        cout << "Name of Owner: " << OwnerName << endl;
        cout << "SubscribersCount: " << SubscribersCount << endl;
        cout << "Videos: " << endl;
        for (string videoTitle : PublishedVideoTitles)
        {
            cout << videoTitle << endl;
        }
    }
    void Subscribe()
    {
        SubscribersCount++;
    }
    void Unsubscribe()
    {
        if (SubscribersCount > 0)
            SubscribersCount--;
    }
    void PublishVideo(string title)
    {
        PublishedVideoTitles.push_back(title);
    }
};

// derived class CookingYoutubeChannel inheriting from
// base class YoutubeChannel
class CookingYoutubeChannel : public YouTubeChannel
{
public: // pass Youtubechannel as an initializer to Cooking
    CookingYoutubeChannel(string name, string ownerName) : YouTubeChannel(name, ownerName)
    {
    }
    void Practice() // derived class method
    {
        cout << OwnerName << " is practicing cooking, learning new recipes, experimenting with spices..." << endl;
    }
};

int main()
{
    CookingYoutubeChannel cookingYtChannel("Ade's Kitchen", "Adekyensroma");
    CookingYoutubeChannel cookingYtChannel2("Adwoa's Kitchen", "Adwoa");
    // cookingYtChannel.PublishVideo("Apple pie");
    // cookingYtChannel.PublishVideo("Chocolate cake");
    // cookingYtChannel.Subscribe();
    // cookingYtChannel.Subscribe();
    // cookingYtChannel.GetInfo();
    cookingYtChannel.Practice();
    cookingYtChannel2.Practice();
}
