#include <d2d1.h>
namespace variable
{
    class what
    {
        ID2D1Factory *D2D1Factory = NULL;
        //IDXGIFactory *DXGIFactory = NULL;
        IID _IID;
        void variable()
        {
            D2D1CreateFactory(D2D1_FACTORY_TYPE_SINGLE_THREADED, &D2D1Factory);
            //CreateDXGIFactory1(_IID, DXGIFactory);
        }
    };
}