/*
 * Xournal++
 *
 * XML Writer helper class
 *
 * @author Xournal++ Team
 * https://github.com/xournalpp/xournalpp
 *
 * @license GNU GPLv2 or later
 */

#pragma once

#include <string>
#include <vector>

#include "Attribute.h"


class DoubleArrayAttribute: public XMLAttribute {
public:
    DoubleArrayAttribute(const char* name, std::vector<double>&& values);
    ~DoubleArrayAttribute() override;

public:
    void writeOut(OutputStream* out) override;

private:
    std::vector<double> values;
};
