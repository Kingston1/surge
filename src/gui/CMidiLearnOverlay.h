/*
** Surge Synthesizer is Free and Open Source Software
**
** Surge is made available under the Gnu General Public License, v3.0
** https://www.gnu.org/licenses/gpl-3.0.en.html
**
** Copyright 2004-2021 by various individuals as described by the Git transaction log
**
** All source at: https://github.com/surge-synthesizer/surge.git
**
** Surge was a commercial product from 2004-2018, with Copyright and ownership
** in that period held by Claes Johanson at Vember Audio. Claes made Surge
** open source in September 2018.
*/

#pragma once

#include "SkinSupport.h"

class CMidiLearnOverlay : public VSTGUI::CView
{

  public:
    CMidiLearnOverlay(const VSTGUI::CRect &r, std::shared_ptr<SurgeBitmaps> bm) : VSTGUI::CView(r)
    {
        setMouseEnabled(false);
        bmp = bm->getBitmap(IDB_MIDI_LEARN);
    }
    ~CMidiLearnOverlay() = default;

    void draw(VSTGUI::CDrawContext *dc) override
    {
        if (bmp)
            bmp->draw(dc, getViewSize());
    }

  private:
    VSTGUI::CBitmap *bmp = nullptr;
    CLASS_METHODS(CMidiLearnOverlay, VSTGUI::CView);
};