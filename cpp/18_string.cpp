#include <iostream>
#include <string>

int main()
{
  std::string email, password, password_confirmation;

  std::cout << "Enter the e-mail: ";
  getline(std::cin, email);

  std::cout << "Enter the password: ";
  getline(std::cin, password);

  std::cout << "Enter the confirmation: ";
  getline(std::cin, password_confirmation);

  int domain = email.find("@domain");
  if (domain == std::string::npos)
  {
    std::cout << "Invalid e-mail domain.";
    return 0;
  }

  std::string tld = email.substr(email.size() - 4, email.size());
  if (!(tld == ".com"))
  {
    std::cout << "Invalid e-mail.";
    return 0;
  }

  bool password_valid = password.compare(password_confirmation) == 0;
  if (!password_valid)
  {
    std::cout << "Different password and confirmation.";
    return 0;
  }

  std::cout << "Confirmed.";

  return 0;
}
