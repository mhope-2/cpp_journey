#include <iostream>
#include <string>

using std::string, std::cin, std::cout, std::endl;

void tokenize(string sentence){
    string word = "";

    for (auto i : sentence){
        if (i == ' '){
            cout << word << endl;
            word = "";
        } else{
            word = word + i;
        }
    }
    cout << word << endl;
}

int main(){

    string s1; // default initialization; s1 is the empty string 
    string s2 = s1; // s2 is a copy of s1
    string s3 = "hiya"; // s3 is a copy of the string literal
    string s4(10, 'c'); // s4 is cccccccccc

    cout << "s1: " << s1 << " s2: " << s2 << " s3: " << s3 << " s4: " << s4 << endl;

    // copy vs direct initialization
    string s5 = "hiya"; // copy initialization
    string s6("hiya"); // direct initialization 
    string s7(10,'c'); // direct initialization; s7 is cccccccccc
    string s8 = string(10, 'c');// copy initialization; s8 is cccccccccc

    /*
    // getline
    string line;
    // read input a line at a time until end-of-file
    cout << "enter input" << endl;
    while (getline(cin, line))
        cout << "enter input" << endl;
        cout << line << endl;
    */

    // check for empty string
    string text = "not empty";

    if (!text.empty())
        cout << "text: " << text << endl;
        cout << "size: " << text.size() << endl;
        cout << "chat at index 6: " << text[6] << endl;

    string str1 = "hello, ", str2 = "world\n"; 
    string str3 = str1 + str2; // str3 is hello, world\n 
    str1 += str2; // equivalent to s1 = s1 + s2

    cout << "str3: " << str3 << "str1: " << str1 << endl;

    tokenize("the boy is going to school");

    //
    unsigned punctuation_count = 0;
    string punc_text = "Hello, World!!!";

    for (auto i: punc_text)
        if (ispunct(i))
            ++punctuation_count;
    cout << "there are " << punctuation_count << " punctuation characters in the text" << endl;

    //
    for (auto &c : text)
        c = toupper(c);
    cout << "upper: " << text << endl;

    // process characters in s until we run out of characters or we hit a whitespace 
    for (decltype(text.size()) index = 0;
        index != text.size() && !isspace(text[index]); ++index) 
            text[index] = toupper(text[index]); // capitalize the current character (NOT empty)

    return 0; 
    
}