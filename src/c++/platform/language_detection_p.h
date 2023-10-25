/**
  *  @file FILE
  *  @author Dmitry Ryazancev
  *  @date 24.10.23
  *  @copyright Radar-MMS 2023
  */

#pragma once

#if __cplusplus == 1
#define LIBRA_CXX_PRE98
#elif __cplusplus <= 199811L
#define LIBRA_CXX_98
#elif __cplusplus <= 200911L
#define LIBRA_CXX_03
#elif __cplusplus <= 201104L
#define LIBRA_CXX_11
#elif __cplusplus <= 201404L
#define LIBRA_CXX_14
#elif __cplusplus <= 201704L
#define LIBRA_CXX_17
#elif __cplusplus <= 202004L
#define LIBRA_CXX_20
#else
  #define LIBRA_CXX_23
#endif
