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

// Function: sub_001C4B48
// Address: 0x1c4b48 - 0x1c4c08
void sub_001C4B48_0x1c4b48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C4B48_0x1c4b48");
#endif

    switch (ctx->pc) {
        case 0x1c4b5cu: goto label_1c4b5c;
        case 0x1c4b70u: goto label_1c4b70;
        case 0x1c4b88u: goto label_1c4b88;
        case 0x1c4b9cu: goto label_1c4b9c;
        case 0x1c4bb0u: goto label_1c4bb0;
        case 0x1c4bc0u: goto label_1c4bc0;
        case 0x1c4be4u: goto label_1c4be4;
        case 0x1c4bf4u: goto label_1c4bf4;
        default: break;
    }

    ctx->pc = 0x1c4b48u;

    // 0x1c4b48: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c4b48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c4b4c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1c4b4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1c4b50: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c4b50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c4b54: 0xc06d744  jal         func_1B5D10
    ctx->pc = 0x1C4B54u;
    SET_GPR_U32(ctx, 31, 0x1C4B5Cu);
    ctx->pc = 0x1C4B58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4B54u;
    // 0x1c4b58: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5D10u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B5D10u, 0x1C4B54u, 0x1C4B5Cu)) {
        return;
    }
    ctx->pc = 0x1C4B5Cu;
label_1c4b5c:
    // 0x1c4b5c: 0x8e0402ec  lw          $a0, 0x2EC($s0)
    ctx->pc = 0x1c4b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 748)));
    // 0x1c4b60: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C4B60u;
    {
        const bool branch_taken_0x1c4b60 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c4b60) {
            ctx->pc = 0x1C4B64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C4B60u;
            // 0x1c4b64: 0x8e0402f0  lw          $a0, 0x2F0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 752)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C4B78u;
            goto label_1c4b78;
        }
    }
    ctx->pc = 0x1C4B68u;
    // 0x1c4b68: 0xc07cd92  jal         func_1F3648
    ctx->pc = 0x1C4B68u;
    SET_GPR_U32(ctx, 31, 0x1C4B70u);
    ctx->pc = 0x1C4B6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4B68u;
    // 0x1c4b6c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3648u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F3648u, 0x1C4B68u, 0x1C4B70u)) {
        return;
    }
    ctx->pc = 0x1C4B70u;
label_1c4b70:
    // 0x1c4b70: 0xae0202f4  sw          $v0, 0x2F4($s0)
    ctx->pc = 0x1c4b70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 756), GPR_U32(ctx, 2));
    // 0x1c4b74: 0x8e0402f0  lw          $a0, 0x2F0($s0)
    ctx->pc = 0x1c4b74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 752)));
label_1c4b78:
    // 0x1c4b78: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C4B78u;
    {
        const bool branch_taken_0x1c4b78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4B78u;
        // 0x1c4b7c: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4b78) {
            ctx->pc = 0x1C4B90u;
            goto label_1c4b90;
        }
    }
    ctx->pc = 0x1C4B80u;
    // 0x1c4b80: 0xc07cd92  jal         func_1F3648
    ctx->pc = 0x1C4B80u;
    SET_GPR_U32(ctx, 31, 0x1C4B88u);
    ctx->pc = 0x1C4B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4B80u;
    // 0x1c4b84: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3648u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F3648u, 0x1C4B80u, 0x1C4B88u)) {
        return;
    }
    ctx->pc = 0x1C4B88u;
label_1c4b88:
    // 0x1c4b88: 0xae0202f8  sw          $v0, 0x2F8($s0)
    ctx->pc = 0x1c4b88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 760), GPR_U32(ctx, 2));
    // 0x1c4b8c: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1c4b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_1c4b90:
    // 0x1c4b90: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c4b90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4b94: 0xc07cd92  jal         func_1F3648
    ctx->pc = 0x1C4B94u;
    SET_GPR_U32(ctx, 31, 0x1C4B9Cu);
    ctx->pc = 0x1C4B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4B94u;
    // 0x1c4b98: 0x8c44986c  lw          $a0, -0x6794($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294940780)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3648u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F3648u, 0x1C4B94u, 0x1C4B9Cu)) {
        return;
    }
    ctx->pc = 0x1C4B9Cu;
label_1c4b9c:
    // 0x1c4b9c: 0xae0202fc  sw          $v0, 0x2FC($s0)
    ctx->pc = 0x1c4b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 764), GPR_U32(ctx, 2));
    // 0x1c4ba0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c4ba0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4ba4: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1c4ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1c4ba8: 0xc07cd92  jal         func_1F3648
    ctx->pc = 0x1C4BA8u;
    SET_GPR_U32(ctx, 31, 0x1C4BB0u);
    ctx->pc = 0x1C4BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4BA8u;
    // 0x1c4bac: 0x8c449870  lw          $a0, -0x6790($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294940784)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3648u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F3648u, 0x1C4BA8u, 0x1C4BB0u)) {
        return;
    }
    ctx->pc = 0x1C4BB0u;
label_1c4bb0:
    // 0x1c4bb0: 0x8e040044  lw          $a0, 0x44($s0)
    ctx->pc = 0x1c4bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x1c4bb4: 0x8e0502d4  lw          $a1, 0x2D4($s0)
    ctx->pc = 0x1c4bb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 724)));
    // 0x1c4bb8: 0xc06c97c  jal         func_1B25F0
    ctx->pc = 0x1C4BB8u;
    SET_GPR_U32(ctx, 31, 0x1C4BC0u);
    ctx->pc = 0x1C4BBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4BB8u;
    // 0x1c4bbc: 0xae020300  sw          $v0, 0x300($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 768), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B25F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B25F0u, 0x1C4BB8u, 0x1C4BC0u)) {
        return;
    }
    ctx->pc = 0x1C4BC0u;
label_1c4bc0:
    // 0x1c4bc0: 0x8e0402d8  lw          $a0, 0x2D8($s0)
    ctx->pc = 0x1c4bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 728)));
    // 0x1c4bc4: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x1c4bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1c4bc8: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C4BC8u;
    {
        const bool branch_taken_0x1c4bc8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1C4BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4BC8u;
        // 0x1c4bcc: 0xae0202d0  sw          $v0, 0x2D0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 720), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4bc8) {
            ctx->pc = 0x1C4BDCu;
            goto label_1c4bdc;
        }
    }
    ctx->pc = 0x1C4BD0u;
    // 0x1c4bd0: 0x8e030044  lw          $v1, 0x44($s0)
    ctx->pc = 0x1c4bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x1c4bd4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c4bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c4bd8: 0xac62014c  sw          $v0, 0x14C($v1)
    ctx->pc = 0x1c4bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 332), GPR_U32(ctx, 2));
label_1c4bdc:
    // 0x1c4bdc: 0xc07136c  jal         func_1C4DB0
    ctx->pc = 0x1C4BDCu;
    SET_GPR_U32(ctx, 31, 0x1C4BE4u);
    ctx->pc = 0x1C4BE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4BDCu;
    // 0x1c4be0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4DB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1C4DB0u, 0x1C4BDCu, 0x1C4BE4u)) {
        return;
    }
    ctx->pc = 0x1C4BE4u;
label_1c4be4:
    // 0x1c4be4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c4be4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4be8: 0xae0202e8  sw          $v0, 0x2E8($s0)
    ctx->pc = 0x1c4be8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 744), GPR_U32(ctx, 2));
    // 0x1c4bec: 0xc0713d2  jal         func_1C4F48
    ctx->pc = 0x1C4BECu;
    SET_GPR_U32(ctx, 31, 0x1C4BF4u);
    ctx->pc = 0x1C4BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4BECu;
    // 0x1c4bf0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4F48u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1C4F48u, 0x1C4BECu, 0x1C4BF4u)) {
        return;
    }
    ctx->pc = 0x1C4BF4u;
label_1c4bf4:
    // 0x1c4bf4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1c4bf4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c4bf8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c4bf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c4bfc: 0x3e00008  jr          $ra
    ctx->pc = 0x1C4BFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C4C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4BFCu;
        // 0x1c4c00: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C4BFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C4C04u;
    // 0x1c4c04: 0x0  nop
    ctx->pc = 0x1c4c04u;
    // NOP
    ctx->pc = 0x1c4c08u;
}
