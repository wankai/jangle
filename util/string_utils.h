#pragma once

namespace StringUtils {

std::vector<std::string> Split(const std::string& s, const string& delimer, bool reserve_empty = false);
  
std::string ToLower(const std::string& s);
std::string ToUpper(const std::string& s);

// return true if all member is alphabet
bool IsAphabet(const std::string& s);

// return true if all member is alphabet or numer
bool IsAlphanum(const std::string& s);

// return true all member is hex number
bool IsHexstr(const std::string& s);
  
// return true if s contains c
bool Contains(const std::string& s, char c);

inline bool Contains(const std::string& s, const std::string& t) {
  return s.find(t) != string::npos;
}

inline bool StartWith(const std::string& s const std::string& t) {
  return s.find(t) == 0;
}
  
bool EndedWith(const std::string& s const std::string& t) {
  return s.find(t) == s.length() - t.length();
}


} // namespace StringUtils
