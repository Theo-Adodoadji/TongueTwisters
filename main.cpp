#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
#include <cstring>
#include <cctype>
#include <algorithm>
#include <iterator>
using namespace std;

int main () {
    string line;
    ifstream myfile("TongueTwisters.txt");
    vector<string> vec;
    vector<vector<string> > vec2;
    
    if (myfile.is_open())
    {
        while ( getline (myfile,line))
        {
            cout << line << endl;
            vec.push_back(line);
        }
        myfile.close();
    }
    else { cout << "Unable to open file" << endl; exit(1); }
   
    for(int i = 0; i < vec.size(); i++)
    {
        
        vector<string> words;
        string input = vec.at(i);

//remove all punctuations in the string
        auto it = std::remove_if(input.begin(), input.end(), ::ispunct);
        input.erase(it, input.end());

//read each word in the string
        string word;
        stringstream iss(input);
        while(iss >> word)
        {
            words.push_back(word);
        }
        vec2.push_back(words);

        
    }
    
//print sentence
    for (int i = 0; i < vec.size(); i++)
        {
            cout << vec.at(i) << endl;
            cout << "Number of Characters in Sentence: " << vec.at(i).length() << endl;
            cout << "Number of Words in Sentence : " << vec2[i].size() << endl;


// Function to count number of vowels, consonant,
// digitsand special character in a string.
        char line[150];
    int vowels, consonants, digits, spaces;

    vowels =  consonants = digits = spaces = 0;

    for(int i = 0; line[i]!='\0'; ++i)
    {
        if(line[i]=='a' || line[i]=='e' || line[i]=='i' ||
           line[i]=='o' || line[i]=='u' || line[i]=='A' ||
           line[i]=='E' || line[i]=='I' || line[i]=='O' ||
           line[i]=='U')
        {
            ++vowels;
        }
        else if((line[i]>='a'&& line[i]<='z') || (line[i]>='A'&& line[i]<='Z'))
        {
            ++consonants;
        }
        else if(line[i]>='0' && line[i]<='9')
        {
            ++digits;
        }
        else if (line[i]==' ')
        {
            ++spaces;
        }
    }

    cout << "Vowels: " << vowels << endl;
    cout << "Consonants: " << consonants << endl;
    cout << "Digits: " << digits << endl;
    cout << "White spaces: " << spaces << endl;



//print in Title Case
     std::cout << "In Title Case : ";
            for(int j = 0; j < vec2[i].size(); j++)
        {
            string tmp = vec2[i][j];
            
            std::for_each(tmp.begin(), tmp.end(), [](char & c) {
            c = ::tolower(c);});
            tmp[0] = toupper(tmp[0]);
cout << tmp << " ";
       
        }

        cout << endl;

        
//print in Sentence Case
     std::cout << "In Sentence Case : ";
            for(int j = 0; j < vec2[i].size(); j++)
        {
            string tmp = vec2[i][j];
        
            

            tmp[i] = std::tolower(tmp[i]);
cout << tmp << " ";
       
        }

        cout << endl;

        
//print in Toggle Case
        
        cout << "In Toggle Case : ";
        
        for(int j = 0; j < vec2[i].size(); j++)
        {
            string tmp = vec2[i][j];
              if(islower(tmp[0]))
              {
                  tmp[0] = toupper(tmp[0]);
              }
              else if(isupper(tmp[0]))
              {
                  tmp[0] = tolower(tmp[0]);
            }
      
      
cout << tmp << " ";
       
        }

        cout << endl;

        

//print in Mocking Case
        
        cout << "In Mocking Case : ";
        
        for(int j = 0; j < vec2[i].size(); j++)
        {
            string tmp = vec2[i][j];
              if(islower(tmp[0]))
              {
                  tmp[0] = tolower(tmp[0]);
              }
              else if(isupper(tmp[0]))
              {
                  tmp[0] = toupper(tmp[0]);
            }
      
      
cout << tmp << " ";
       
        }

        cout << endl;

        }

//number of words in each sentence
    for (int i = 0; i < vec2.size(); i++)
    {
        
    }
    

//remove vectors with length 0
     for(int i = 0; i < vec2.size(); i++)
    {
        /*auto it = std::max_element(vec2.at(i).begin(), vec2.at(i).end(),
        [](const auto& a, const auto& b)
        {
            return a.size() < b.size();
        });
        cout << *it << endl;*/
    }
    

    return 0;

}

