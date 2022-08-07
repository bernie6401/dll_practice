#include "pch.h"
#include <cmath>
#include "MyDLL.h"

// ­pºâ¼Ú¤ó¶ZÂ÷¡]Euclidean Distance¡^¨ç¼Æ
double dist
(
	const double x1, const double y1,
	const double x2, const double y2
)
{
	return std::sqrt(std::pow(x1 - x2, 2) + std::pow(y1 - y2, 2));
}