#pragma once
#include "matrix.h"

void naive_matmul(Matrix &a, Matrix &b, Matrix &out);
void matmul_4x4_neon(Matrix &a, Matrix &b_, Matrix &out);
void matmul_12x8_neon(Matrix &a, Matrix &b_, Matrix &out);
void matmul(Matrix &a, Matrix &b_, Matrix &out);