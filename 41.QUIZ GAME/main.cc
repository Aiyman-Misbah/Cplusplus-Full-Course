#include <iostream>

int main()
{
    std::string questions[] = {"1. Who is the vice captain of the straw hats?",
                               "2. Who was the last to join the straw hat pirates?",
                               "3. Who is Luffy's grandfather?",
                               "4. Who made the mother flame?"};

    std::string options[][4] = {{"A. Luffy", "B. Zoro", "C. Sanji", "D. Nami"},
                                {"A. Franky", "B. Lilith", "C. Jimbe", "D. Brook"},
                                {"A. Dragon", "B. Garp", "C. Kuzan", "D. Roger"},
                                {"A. Stella", "B. Loki", "C. Imu", "D. Harald"}};

    char correctAns[] = {'B', 'C', 'B', 'A'};
    char answer;
    int score = 0;  
    int size =  sizeof(questions)/sizeof(questions[0]); 

    for (int i = 0; i < size; i++)
    {
        std::cout << "*****************************************************\n";
        std::cout << questions[i] << '\n';
        std::cout << "*****************************************************\n";
        for (unsigned int j = 0; j < sizeof(options[0])/sizeof(options[0][0]); j++)
        {
            std::cout << options[i][j] << '\n';
        }

        std::cout << "Answer :" << '\n';
        std::cin >> answer;
        answer = toupper(answer);
        if(answer == correctAns[i]){
            std::cout << "Correct!\n";
            score++;
        }
        else{
            std::cout << "Wrong!\n";
            std::cout << "Correct option is " << correctAns[i];
        }
    }
    std::cout << "***************************\n";
    std::cout << "Result :\n";
    std::cout << "***************************\n";
    std::cout << "Total number of questions : " << size << '\n';
    std::cout << "Correct answers : " << score << '\n';
    std::cout << "Your score : " << (score/(double)size)*100 << "%\n"; 
                                
    return 0;
}