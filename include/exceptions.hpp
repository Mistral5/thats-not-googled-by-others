#ifndef TAPESORT_INCLUDE_EXCEPTIONS_HPP_
#define TAPESORT_INCLUDE_EXCEPTIONS_HPP_

#include <exception>

class AssociatedFileException : public std::exception {
 public:
  explicit AssociatedFileException(const std::string& file_name)
      : message_{"File stream has no associated file with name: \"" +
                 file_name + "\""} {};

  const char* what() const throw() override { return message_.c_str(); }

 private:
  std::string message_;
};

#endif  // TAPESORT_INCLUDE_EXCEPTIONS_HPP_