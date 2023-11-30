## Задачи с использованием std::priority_queue
Все следующие задачи должны быть решены с исползованием **std::priority_queue** из стандартной библиотеки.
Тут можно посмотреть описание структуры [std::priority_queue](https://en.cppreference.com/w/cpp/container/priority_queue).
### Решения задачи [K-th Largest element](https://leetcode.com/problems/kth-largest-element-in-an-array/):
```c++
#include <iostream>
#include <queue>

int findKthLargest(std::vector<int> &nums, int k) {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(0);
  std::cout.tie(0);
  std::priority_queue<int, std::vector<int>, std::greater<>> pq(nums.begin(), nums.begin() + k);

  for (int i = k; i < nums.size(); i++) {
    if (nums[i] > pq.top()) {
      pq.pop();
      pq.push(nums[i]);
    }
  }

  return pq.top();
}
```

### Список задач:
* [Seat Reservation](https://leetcode.com/problems/seat-reservation-manager/) (Решить дважды используя **set** и **priority_queue**)
* [Remove Stones](https://leetcode.com/problems/remove-stones-to-minimize-the-total/)
* [Closest to Origin](https://leetcode.com/problems/k-closest-points-to-origin/)
* [Min Effort Path](https://leetcode.com/problems/path-with-minimum-effort/)
