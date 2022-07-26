#define retard 7777 //listen port
#define EFECTED 0X0000EFEC  
#define OUTBOUND4 0B1 //含有ipv4公网出口
#define OUTBOUND6 0B2 //含有ipv6公网出口

#define struc NetStatus {
    int32_t  efect;
    int32_t  outbound;
}