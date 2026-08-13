#include <iostream>
using namespace std;

class SocialMediaUser {
private:
    string username;
    int followers;

public:
    void put() {
        cout << "Enter username: ";
        cin >> username;

        cout << "Enter followers: ";
        cin >> followers;
    }

    void displayProfile() {
        cout << "Username: " << username << endl;
        cout << "Followers: " << followers << endl;
    }
};

class Podcaster : public SocialMediaUser {
private:
    string podcastName;

public:
    void putt() {
        cout << "Enter podcast name: ";
        cin >> podcastName;
    }

    void publishEpisode(string episodeTitle) {
        cout << "Episode " << episodeTitle
             << " published on " << podcastName << endl;
    }
};

int main() {
    Podcaster p;

    p.put();
    p.putt();

    p.displayProfile();
    p.publishEpisode("CppBasics");

    return 0;
}
