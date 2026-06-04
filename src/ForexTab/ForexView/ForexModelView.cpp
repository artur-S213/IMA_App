#include "ForexModelView.h"
#include "IMA_types.h"
#include <slint.h>
#include "app-window.h"

ForexModelView::ForexModelView(slint::ComponentHandle<AppWindow> ui) : m_ui(std::move(ui)) 
{

}

ForexModelView::~ForexModelView() {
    delete m_uiModel;
}

ForexModelView::updateUI(const IMA_Record newValues){

} 