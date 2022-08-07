#pragma once

#ifdef MYDLL_EXPORTS
#define MYDLL_API __declspec(dllexport)
#else
#define MYDLL_API __declspec(dllimport)
#endif

// �p��ڤ�Z���]Euclidean Distance�^���
extern "C" MYDLL_API double dist
(
	const double x1, const double y1,
	const double x2, const double y2
);