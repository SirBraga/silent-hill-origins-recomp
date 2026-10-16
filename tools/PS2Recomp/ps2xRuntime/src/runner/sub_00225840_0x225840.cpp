#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00225840
// Address: 0x225840 - 0x225890
void sub_00225840_0x225840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00225840_0x225840");
#endif

    switch (ctx->pc) {
        case 0x22586cu: goto label_22586c;
        default: break;
    }

    ctx->pc = 0x225840u;

    // 0x225840: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x225840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x225844: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x225844u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225848: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x225848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x22584c: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x22584cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x225850: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x225850u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225854: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x225854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x225858: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x225858u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
    // 0x22585c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x22585cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225860: 0x24840fd8  addiu       $a0, $a0, 0xFD8
    ctx->pc = 0x225860u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4056));
    // 0x225864: 0xc08959e  jal         func_225678
    ctx->pc = 0x225864u;
    SET_GPR_U32(ctx, 31, 0x22586Cu);
    ctx->pc = 0x225868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225864u;
    // 0x225868: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225678u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x225678u, 0x225864u, 0x22586Cu)) {
        return;
    }
    ctx->pc = 0x22586Cu;
label_22586c:
    // 0x22586c: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x22586cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0));
    // 0x225870: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x225870u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x225874: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x225874u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225878: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x225878u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22587c: 0x3e00008  jr          $ra
    ctx->pc = 0x22587Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x225880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22587Cu;
        // 0x225880: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22587Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x225884u;
    // 0x225884: 0x0  nop
    ctx->pc = 0x225884u;
    // NOP
    // 0x225888: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x225888u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x22588c: 0x0  nop
    ctx->pc = 0x22588cu;
    // NOP
    ctx->pc = 0x225890u;
}
