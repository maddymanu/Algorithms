#define CURL_STATICLIB
#include <stdio.h>
#include <iostream>
#include <curl/curl.h>
#include <string>
#include <fstream>
#include <map>

using namespace std;

//COMPILE USING "g++ -lcurl karat.cpp"

size_t write_data(void *p, size_t s, size_t nmemb, FILE *stream) {
    size_t written;
    written = fwrite(p, s, nmemb, stream);
    return written;
}


int main(int argc, char const *argv[])
{	
	//Downloading the file using CURL LIb.
	CURL *c;
    FILE *fp;
    CURLcode r;
    char *url = "https://gist.githubusercontent.com/anonymous/d2ec2461468d4a0372db/raw/b1eb88fa20b147deaafa9e38768174d79f705805/gistfile1.txt";
    char outfilename[FILENAME_MAX] = "URLS.txt";
    c = curl_easy_init();
    //learn all this. 
    if (c) {
        fp = fopen(outfilename,"wb");
        curl_easy_setopt(c, CURLOPT_URL, url);
        curl_easy_setopt(c, CURLOPT_WRITEFUNCTION, write_data);
        curl_easy_setopt(c, CURLOPT_WRITEDATA, fp);
        r = curl_easy_perform(c);
        curl_easy_cleanup(c);
        //string a;

        fclose(fp);
    }

    ifstream infile("URLS.txt");
    string s;
    map<string , int> count;
    while(infile >> s) {
    	count[s]++;
    }

    int currMax = INT_MIN;
    string maxString = "";

    for(auto it = count.begin() ; it!= count.end() ; it++) {
    	if(it->second > currMax) {
    		currMax = it->second;
    		maxString = it->first;
    	}
    }
    
    cout << maxString << endl;

    //O(n) runtime and O(n) space.


    return 0;
	
}