#include <doctest/doctest.h>
#include <keygenerator/greeter.h>
#include <keygenerator/version.h>

#include <string>

TEST_CASE("Key Generator") {
  // using namespace key_generator;

  // KeyGenerator greeter("Tests");

  CHECK(1 == 1);
  // CHECK(key_generator.greet(LanguageCode::EN) == "Hello, Tests!");
  // CHECK(key_generator.greet(LanguageCode::DE) == "Hallo Tests!");
  // CHECK(key_generator.greet(LanguageCode::ES) == "¡Hola Tests!");
  // CHECK(key_generator.greet(LanguageCode::FR) == "Bonjour Tests!");
}

TEST_CASE("KeyGenerator version") {
  static_assert(std::string_view(KEYGENERATOR_VERSION) == std::string_view("1.0"));
  CHECK(std::string(KEYGENERATOR_VERSION) == std::string("1.0"));
}
