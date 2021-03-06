using namespace std;

class TallShoes {
  public:
    int maxHeight(int N, vector <int> X, vector <int> Y, vector <int> height, long long B) {
  }
};

// BEGIN CUT HERE
#include <cstdio>
#include <ctime>
#include <iostream>
#include <string>
#include <vector>
namespace moj_harness {
	using std::string;
	using std::vector;
	int run_test_case(int);
	void run_test(int casenum = -1, bool quiet = false) {
		if (casenum != -1) {
			if (run_test_case(casenum) == -1 && !quiet) {
				std::cerr << "Illegal input! Test case " << casenum << " does not exist." << std::endl;
			}
			return;
		}
		
		int correct = 0, total = 0;
		for (int i=0;; ++i) {
			int x = run_test_case(i);
			if (x == -1) {
				if (i >= 100) break;
				continue;
			}
			correct += x;
			++total;
		}
		
		if (total == 0) {
			std::cerr << "No test cases run." << std::endl;
		} else if (correct < total) {
			std::cerr << "Some cases FAILED (passed " << correct << " of " << total << ")." << std::endl;
		} else {
			std::cerr << "All " << total << " tests passed!" << std::endl;
		}
	}
	
	int verify_case(int casenum, const int &expected, const int &received, std::clock_t elapsed) { 
		std::cerr << "Example " << casenum << "... "; 
		
		string verdict;
		vector<string> info;
		char buf[100];
		
		if (elapsed > CLOCKS_PER_SEC / 200) {
			std::sprintf(buf, "time %.2fs", elapsed * (1.0/CLOCKS_PER_SEC));
			info.push_back(buf);
		}
		
		if (expected == received) {
			verdict = "PASSED";
		} else {
			verdict = "FAILED";
		}
		
		std::cerr << verdict;
		if (!info.empty()) {
			std::cerr << " (";
			for (size_t i=0; i<info.size(); ++i) {
				if (i > 0) std::cerr << ", ";
				std::cerr << info[i];
			}
			std::cerr << ")";
		}
		std::cerr << std::endl;
		
		if (verdict == "FAILED") {
			std::cerr << "    Expected: " << expected << std::endl; 
			std::cerr << "    Received: " << received << std::endl; 
		}
		
		return verdict == "PASSED";
	}

	int run_test_case(int casenum__) {
		switch (casenum__) {
		case 0: {
			int N                     = 3;
			int X[]                   = {0, 1, 0};
			int Y[]                   = {1, 2, 2};
			int height[]              = {3, 4, 2};
			long long B               = 1;
			int expected__            = 4;

			std::clock_t start__      = std::clock();
			int received__            = TallShoes().maxHeight(N, vector <int>(X, X + (sizeof X / sizeof X[0])), vector <int>(Y, Y + (sizeof Y / sizeof Y[0])), vector <int>(height, height + (sizeof height / sizeof height[0])), B);
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}
		case 1: {
			int N                     = 3;
			int X[]                   = {0, 1, 0};
			int Y[]                   = {1, 2, 2};
			int height[]              = {3, 4, 2};
			long long B               = 52;
			int expected__            = 9;

			std::clock_t start__      = std::clock();
			int received__            = TallShoes().maxHeight(N, vector <int>(X, X + (sizeof X / sizeof X[0])), vector <int>(Y, Y + (sizeof Y / sizeof Y[0])), vector <int>(height, height + (sizeof height / sizeof height[0])), B);
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}
		case 2: {
			int N                     = 8;
			int X[]                   = {0, 0, 3, 3, 4, 4, 4, 7, 7};
			int Y[]                   = {1, 2, 1, 2, 3, 5, 6, 5, 6};
			int height[]              = {1000, 1000, 1000, 1000, 1, 1000, 1000, 1000, 1000};
			long long B               = 3;
			int expected__            = 2;

			std::clock_t start__      = std::clock();
			int received__            = TallShoes().maxHeight(N, vector <int>(X, X + (sizeof X / sizeof X[0])), vector <int>(Y, Y + (sizeof Y / sizeof Y[0])), vector <int>(height, height + (sizeof height / sizeof height[0])), B);
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}
		case 3: {
			int N                     = 10;
			int X[]                   = {0,1,2,3,4,5,6,7,8};
			int Y[]                   = {1,2,3,4,5,6,7,8,9};
			int height[]              = {0,0,0,0,0,0,0,0,0};
			long long B               = 9876543210123LL;
			int expected__            = 1047565;

			std::clock_t start__      = std::clock();
			int received__            = TallShoes().maxHeight(N, vector <int>(X, X + (sizeof X / sizeof X[0])), vector <int>(Y, Y + (sizeof Y / sizeof Y[0])), vector <int>(height, height + (sizeof height / sizeof height[0])), B);
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}
		case 4: {
			int N                     = 6;
			int X[]                   = {0,0,0,0,0,1,1,1,1,2,2,2,3,3,4};
			int Y[]                   = {1,2,3,4,5,2,3,4,5,3,4,5,4,5,5};
			int height[]              = {999999,986588,976757,988569,977678,999999,967675,947856,955856,999999,975956,956687,999999,979687,999999};
			long long B               = 0;
			int expected__            = 999999;

			std::clock_t start__      = std::clock();
			int received__            = TallShoes().maxHeight(N, vector <int>(X, X + (sizeof X / sizeof X[0])), vector <int>(Y, Y + (sizeof Y / sizeof Y[0])), vector <int>(height, height + (sizeof height / sizeof height[0])), B);
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}

		// custom cases

/*      case 5: {
			int N                     = ;
			int X[]                   = ;
			int Y[]                   = ;
			int height[]              = ;
			long long B               = ;
			int expected__            = ;

			std::clock_t start__      = std::clock();
			int received__            = TallShoes().maxHeight(N, vector <int>(X, X + (sizeof X / sizeof X[0])), vector <int>(Y, Y + (sizeof Y / sizeof Y[0])), vector <int>(height, height + (sizeof height / sizeof height[0])), B);
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}*/
/*      case 6: {
			int N                     = ;
			int X[]                   = ;
			int Y[]                   = ;
			int height[]              = ;
			long long B               = ;
			int expected__            = ;

			std::clock_t start__      = std::clock();
			int received__            = TallShoes().maxHeight(N, vector <int>(X, X + (sizeof X / sizeof X[0])), vector <int>(Y, Y + (sizeof Y / sizeof Y[0])), vector <int>(height, height + (sizeof height / sizeof height[0])), B);
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}*/
/*      case 7: {
			int N                     = ;
			int X[]                   = ;
			int Y[]                   = ;
			int height[]              = ;
			long long B               = ;
			int expected__            = ;

			std::clock_t start__      = std::clock();
			int received__            = TallShoes().maxHeight(N, vector <int>(X, X + (sizeof X / sizeof X[0])), vector <int>(Y, Y + (sizeof Y / sizeof Y[0])), vector <int>(height, height + (sizeof height / sizeof height[0])), B);
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}*/
		default:
			return -1;
		}
	}
}


#include <cstdlib>
int main(int argc, char *argv[]) {
	if (argc == 1) {
		moj_harness::run_test();
	} else {
		for (int i=1; i<argc; ++i)
			moj_harness::run_test(std::atoi(argv[i]));
	}
}
// END CUT HERE
