// https://leetcode.com/problems/seat-reservation-manager/
#include <iostream>
#include <queue>

class SeatManager {
  std::priority_queue<int, std::vector<int>, std::greater<>> pq;

public:
  SeatManager(int n) {
    std::ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    for (int i = 1; i <= n; ++i) {
      pq.push(i);
    }
  }

  int reserve() {
    int tmp = pq.top();
    pq.pop();
    return tmp;
  }

  void unreserve(int seatNumber) {
    pq.push(seatNumber);
  }
};
