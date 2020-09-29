# std::basic_string

```cpp
template<
    class CharT,
    class Traits = std::char_traits<CharT>,
    class Allocator = std::allocator<CharT>
> class basic_string;
namespace pmr{
    template <class CharT, class Traits = std::char_traits<CharT>>
    using basic_string = std::basic_string<CharT, Traits,
                                           std::polymorphic_allocator<CharT>>
}
```

# std::vector

```cpp
template<
    class T,
    class Allocator = std::allocator<T>
> class vector;
namespace pmr {
    template <class T>
    using vector = std::vector<T, std::pmr::polymorphic_allocator<T>>;
}
```

```cpp
#include <vector>

std::vector<int, MyAllocator> v;

int complex_function(int long_param_name,
                     int& another_param_name);

int main(int argc, char** argv)
{
    if (argc == 2) {
        v.push_back(23);
    }
}
```

```cpp
template <
    class TemplateParam,
    class TemplateParam2
> class TemplateClass;
template< class TemplateParam, class TemplateParam2 >
int function_template( MyTemplate<T,Param> my_template_param,
                       int* other_param );
```
