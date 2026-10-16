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

// Function: sub_001B4C98
// Address: 0x1b4c98 - 0x1b4d70
void sub_001B4C98_0x1b4c98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B4C98_0x1b4c98");
#endif

    switch (ctx->pc) {
        case 0x1b4cbcu: goto label_1b4cbc;
        case 0x1b4cc8u: goto label_1b4cc8;
        case 0x1b4cd4u: goto label_1b4cd4;
        case 0x1b4ce0u: goto label_1b4ce0;
        case 0x1b4cecu: goto label_1b4cec;
        case 0x1b4cf4u: goto label_1b4cf4;
        case 0x1b4d0cu: goto label_1b4d0c;
        case 0x1b4d24u: goto label_1b4d24;
        case 0x1b4d3cu: goto label_1b4d3c;
        case 0x1b4d54u: goto label_1b4d54;
        case 0x1b4d60u: goto label_1b4d60;
        default: break;
    }

    ctx->pc = 0x1b4c98u;

    // 0x1b4c98: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b4c98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b4c9c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1b4c9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1b4ca0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b4ca0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b4ca4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b4ca4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4ca8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1b4ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b4cac: 0x50800013  beql        $a0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x1B4CACu;
    {
        const bool branch_taken_0x1b4cac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b4cac) {
            ctx->pc = 0x1B4CB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B4CACu;
            // 0x1b4cb0: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B4CFCu;
            goto label_1b4cfc;
        }
    }
    ctx->pc = 0x1B4CB4u;
    // 0x1b4cb4: 0xc097a26  jal         func_25E898
    ctx->pc = 0x1B4CB4u;
    SET_GPR_U32(ctx, 31, 0x1B4CBCu);
    ctx->pc = 0x1B4CB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4CB4u;
    // 0x1b4cb8: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25E898u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25E898u, 0x1B4CB4u, 0x1B4CBCu)) {
        return;
    }
    ctx->pc = 0x1B4CBCu;
label_1b4cbc:
    // 0x1b4cbc: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1b4cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b4cc0: 0xc097922  jal         func_25E488
    ctx->pc = 0x1B4CC0u;
    SET_GPR_U32(ctx, 31, 0x1B4CC8u);
    ctx->pc = 0x1B4CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4CC0u;
    // 0x1b4cc4: 0x8e050008  lw          $a1, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25E488u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25E488u, 0x1B4CC0u, 0x1B4CC8u)) {
        return;
    }
    ctx->pc = 0x1B4CC8u;
label_1b4cc8:
    // 0x1b4cc8: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x1b4cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1b4ccc: 0xc08ad6a  jal         func_22B5A8
    ctx->pc = 0x1B4CCCu;
    SET_GPR_U32(ctx, 31, 0x1B4CD4u);
    ctx->pc = 0x1B4CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4CCCu;
    // 0x1b4cd0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22B5A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22B5A8u, 0x1B4CCCu, 0x1B4CD4u)) {
        return;
    }
    ctx->pc = 0x1B4CD4u;
label_1b4cd4:
    // 0x1b4cd4: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1b4cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1b4cd8: 0xc08ad6a  jal         func_22B5A8
    ctx->pc = 0x1B4CD8u;
    SET_GPR_U32(ctx, 31, 0x1B4CE0u);
    ctx->pc = 0x1B4CDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4CD8u;
    // 0x1b4cdc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22B5A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22B5A8u, 0x1B4CD8u, 0x1B4CE0u)) {
        return;
    }
    ctx->pc = 0x1B4CE0u;
label_1b4ce0:
    // 0x1b4ce0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1b4ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b4ce4: 0xc09799a  jal         func_25E668
    ctx->pc = 0x1B4CE4u;
    SET_GPR_U32(ctx, 31, 0x1B4CECu);
    ctx->pc = 0x1B4CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4CE4u;
    // 0x1b4ce8: 0x8e050014  lw          $a1, 0x14($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25E668u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25E668u, 0x1B4CE4u, 0x1B4CECu)) {
        return;
    }
    ctx->pc = 0x1B4CECu;
label_1b4cec:
    // 0x1b4cec: 0xc0971cc  jal         func_25C730
    ctx->pc = 0x1B4CECu;
    SET_GPR_U32(ctx, 31, 0x1B4CF4u);
    ctx->pc = 0x1B4CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4CECu;
    // 0x1b4cf0: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C730u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25C730u, 0x1B4CECu, 0x1B4CF4u)) {
        return;
    }
    ctx->pc = 0x1B4CF4u;
label_1b4cf4:
    // 0x1b4cf4: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1b4cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x1b4cf8: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x1b4cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1b4cfc:
    // 0x1b4cfc: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B4CFCu;
    {
        const bool branch_taken_0x1b4cfc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b4cfc) {
            ctx->pc = 0x1B4D00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B4CFCu;
            // 0x1b4d00: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B4D14u;
            goto label_1b4d14;
        }
    }
    ctx->pc = 0x1B4D04u;
    // 0x1b4d04: 0xc0898d2  jal         func_226348
    ctx->pc = 0x1B4D04u;
    SET_GPR_U32(ctx, 31, 0x1B4D0Cu);
    ctx->pc = 0x226348u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226348u, 0x1B4D04u, 0x1B4D0Cu)) {
        return;
    }
    ctx->pc = 0x1B4D0Cu;
label_1b4d0c:
    // 0x1b4d0c: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x1b4d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x1b4d10: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1b4d10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1b4d14:
    // 0x1b4d14: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B4D14u;
    {
        const bool branch_taken_0x1b4d14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b4d14) {
            ctx->pc = 0x1B4D18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B4D14u;
            // 0x1b4d18: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B4D2Cu;
            goto label_1b4d2c;
        }
    }
    ctx->pc = 0x1B4D1Cu;
    // 0x1b4d1c: 0xc0898d2  jal         func_226348
    ctx->pc = 0x1B4D1Cu;
    SET_GPR_U32(ctx, 31, 0x1B4D24u);
    ctx->pc = 0x226348u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226348u, 0x1B4D1Cu, 0x1B4D24u)) {
        return;
    }
    ctx->pc = 0x1B4D24u;
label_1b4d24:
    // 0x1b4d24: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1b4d24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x1b4d28: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x1b4d28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1b4d2c:
    // 0x1b4d2c: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B4D2Cu;
    {
        const bool branch_taken_0x1b4d2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b4d2c) {
            ctx->pc = 0x1B4D30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B4D2Cu;
            // 0x1b4d30: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B4D44u;
            goto label_1b4d44;
        }
    }
    ctx->pc = 0x1B4D34u;
    // 0x1b4d34: 0xc089484  jal         func_225210
    ctx->pc = 0x1B4D34u;
    SET_GPR_U32(ctx, 31, 0x1B4D3Cu);
    ctx->pc = 0x225210u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x225210u, 0x1B4D34u, 0x1B4D3Cu)) {
        return;
    }
    ctx->pc = 0x1B4D3Cu;
label_1b4d3c:
    // 0x1b4d3c: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1b4d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x1b4d40: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1b4d40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1b4d44:
    // 0x1b4d44: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B4D44u;
    {
        const bool branch_taken_0x1b4d44 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b4d44) {
            ctx->pc = 0x1B4D58u;
            goto label_1b4d58;
        }
    }
    ctx->pc = 0x1B4D4Cu;
    // 0x1b4d4c: 0xc095df4  jal         func_2577D0
    ctx->pc = 0x1B4D4Cu;
    SET_GPR_U32(ctx, 31, 0x1B4D54u);
    ctx->pc = 0x2577D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2577D0u, 0x1B4D4Cu, 0x1B4D54u)) {
        return;
    }
    ctx->pc = 0x1B4D54u;
label_1b4d54:
    // 0x1b4d54: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1b4d54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_1b4d58:
    // 0x1b4d58: 0xc06d35c  jal         func_1B4D70
    ctx->pc = 0x1B4D58u;
    SET_GPR_U32(ctx, 31, 0x1B4D60u);
    ctx->pc = 0x1B4D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4D58u;
    // 0x1b4d5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4D70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B4D70u, 0x1B4D58u, 0x1B4D60u)) {
        return;
    }
    ctx->pc = 0x1B4D60u;
label_1b4d60:
    // 0x1b4d60: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1b4d60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b4d64: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b4d64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b4d68: 0x3e00008  jr          $ra
    ctx->pc = 0x1B4D68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B4D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4D68u;
        // 0x1b4d6c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B4D68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B4D70u;
}
