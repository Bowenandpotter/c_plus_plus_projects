#include <cstdint>  // int32_t, uint32_t, uint16_t
 
#pragma pack(push, 1)
typedef struct {
    uint16_t signature;      // "BM" (0x4D42)
    uint32_t file_size;      // 文件总大小
    uint16_t reserved1;      // 保留
    uint16_t reserved2;      // 保留
    uint32_t data_offset;    // 图像数据起始偏移
} BMPFileHeader;
#pragma pack(pop)
 
typedef struct {
    uint32_t biSize;         // 本结构大小(40字节)
    int32_t biWidth;         // 图像宽度（像素）
    int32_t biHeight;        // 图像高度（像素，正数表示倒序）
    uint16_t biPlanes;       // 颜色平面数（必须为1）
    uint16_t biBitCount;     // 每像素位数
    uint32_t biCompression;  // 压缩类型
    uint32_t biSizeImage;    // 图像数据大小（字节）
    int32_t biXPelsPerMeter; // 水平分辨率（像素/米）
    int32_t biYPelsPerMeter; // 垂直分辨率（像素/米）
    uint32_t biClrUsed;      // 实际使用的颜色数
    uint32_t biClrImportant; // 重要颜色数
} BMPInfoHeader;