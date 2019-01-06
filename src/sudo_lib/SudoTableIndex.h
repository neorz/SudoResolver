#pragma once

/**
 * 非法的索引数组
 */
#define INVALID_INDEX_ARRAY NULL

/**
 * 非法的宫号
 */
#define INVALID_BLOCK 0xFF

/**
 * 非法的行号
 */
#define INVALID_ROW 0xFF

/**
 * 非法的列号
 */
#define INVALID_COLUMN 0xFF

/**
 * 根据行号获取该行所有单元格的索引
 * @param rowNo [in] 行号
 * @return 该行所有单元格的索引数组，NULL表示输入值非法
 * @note 因为一行固定九个单元格，所以返回的数组要么是NULL，
 *       要么是9个元素，就不专门返回数组长度了
 */
unsigned char* GetCellIndexesByRowNo(unsigned char rowNo);

/**
 * 根据列号获取该列所有单元格的索引
 * @param columnNo [in] 列号
 * @return 该列所有单元格的索引数组，NULL表示输入值非法
 */
unsigned char* GetCellIndexesByColumnNo(unsigned char columnNo);

/**
 * 根据宫号返回该宫所有单元格的索引
 * @param blockNo [in] 宫号
 * @return 该宫所有单元格的索引数组，NULL表示输入值非法
 */
unsigned char* GetCellIndexesByBlockNo(unsigned char blockNo);

/**
 * 根据单元格的索引返回所属的宫号
 * @param cellIndex [in] 单元格索引
 * @return 所属的宫号，@see INVALID_BLOCK 表示输入值非法
 */
unsigned char GetBlockNoByCellIndex(unsigned char cellIndex);


/**
 * 根据单元格的索引返回所属的行号
 * @param cellIndex [in] 单元格索引
 * @return 所属的行号，@see INVALID_ROW 表示输入值非法
 */
unsigned char GetRowNoByCellIndex(unsigned char cellIndex);

/**
 * 根据单元格的索引返回所属的列号
 * @param cellIndex [in] 单元格索引
 * @return 所属的列号，@see INVALID_COLUMN 表示输入值非法
 */
unsigned char GetColumnByCellIndex(unsigned char cellIndex);


