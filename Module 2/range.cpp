#include <cfloat>
#include <climits>
#include <iomanip>
#include <iostream>
#include <sstream>
#include <string>
#include <string_view>

namespace {

constexpr int kNameWidth = 18;
constexpr int kValueWidth = 28;

std::string format_bool(bool value) {
    std::ostringstream oss;
    oss << std::boolalpha << value;
    return oss.str();
}

template <typename T>
std::string format_integral(T value) {
    std::ostringstream oss;
    oss << value;
    return oss.str();
}

template <typename T>
std::string format_char_value(T value) {
    std::ostringstream oss;
    oss << static_cast<int>(value);
    return oss.str();
}

std::string format_float(long double value, int precision) {
    std::ostringstream oss;
    oss << std::scientific << std::setprecision(precision) << value;
    return oss.str();
}

void print_row(std::string_view name,
               const std::string &lowest,
               const std::string &highest,
               bool is_signed) {
    std::cout << std::left << std::setw(kNameWidth) << name << ' '
              << std::right << std::setw(kValueWidth) << lowest << ' '
              << std::setw(kValueWidth) << highest << ' '
              << "signed=" << (is_signed ? "true" : "false") << '\n';
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
    print_row("bool", format_bool(false), format_bool(true), false);
    print_row("char",
              format_char_value(CHAR_MIN),
              format_char_value(CHAR_MAX),
              CHAR_MIN < 0);
    print_row("signed char",
              format_char_value(SCHAR_MIN),
              format_char_value(SCHAR_MAX),
              true);
    print_row("unsigned char",
              format_integral(0u),
              format_integral(static_cast<unsigned int>(UCHAR_MAX)),
              false);
    print_row("short",
              format_integral(SHRT_MIN),
              format_integral(SHRT_MAX),
              true);
    print_row("unsigned short",
              format_integral(0u),
              format_integral(static_cast<unsigned int>(USHRT_MAX)),
              false);
    print_row("int",
              format_integral(INT_MIN),
              format_integral(INT_MAX),
              true);
    print_row("unsigned int",
              format_integral(0u),
              format_integral(UINT_MAX),
              false);
    print_row("long",
              format_integral(LONG_MIN),
              format_integral(LONG_MAX),
              true);
    print_row("unsigned long",
              format_integral(0ul),
              format_integral(ULONG_MAX),
              false);
    print_row("long long",
              format_integral(LLONG_MIN),
              format_integral(LLONG_MAX),
              true);
    print_row("unsigned long long",
              format_integral(0ull),
              format_integral(ULLONG_MAX),
              false);
    print_row("float",
              format_float(-FLT_MAX, FLT_DIG),
              format_float(FLT_MAX, FLT_DIG),
              true);
    print_row("double",
              format_float(-DBL_MAX, DBL_DIG),
              format_float(DBL_MAX, DBL_DIG),
              true);
#ifdef LDBL_MAX
    print_row("long double",
              format_float(-LDBL_MAX, LDBL_DIG),
              format_float(LDBL_MAX, LDBL_DIG),
              true);
#endif
}
