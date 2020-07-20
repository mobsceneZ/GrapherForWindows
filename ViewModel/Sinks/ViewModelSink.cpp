#include "ViewModelSink.h"
#include "../ViewModel.h"
ViewModelSink::ViewModelSink(ViewModel *ptr)
{
    ptr_ViewModel = ptr;
}

void ViewModelSink::OnPropertyChanged(const std::string &str)
{
    ptr_ViewModel->Fire_OnPropertyChanged(str);
}
