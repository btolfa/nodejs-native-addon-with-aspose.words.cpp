#include <napi.h>
#include <string>
#include "greeting.hpp"

Napi::Value greetingHello(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();

  auto user = static_cast<std::string>(info[0].ToString());
  helloUser(user);

  return Napi::Value{};
}

Napi::Object Init(Napi::Env env, Napi::Object exports) {
  exports.Set(Napi::String::New(env, "greetHello"),
              Napi::Function::New(env, greetingHello));
  return exports;
}

NODE_API_MODULE(aspose_words, Init)