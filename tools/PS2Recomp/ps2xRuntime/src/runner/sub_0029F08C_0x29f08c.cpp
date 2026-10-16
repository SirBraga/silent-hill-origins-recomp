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

// Function: sub_0029F08C
// Address: 0x29f08c - 0x29f134
void sub_0029F08C_0x29f08c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029F08C_0x29f08c");
#endif

    switch (ctx->pc) {
        case 0x29f094u: goto label_29f094;
        case 0x29f0a8u: goto label_29f0a8;
        case 0x29f0d8u: goto label_29f0d8;
        case 0x29f0ecu: goto label_29f0ec;
        case 0x29f0f8u: goto label_29f0f8;
        case 0x29f108u: goto label_29f108;
        case 0x29f110u: goto label_29f110;
        case 0x29f118u: goto label_29f118;
        case 0x29f12cu: goto label_29f12c;
        default: break;
    }

    ctx->pc = 0x29f08cu;

    // 0x29f08c: 0xc07e4fc  jal         func_1F93F0
    ctx->pc = 0x29F08Cu;
    SET_GPR_U32(ctx, 31, 0x29F094u);
    ctx->pc = 0x1F93F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F93F0u, 0x29F08Cu, 0x29F094u)) {
        return;
    }
    ctx->pc = 0x29F094u;
label_29f094:
    // 0x29f094: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x29f094u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29f098: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29f098u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29f09c: 0x3e00008  jr          $ra
    ctx->pc = 0x29F09Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29F0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F09Cu;
        // 0x29f0a0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29F09Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29F0A4u;
    // 0x29f0a4: 0x0  nop
    ctx->pc = 0x29f0a4u;
    // NOP
label_29f0a8:
    // 0x29f0a8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x29f0a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x29f0ac: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x29f0acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x29f0b0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29f0b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29f0b4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x29f0b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f0b8: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x29f0b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x29f0bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29f0bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f0c0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x29f0c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x29f0c4: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x29f0c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f0c8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x29f0c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f0cc: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x29f0ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x29f0d0: 0xc0a6df0  jal         func_29B7C0
    ctx->pc = 0x29F0D0u;
    SET_GPR_U32(ctx, 31, 0x29F0D8u);
    ctx->pc = 0x29F0D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F0D0u;
    // 0x29f0d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29B7C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29B7C0u, 0x29F0D0u, 0x29F0D8u)) {
        return;
    }
    ctx->pc = 0x29F0D8u;
label_29f0d8:
    // 0x29f0d8: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x29f0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x29f0dc: 0x2463d920  addiu       $v1, $v1, -0x26E0
    ctx->pc = 0x29f0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957344));
    // 0x29f0e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29f0e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f0e4: 0xc0a8acc  jal         func_2A2B30
    ctx->pc = 0x29F0E4u;
    SET_GPR_U32(ctx, 31, 0x29F0ECu);
    ctx->pc = 0x29F0E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F0E4u;
    // 0x29f0e8: 0xae030050  sw          $v1, 0x50($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2B30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2A2B30u, 0x29F0E4u, 0x29F0ECu)) {
        return;
    }
    ctx->pc = 0x29F0ECu;
label_29f0ec:
    // 0x29f0ec: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x29f0ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f0f0: 0xc0a8b6c  jal         func_2A2DB0
    ctx->pc = 0x29F0F0u;
    SET_GPR_U32(ctx, 31, 0x29F0F8u);
    ctx->pc = 0x29F0F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F0F0u;
    // 0x29f0f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2DB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2A2DB0u, 0x29F0F0u, 0x29F0F8u)) {
        return;
    }
    ctx->pc = 0x29F0F8u;
label_29f0f8:
    // 0x29f0f8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x29f0f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f0fc: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x29f0fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f100: 0xc0a7cde  jal         func_29F378
    ctx->pc = 0x29F100u;
    SET_GPR_U32(ctx, 31, 0x29F108u);
    ctx->pc = 0x29F104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F100u;
    // 0x29f104: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29F378u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29F378u, 0x29F100u, 0x29F108u)) {
        return;
    }
    ctx->pc = 0x29F108u;
label_29f108:
    // 0x29f108: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x29F108u;
    {
        const bool branch_taken_0x29f108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29F10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F108u;
        // 0x29f10c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f108) {
            ctx->pc = 0x29F118u;
            goto label_29f118;
        }
    }
    ctx->pc = 0x29F110u;
label_29f110:
    // 0x29f110: 0xc07e3f2  jal         func_1F8FC8
    ctx->pc = 0x29F110u;
    SET_GPR_U32(ctx, 31, 0x29F118u);
    ctx->pc = 0x1F8FC8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F8FC8u, 0x29F110u, 0x29F118u)) {
        return;
    }
    ctx->pc = 0x29F118u;
label_29f118:
    // 0x29f118: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x29F118u;
    {
        const bool branch_taken_0x29f118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29F11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F118u;
        // 0x29f11c: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f118) {
            ctx->pc = 0x29F13Cu;
            return;
        }
    }
    ctx->pc = 0x29F120u;
    // 0x29f120: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29f120u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f124: 0xc0a6dfe  jal         func_29B7F8
    ctx->pc = 0x29F124u;
    SET_GPR_U32(ctx, 31, 0x29F12Cu);
    ctx->pc = 0x29F128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F124u;
    // 0x29f128: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29B7F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29B7F8u, 0x29F124u, 0x29F12Cu)) {
        return;
    }
    ctx->pc = 0x29F12Cu;
label_29f12c:
    // 0x29f12c: 0x1000fff8  b           . + 4 + (-0x8 << 2)
    ctx->pc = 0x29F12Cu;
    {
        const bool branch_taken_0x29f12c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29f12c) {
            ctx->pc = 0x29F110u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29f110;
        }
    }
    ctx->pc = 0x29F134u;
}
