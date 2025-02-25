/*
 * Xournal++
 *
 * Interface for touch disable implementations
 *
 * @author Xournal++ Team
 * https://github.com/xournalpp/xournalpp
 *
 * @license GNU GPLv2 or later
 */

#pragma once

#include <string>
#include <vector>

#include "TouchDisableInterface.h"


class TouchDisableCustom: public TouchDisableInterface {
public:
    TouchDisableCustom(std::string enableCommand, std::string disableCommand);
    ~TouchDisableCustom() override;

public:
    void enableTouch() override;
    void disableTouch() override;

private:
    std::string enableCommand;
    std::string disableCommand;
};
