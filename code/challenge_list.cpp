#include <iostream>
#include <string>
#include <algorithm>
#include <iomanip>
#include <list>
#include <iterator> // for std::advance

using namespace std;

class Song {
    friend std::ostream &operator<<(std::ostream &os, const Song &song);

private:
    std::string name;
    std::string artist;
    int rating;

public:
    Song() = default;

    Song(string name, string artist, int rating)
            : name{name}, artist{artist}, rating{rating} {
    }

    string get_name() const {
        return this->name;
    }

    string get_artist() const {
        return this->artist;
    }

    int get_rating() const {
        return this->rating;
    }

    bool operator<(const Song &s) const {
        return this->name < s.name;
    }

    bool operator==(const Song &s) const {
        return this->name == s.name;
    }
};

std::ostream &operator<<(std::ostream &os, const Song &song) {
    cout << setw(20) << left << song.name
         << setw(30) << left << song.artist
         << setw(4) << right << song.rating;
    return os;
}

void display_menu() {
    cout << "\nF - Play First Song" << std::endl;
    cout << "N - Play First Song" << std::endl;
    cout << "P - Play Previous Song" << std::endl;
    cout << "A - Add and play a new Song at current location" << std::endl;
    cout << "L - List the current playlist" << std::endl;
    cout << "======================================================" << endl;
    cout << "Enter a selection (Q to quit): ";
}

void play_current_song(const Song &s) {
    // this function should display
    // playing: followed by the song that is playing
}

void display_playlist(const list<Song> &playlist, const Song &current_song) {
    std::for_each(playlist.begin(), playlist.end(), [](const Song &s) {
        cout << s << endl;
    });
    cout << "\nCurrent song:" << endl;
    cout << current_song << endl;
}

int challenge_list() {
    list<Song> playlist{
            {"God's Plan",        "Drake",                     5},
            {"Never Be The Same", "Camila Cabello",            5},
            {"Play For Me",       "The weekend and K. Lamar",  4},
            {"The middle",        "Zedd, Maren Morris & Grey", 5},
            {"Wait",              "Maroone 5",                 4},
            {"Whatever it Takes", "Imagine Dragons",           3},
    };


    bool running{true};
    char input{' '};

    Song current_song = playlist.front();
    auto it_current_song = playlist.begin();

    // Your program logic goes hee
    display_playlist(playlist, current_song);
    display_menu();

    string new_song_name{};
    string new_song_artist{};
    int new_song_rating;

    while (running) {
        cin.clear(); // reset failbit
        cin >> input;
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //skip bad input
        // next, request user reinput

        switch (input) {
            case 'F':
                cout << "Playing first song \nPlaying:" << endl;

                it_current_song = playlist.begin();

                cout << *it_current_song << endl;

                display_menu();
                break;

            case 'N':
                cout << "Playing next song \nPlaying:" << endl;
                it_current_song++;

                if (it_current_song == playlist.end())
                    it_current_song = playlist.begin();

                cout << *it_current_song << endl;

                display_menu();
                break;
            case 'P':
                cout << "Playing previous song \nPlaying:" << endl;

                if (it_current_song == playlist.begin())
                    std::advance(it_current_song, playlist.size());

                it_current_song--;

                cout << *it_current_song << endl;
                display_menu();
                break;
            case 'A':
                cout << "Adding and playing new song" << endl;
                cout << "Enter song name: ";
                getline(cin, new_song_name,'\n');
                cout << "Enter song artist: ";
                getline(cin, new_song_artist,'\n');
                cout << "Enter your rating (1-5): ";
                cin >> new_song_rating;

                playlist.insert(it_current_song, Song{new_song_name, new_song_artist, new_song_rating});
                cout << "\nPlaying:" << endl;
                it_current_song--;
                cout << *it_current_song << endl;

                display_menu();
                break;
            case 'L':
                display_playlist(playlist, *it_current_song);
                cout << "======================================================" << endl;
                cout << "Enter a selection (Q to quit): ";
                break;
            default:
                cout << "You have not chosen a valid option, please try again: ";
        }

        if (input == 'Q')
            running = false;
    }

    cout << "Thanks for playing!" << endl;
    return 0;
}