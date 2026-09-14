#ifndef FIZZBUZZ_INCLUDED
#define FIZZBUZZ_INCLUDED

class FizzBuzz
{
public:
  explicit FizzBuzz();
  ~FizzBuzz();

  int answer() const;

  FizzBuzz(const FizzBuzz &) = delete;
  FizzBuzz & operator=(const FizzBuzz &) = delete;
};

#endif
