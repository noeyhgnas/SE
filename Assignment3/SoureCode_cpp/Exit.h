#pragma once
#ifndef EXIT_H
#define EXIT_H

class ExitUI;

class Exit {
private:
    ExitUI* exitUI;

public:
    Exit();
    ExitUI* getExitUI();
};

#endif