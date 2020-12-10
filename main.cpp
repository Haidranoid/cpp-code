#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

int main() {
    std::ifstream file{};
    file.open("../responses.txt");

    if (!file) {
        std::cerr << "Cannot open the file provided." << std::endl;
        return 1;
    }

    int line_counter = 1;
    int students_numbers = 0;
    int total_score = 0;
    std::string responses{};

    while (!file.eof()) {

        std::string student{};
        std::string student_responses{};
        int local_score{0};

        if (line_counter == 1) {
            getline(file, responses);
            std::cout << std::setw(15) << std::left << "Student"
                      << std::setw(15) << std::right << "Score"
                      << std::endl;

            std::cout << std::setw(30) << std::setfill('-') << ""
                      << std::endl;
        } else {
            std::cout << std::setfill(' '); // reset setfill to blank spaces

            getline(file, student);
            getline(file, student_responses);

            students_numbers++;

            for (int i = 0; i < responses.size(); i++)
                if (responses[i] == student_responses[i])
                    local_score++;

            total_score += local_score;

            std::cout << std::setw(15) << std::left << student
                      << std::setw(15) << std::right << local_score
                      << std::endl;
        }
        line_counter++;
    }
    file.close();


    double average_score = (double) total_score / students_numbers;


    std::cout << std::setw(30) << std::setfill('-') << ""
              << std::endl;

    std::cout << std::setfill(' '); // reset setfill to blank spaces

    std::cout << std::setw(15) << std::left << "Average score"
              << std::setw(15) << std::right << average_score
              << std::endl;

    return 0;
}

