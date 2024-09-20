#include <gtest/gtest.h>
#include <linear_alg.h>
#include <vector>

TEST(TwoNormTests, BasicAssertions) {
  std::vector<double> v1 = {1.0, 0.0, 0.0};
  EXPECT_EQ(calculateTwoNorm(v1), 1.1);
}

TEST(DotProductTests, BasicAssertions) {

}

TEST(ProjectionTests, BasicAssertions) {

}