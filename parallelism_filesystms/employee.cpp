class employee {
 public:
  employee(unsigned id, std::string name, unsigned salary)
   : id_{id}, name_{name}, salary_{salary} {}

  unsigned id() const noexcept { return id_; }

  std::string name() const noexcept { return name_; }

  unsigned salary() const noexcept { return salary_; }

private:
  unsigned id_;
  std::string name_;
  unsigned salary_;
};

void print_employees_in_order(std::vector<employee>
  &employees) {

  std::sort(employees.begin(), employees.end(),
    [](const employee &lhs, const employee &rhs){
      return lhs.id() < rhs.id();
    });

  for (auto &e : employees) {
    std::cout << e.id() << ": " << e.name() << "\n";
  }
}

void print_employees_in_order_parallel(std::vector<employee>
  &employees) {

  std::sort(std::execution::par,
    employees.begin(), employees.end(),
    [](const employee &lhs, const employee &rhs){
      return lhs.id() < rhs.id();
    });

  for (auto &e : employees) {
    std::cout << e.id() << ": " << e.name() << "\n";
  }
}


