#include <iostream>
#include <fstream>
#include <curl/curl.h>

size_t WriteCallback(void* contents, size_t size, size_t nmemb, std::ofstream* output) {
    size_t totalSize = size * nmemb;
    output->write(static_cast<char*>(contents), totalSize);
    return totalSize;
}

int main() {
    CURL* curl;
    CURLcode res;

    curl_global_init(CURL_GLOBAL_DEFAULT);

    curl = curl_easy_init();
    if (curl) {
        // Set the URL for the request
        curl_easy_setopt(curl, CURLOPT_URL, "https://my.ntu.edu.tw/Default.aspx");

        // Set the callback function to handle the response
        std::ofstream outputFile("index.html", std::ios::out | std::ios::binary);
        if (!outputFile.is_open()) {
            std::cerr << "Failed to open output file" << std::endl;
            return 1;
        }

        curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, WriteCallback);
        curl_easy_setopt(curl, CURLOPT_WRITEDATA, &outputFile);

        // Perform the HTTP request
        res = curl_easy_perform(curl);

        // Check for errors
        if (res != CURLE_OK)
            fprintf(stderr, "curl_easy_perform() failed: %s\n", curl_easy_strerror(res));
        else
            std::cout << "HTML content saved to index.html" << std::endl;

        // Clean up
        curl_easy_cleanup(curl);
        outputFile.close();
    }

    curl_global_cleanup();

    return 0;
}
