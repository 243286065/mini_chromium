#include "base/logging.h"
#include "base/macros.h"

int main() {
  LOG(WARNING) << "------------------------------";
  DLOG(INFO) << "---Debug log test";

  return 0;
}
