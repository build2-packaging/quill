#include <sstream>
#include <stdexcept>
#include <string_view>

#include <quill/Backend.h>
#include <quill/Frontend.h>
#include <quill/LogMacros.h>
#include <quill/Logger.h>
#include <quill/sinks/ConsoleSink.h>

#undef NDEBUG
#include <cassert>

int
main ()
{
  using namespace std;
  using namespace quill;

  Backend::start ();

  Logger* logger = Frontend::create_or_get_logger (
    "root",
    Frontend::create_or_get_sink<ConsoleSink> ("sink_id_1"));

  LOG_INFO (logger, "Hello from {}!", std::string_view{"Quill"});
}
