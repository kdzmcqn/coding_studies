#include <map>
namespace std
{
    namespace tr1
    {
        // DECLARATIONS
        template <class Key, class Ty, class Hash, class Pred, class Alloc>
        class unordered_map;
        template <class Key, class Ty, class Hash, class Pred, class Alloc>
        class unordered_multimap;

        // TEMPLATE FUNCTIONS
        template <class Key, class Ty, class Hash, class Pred, class Alloc>
        void swap(
            unordered_map<Key, Ty, Hash, Pred, Alloc> &left,
            unordered_map<Key, Ty, Hash, Pred, Alloc> &right);
        template <class Key, class Ty, class Hash, class Pred, class Alloc>
        void swap(
            unordered_multimap<Key, Ty, Hash, Pred, Alloc> &left,
            unordered_multimap<Key, Ty, Hash, Pred, Alloc> &right);
    } // namespace tr1
} // namespace std