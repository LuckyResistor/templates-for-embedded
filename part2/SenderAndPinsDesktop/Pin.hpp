#pragma once

// Do not use - only for demo purposes

class Pin
{
public:
  virtual void configureAsInput() = 0;
  virtual void configureAsOutput() = 0;
  virtual bool getInput() = 0;
  virtual void setHigh() = 0;
  virtual void setLow() = 0;
};
