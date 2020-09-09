//===-- VSCodeForward.h -----------------------------------------*- C++ -*-===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

#ifndef LLDBVSCODE_VSCODEFORWARD_H_
#define LLDBVSCODE_VSCODEFORWARD_H_


namespace lldb_vscode {
struct BreakpointBase;
struct ExceptionBreakpoint;
struct FunctionBreakpoint;
struct SourceBreakpoint;
struct SourceReference;
} // namespace lldb_vscode

namespace lldb {
class SBAttachInfo;
class SBBreakpoint;
class SBBreakpointLocation;
class SBCommandInterpreter;
class SBCommandReturnObject;
class SBCommunication;
class SBDebugger;
class SBEvent;
class SBFrame;
class SBHostOS;
class SBInstruction;
class SBInstructionList;
class SBLanguageRuntime;
class SBLaunchInfo;
class SBLineEntry;
class SBListener;
class SBProcess;
class SBStream;
class SBStringList;
class SBTarget;
class SBThread;
class SBValue;
} // namespace lldb

#endif