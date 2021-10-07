/*  Question: Given that integers are being read from a data stream. Find the median of all the elements read 
    so far starting from the first integer till the last integer.*/

/*  My Approach: The idea is to use max heap and min heap to store the elements of higher half and lower half. 
    Max heap and min heap can be implemented using priority_queue in C++ */


class MedianFinder {
  private:
	priority_queue<int> left;   //Max Heap
	priority_queue<int, vector<int>, greater<int>> right;   // Min Heap
public:
    // Adds a number into the data structure.
	void addNum(int num) {
		if (left.empty()) {
			left.push(num);
			return;
		}
		int size1 = left.size();
		int size2 = right.size();
		if (size1 == size2) {
			int tmp = right.top();
			if (num <= tmp) {
				left.push(num);
			}
			else {
				left.push(tmp);
				right.pop();
				right.push(num);
			}
		}
		else {
			int tmp = left.top();
			if (tmp <= num) {
				right.push(num);
			}
			else {
				left.pop();
				left.push(num);
				right.push(tmp);
			}
		}
	}

	// Returns the median of current data stream
	double findMedian() {
		int size1 = left.size();
		int size2 = right.size();
		if (size1 > size2) {
			return left.top();
		}
    else {
			return (left.top() + right.top()) / 2.0;
		}
	}

};
