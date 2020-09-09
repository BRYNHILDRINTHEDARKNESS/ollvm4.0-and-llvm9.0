; NOTE: Assertions have been autogenerated by utils/update_llc_test_checks.py
; RUN: llc < %s -mtriple=x86_64-unknown -mattr=+bmi2 | FileCheck %s
; RUN: llc < %s -mtriple=x86_64-unknown -mcpu=core-avx2 | FileCheck %s

define i128 @f1(i64 %a, i64 %b) {
; CHECK-LABEL: f1:
; CHECK:       # %bb.0:
; CHECK-NEXT:    movq %rdi, %rax
; CHECK-NEXT:    mulq %rsi
; CHECK-NEXT:    retq
  %x = zext i64 %a to i128
  %y = zext i64 %b to i128
  %r = mul i128 %x, %y
  ret i128 %r
}

define i128 @f2(i64 %a, i64* %p) {
; CHECK-LABEL: f2:
; CHECK:       # %bb.0:
; CHECK-NEXT:    movq %rdi, %rax
; CHECK-NEXT:    mulq (%rsi)
; CHECK-NEXT:    retq
  %b = load i64, i64* %p
  %x = zext i64 %a to i128
  %y = zext i64 %b to i128
  %r = mul i128 %x, %y
  ret i128 %r
}