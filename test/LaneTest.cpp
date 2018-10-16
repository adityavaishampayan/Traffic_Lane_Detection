/************************************************************************
 MIT License

 Copyright (c) 2018 Harsh Kakashaniya,Rohitkrishna Nambiar

 Permission is hereby granted, free of charge, to any person obtaining a copy
 of this software and associated documentation files (the "Software"), to deal
 in the Software without restriction, including without limitation the rights
 to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 copies of the Software, and to permit persons to whom the Software is
 furnished to do so, subject to the following conditions:

 The above copyright notice and this permission notice shall be included in all
 copies or substantial portions of the Software.

 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 SOFTWARE.
 *************************************************************************/

/**
 * @file    LaneTest.cpp
 * @author  Rohitkrishna Nambiar (rohit517)
 * @date    10/10/2018
 * @version 1.0
 *
 * @brief   Program to test LaneDetectionModule class.
 *
 * @section DESCRIPTION
 *
 * This is a program that tests LaneDetectionModule class.
 */

#include <gtest/gtest.h>
#include "Lane.hpp"
#include "opencv2/opencv.hpp"

// Lane module object
Lane laneTest;

/**
 *  @brief Lane Constructor Test.
 *
 *  @param ConstructorTest  Constructor test
 *  @param EmptyConstructor Name of the unit test
 */
TEST(LaneConstructorTest, EmptyConstructor) {
  int polyOrder = laneTest.getPolyOrder();
  ASSERT_EQ(polyOrder, 1);
}

/**
 *  @brief Custom Lane Constructor Test.
 *
 *  @param ConstructorTest    Constructor test
 *  @param CustomConstructor  Name of the unit test
 */
TEST(LaneConstructorTest, CustomConstructor) {
  Lane laneCustom(2, "blue", 10);
  int polyOrder = laneCustom.getPolyOrder();
  ASSERT_EQ(polyOrder, 2);
}

