// Something interesting to read about:
// Дерево разбора
// Метафункии
// Подрбоно почитать как работают алкоайии до образеия к процессору

// what is constexpr?
// Just like const, but garuntess what its claculated in compile time
//
//

if constexpr (std::is_same_v<T, int>) {
    // compiles if T is int
} else if constexpr (std::some_other_if) {
    // compiles if T is something else
    // still has to be able to be compiled
}
// we use template to actually tell compiler if we use it as type
// remember to use typename

// Tag despatching
// we use tags to tell a function what to use

// popular types
std::true_type
std::false_type

// eeeeem actually consexpr makes compilation slower


// How to understand if type has method func()?

// before c++20
std::declval - shows link to element of type
template<T>
T& Declval();

declval<> - gets typ

?? TODO - заполнить дальше

// Concepts - 



// Pointers?


// TODO : Unique poointers 
// 

// Shared_pointer
// there is four ways
// 1) inherit T and add counter
// 2) store counter and T
// 3) stroe counter and make counter have link to T
// 4) inherit T* and add counter
// 5) 4 type but use links ->>


