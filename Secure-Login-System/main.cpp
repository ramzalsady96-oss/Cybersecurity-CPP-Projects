#include <iostream>
#include <string>
#include <iomanip> // لاستخدام دقة النسبة المئوية

using namespace std;

class LogAnalyzer
{
private:
    int successCount;
    int failedCount;

public:
    LogAnalyzer()
    {
        successCount = 0;
        failedCount = 0;
    }

    void analyzeLog(string log)
    {
        if (log == "SUCCESS")
        {
            successCount++;
        }
        else if (log == "FAILED")
        {
            failedCount++;
        }
    }

    void showReport()
    {
        int total = successCount + failedCount;

        cout << "\n----- Security Report -----" << endl;
        cout << "Successful Logins: " << successCount << endl;
        cout << "Failed Logins: " << failedCount << endl;
        cout << "Total Attempts: " << total << endl;

        if (total > 0)
        {
            double successRate = (successCount * 100.0) / total;
            double failedRate = (failedCount * 100.0) / total;

            cout << fixed << setprecision(2); // عرض النسبة بدقتين عشريتين
            cout << "Success Rate: " << successRate << "%" << endl;
            cout << "Failed Rate: " << failedRate << "%" << endl;
        }

        if (failedCount >= 3)
        {
            cout << "⚠️ Warning: Many failed login attempts!" << endl;
        }
    }
};

int main()
{
    LogAnalyzer analyzer;

    int n;
    string log;

    cout << "Enter number of logs: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "Enter log (SUCCESS or FAILED): ";
        cin >> log;

        analyzer.analyzeLog(log);
    }

    analyzer.showReport();

    return 0;
}