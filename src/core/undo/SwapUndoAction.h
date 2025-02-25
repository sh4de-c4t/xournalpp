/*
 * Xournal++
 *
 * Undo page swap action
 *
 * @author Xournal++ Team
 * https://github.com/xournalpp/xournalpp
 *
 * @license GNU GPLv2 or later
 */

#pragma once

#include "model/PageRef.h"

#include "UndoAction.h"

class Control;

class SwapUndoAction: public UndoAction {
public:
    SwapUndoAction(size_t pageNr, bool moveUp, const PageRef& swappedPage, const PageRef& otherPage);

    ~SwapUndoAction() override;

public:
    bool undo(Control* control) override;
    bool redo(Control* control) override;
    std::vector<PageRef> getPages() override;
    std::string getText() override;

private:
    void swap(Control* control);

private:
    size_t pageNr;
    PageRef swappedPage;
    PageRef otherPage;
    bool moveUp;
};
