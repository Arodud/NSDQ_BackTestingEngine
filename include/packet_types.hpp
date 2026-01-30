#pragma pack(push, 1)

#include <cstdint>

namespace BTE {
    struct SystemEvent{
        const char* data;
    };
    struct StockDir{
        const char* data;
    };
    struct StockTradingAction{
        const char* data;
    };
    struct RegSHOShortSale{
        const char* data;
    };
    struct MarketParticipantPosition{
        const char* data;
    };
    struct MWCBDeclineLevel{
        const char* data;
    };
    struct MWCBStatus{
        const char* data;
    };
    struct QuotingPeriodUpdate{
        const char* data;
    };
    struct LULDAuctionCollar{
        const char* data;
    };
    struct OperationalHalt{
        const char* data;
    };
    struct AddOrder{
        const char* data;
    };
    struct AddOrderMPID{
        const char* data;
    };
    struct OrderExecutedPrice{
        const char* data;
    };
    struct OrderDelete{
        const char* data;
    };
    struct OrderReplace{
        const char* data;
    };
    struct Trade{
        const char* data;
    };
    struct CrossTrade {
        const char* data;
    };
    struct BrokenTrade{
        const char* data;
    };
    struct NOII{
        const char* data;
    };
    struct DirectListing{
        const char* data;
    };
}