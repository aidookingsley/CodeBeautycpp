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
    int ContentQuality;

public:
    // create a constructor
    YouTubeChannel(string name, string ownerName)
    {
        Name = name;
        OwnerName = ownerName;
        SubscribersCount = 0;
        ContentQuality = 0;
    }

    void GetInfo()
    { // class method
        cout << "Name: " << Name << endl;
        cout << "Name of Owner: " << OwnerName << endl;
        cout << "SubscribersCount: " << SubscribersCount << endl;
        cout << "Content Quality: " << ContentQuality << endl;
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
    void CheckAnalytics()
    {
        if (ContentQuality < 5)
        {
            cout << Name << " has bad quality content..." << endl;
        }
        else
            cout << Name << " has great content..." << endl;
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
        ContentQuality++;
    }
};

class SingersYoutubeChannel : public YouTubeChannel
{
public: // pass Youtubechannel as an initializer to Cooking
    SingersYoutubeChannel(string name, string ownerName) : YouTubeChannel(name, ownerName)
    {
    }
    void Practice() // derived class method
    {
        cout << OwnerName << " is taking singing lessons, learning new songs, learning how to dance..." << endl;
        ContentQuality++;
    }

};

int main()
{
    CookingYoutubeChannel cookingYtChannel("Ade's Kitchen", "Adekyensroma");
    SingersYoutubeChannel singersYtChannel("AdeMusic", "Ade");

    cookingYtChannel.Practice();
    cookingYtChannel.Practice();
    cookingYtChannel.Practice();

    cookingYtChannel.Subscribe();
    cookingYtChannel.Subscribe();
    cookingYtChannel.Subscribe();
    cookingYtChannel.Subscribe();
    cookingYtChannel.Subscribe();

    singersYtChannel.Practice();
    singersYtChannel.Practice();
    singersYtChannel.Practice();
    singersYtChannel.Practice();
    singersYtChannel.Practice();

    singersYtChannel.Subscribe();
    singersYtChannel.Subscribe();
    singersYtChannel.Subscribe();
    singersYtChannel.Subscribe();
    singersYtChannel.Subscribe();
    singersYtChannel.Subscribe();
    singersYtChannel.Subscribe();
    singersYtChannel.Subscribe();
    singersYtChannel.Subscribe();
    singersYtChannel.Subscribe();

    YouTubeChannel *yt1 = &cookingYtChannel;
    YouTubeChannel *yt2 = &singersYtChannel;

    yt1->CheckAnalytics();
    yt2->CheckAnalytics();

    cookingYtChannel.GetInfo();
    singersYtChannel.GetInfo();
}
