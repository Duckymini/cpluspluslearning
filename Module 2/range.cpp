#include <iomanip>
#include <iostream>
#include <limits>
#include <sstream>
#include <string>
#include <string_view>
#include <type_traits>

namespace {

constexpr int kNameWidth = 18;
constexpr int kValueWidth = 28;

template <typename T>
typename std::enable_if<std::is_same<T, bool>::value, std::string>::type format_value(
    T value) {
    std::ostringstream oss;
    oss << std::boolalpha << value;
    return oss.str();
}

template <typename T>
typename std::enable_if<std::is_floating_point<T>::value, std::string>::type format_value(
    T value) {
    std::ostringstream oss;
    oss << std::scientific
        << std::setprecision(std::numeric_limits<T>::max_digits10) << value;
    return oss.str();
}

template <typename T>
typename std::enable_if<std::is_integral<T>::value && sizeof(T) == 1 &&
                            !std::is_same<T, bool>::value,
                        std::string>::type
format_value(T value) {
    std::ostringstream oss;
    oss << static_cast<int>(value);
    return oss.str();
}

template <typename T>
typename std::enable_if<
    !std::is_same<T, bool>::value && !std::is_floating_point<T>::value &&
        !(std::is_integral<T>::value && sizeof(T) == 1),
    std::string>::type
format_value(T value) {
    std::ostringstream oss;
    oss << value;
    return oss.str();
}

template <typename T>
void print_limits(std::string_view name) {
    using limits = std::numeric_limits<T>;
    std::cout << std::left << std::setw(kNameWidth) << name << ' '
              << std::right << std::setw(kValueWidth)
              << format_value(limits::lowest()) << ' '
              << std::setw(kValueWidth) << format_value(limits::max()) << ' '
              << "signed=" << (limits::is_signed ? "true" : "false") << '\n';
}

void print_header() {
    std::cout << std::left << std::setw(kNameWidth) << "type" << ' '
              << std::right << std::setw(kValueWidth) << "lowest" << ' '
              << std::setw(kValueWidth) << "highest" << ' '
              << "signed"
              << '\n';

    const auto separator_length =
        kNameWidth + 1 + (kValueWidth + 1) * 2 + std::string_view("signed").size();
    std::cout << std::string(separator_length, '-') << '\n';
}

}  // namespace

int main() {
    print_header();
    print_limits<bool>("bool");
    print_limits<char>("char");
    print_limits<signed char>("signed char");
    print_limits<unsigned char>("unsigned char");
    print_limits<short>("short");
    print_limits<unsigned short>("unsigned short");
    print_limits<int>("int");
    print_limits<unsigned int>("unsigned int");
    print_limits<long>("long");
    print_limits<unsigned long>("unsigned long");
    print_limits<long long>("long long");
    print_limits<unsigned long long>("unsigned long long");
    print_limits<float>("float");
    print_limits<double>("double");
    print_limits<long double>("long double");
}
