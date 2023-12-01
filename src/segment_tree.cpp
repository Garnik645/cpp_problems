#include <iostream>
#include <cmath>
#include <algorithm>

class SegmentTree {
  struct Node {
    Node *left{};
    Node *right{};
    Node *parent{};
    size_t range_left{};
    size_t range_right{};
    int range_min{};

    Node(const std::vector<int> &array, size_t range_left, size_t range_right, Node *parent)
        : range_left(range_left),
          range_right(range_right),
          parent(parent) {
      if (range_left == range_right) {
        range_min = array[range_left];
        return;
      }
      size_t range_middle = (range_left + range_right) / 2;
      left = new Node(array, range_left, range_middle, this);
      right = new Node(array, range_middle + 1, range_right, this);
      range_min = std::min(left->range_min, right->range_min);
    }

    int min(size_t query_left, size_t query_right) const {
      if (query_left > query_right) {
        return std::numeric_limits<int>::max();
      }
      if (query_left == range_left && query_right == range_right) {
        return range_min;
      }
      return std::min(left->min(query_left, std::min(left->range_right, query_right)),
                      right->min(std::max(right->range_left, query_left), query_right));
    }
  };

  Node *root;
  size_t array_size;

public:
  explicit SegmentTree(const std::vector<int> &array) : array_size(array.size()) {
    root = new Node(array, 0, array_size - 1, nullptr);
  }

  int min(size_t query_left, size_t query_right) {
    return root->min(query_left, query_right);
  }
};

int main() {
  const std::vector v = {3, 2, 1, 5, 4, 2, 8, 3};
  SegmentTree st(v);
  std::cout << st.min(6, 7) << std::endl;
}
