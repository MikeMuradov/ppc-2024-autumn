#pragma once
#include <string>
#include <vector>

#include "core/task/include/task.hpp"

namespace mironov_a_max_of_vector_elements_seq {

class MaxVectorSequential : public ppc::core::Task {
 public:
  explicit MaxVectorSequential(std::shared_ptr<ppc::core::TaskData> taskData_) : Task(std::move(taskData_)) {}
  bool pre_processing() override;
  bool validation() override;
  bool run() override;
  bool post_processing() override;

 private:
  std::vector<int> input_;
  int result_{};
};

}  // namespace mironov_a_max_of_vector_elements_seq