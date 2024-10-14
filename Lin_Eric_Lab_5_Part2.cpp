//Eric Lin
//Lab 5 (Part 2)
//October 8th, 2024

#include <iostream>
using namespace std;

int main() {
    double dG;  // Data GB
    double dM;  // Data MB

    // Ask user for monthly data in gigabytes
    cout << "Enter the number of gigabytes of data in your monthly hotspot plan: " << endl;
    cin >> dG;

    // Convert GB to MB
    dM = dG * 1000;  // 1 GB = 1000 MB

    // Define the data usage per hour for different quality levels
    double lowQph = 43.2;               // Low quality 
    double normQph = 72.0;              // Normal quality 
    double highQph = 115.2;             // High quality 

    // Calculate the number of hours of streaming possible at each quality level
    double lowHours = dM / lowQph;      // Hours low quality
    double normHours = dM / normQph;    // Hours normal quality
    double highHours = dM / highQph;    // Hours high quality

    // Output the results
    cout << "With " << dG << "GB of data, you can stream music for:" << endl;
    cout << lowHours << " hours at low quality." << endl;
    cout << normHours << " hours at normal quality." << endl;
    cout << highHours << " hours at high quality." << endl;

    return 0;
}
/*
Enter the number of gigabytes of data in your monthly hotspot plan: 
5
With 5GB of data, you can stream music for:
115.741 hours at low quality.
69.4444 hours at normal quality.
43.4028 hours at high quality.
*/