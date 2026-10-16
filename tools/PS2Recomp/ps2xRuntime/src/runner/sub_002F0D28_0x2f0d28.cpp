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

// Function: sub_002F0D28
// Address: 0x2f0d28 - 0x2f0dc8
void sub_002F0D28_0x2f0d28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F0D28_0x2f0d28");
#endif

    switch (ctx->pc) {
        case 0x2f0d80u: goto label_2f0d80;
        case 0x2f0da0u: goto label_2f0da0;
        case 0x2f0da8u: goto label_2f0da8;
        default: break;
    }

    ctx->pc = 0x2f0d28u;

    // 0x2f0d28: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x2f0d28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x2f0d2c: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2f0d2cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2f0d30: 0x8c436338  lw          $v1, 0x6338($v0)
    ctx->pc = 0x2f0d30u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x686338u));
    // 0x2f0d34: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2f0d34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2f0d38: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F0D38u;
    {
        const bool branch_taken_0x2f0d38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F0D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0D38u;
        // 0x2f0d3c: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0d38) {
            ctx->pc = 0x2F0D4Cu;
            goto label_2f0d4c;
        }
    }
    ctx->pc = 0x2F0D40u;
    // 0x2f0d40: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x2f0d40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x2f0d44: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x2F0D44u;
    {
        const bool branch_taken_0x2f0d44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0D44u;
        // 0x2f0d48: 0x34428001  ori         $v0, $v0, 0x8001 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32769);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0d44) {
            ctx->pc = 0x2F0DA8u;
            goto label_2f0da8;
        }
    }
    ctx->pc = 0x2F0D4Cu;
label_2f0d4c:
    // 0x2f0d4c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2f0d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2f0d50: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x2f0d50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x2f0d54: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2f0d54u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2f0d58: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F0D58u;
    {
        const bool branch_taken_0x2f0d58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f0d58) {
            ctx->pc = 0x2F0D6Cu;
            goto label_2f0d6c;
        }
    }
    ctx->pc = 0x2F0D60u;
    // 0x2f0d60: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x2f0d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2f0d64: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F0D64u;
    {
        const bool branch_taken_0x2f0d64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f0d64) {
            ctx->pc = 0x2F0D78u;
            goto label_2f0d78;
        }
    }
    ctx->pc = 0x2F0D6Cu;
label_2f0d6c:
    // 0x2f0d6c: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x2f0d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x2f0d70: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2F0D70u;
    {
        const bool branch_taken_0x2f0d70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0D70u;
        // 0x2f0d74: 0x34420016  ori         $v0, $v0, 0x16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)22);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0d70) {
            ctx->pc = 0x2F0DA8u;
            goto label_2f0da8;
        }
    }
    ctx->pc = 0x2F0D78u;
label_2f0d78:
    // 0x2f0d78: 0xc0bdf96  jal         func_2F7E58
    ctx->pc = 0x2F0D78u;
    SET_GPR_U32(ctx, 31, 0x2F0D80u);
    ctx->pc = 0x2F7E58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F7E58u, 0x2F0D78u, 0x2F0D80u)) {
        return;
    }
    ctx->pc = 0x2F0D80u;
label_2f0d80:
    // 0x2f0d80: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2f0d80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0d84: 0x6010004  bgez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F0D84u;
    {
        const bool branch_taken_0x2f0d84 = (GPR_S64(ctx, 16) >= 0);
        if (branch_taken_0x2f0d84) {
            ctx->pc = 0x2F0D98u;
            goto label_2f0d98;
        }
    }
    ctx->pc = 0x2F0D8Cu;
    // 0x2f0d8c: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x2f0d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x2f0d90: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2F0D90u;
    {
        const bool branch_taken_0x2f0d90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0D90u;
        // 0x2f0d94: 0x34420017  ori         $v0, $v0, 0x17 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)23);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0d90) {
            ctx->pc = 0x2F0DA8u;
            goto label_2f0da8;
        }
    }
    ctx->pc = 0x2F0D98u;
label_2f0d98:
    // 0x2f0d98: 0xc0bc890  jal         func_2F2240
    ctx->pc = 0x2F0D98u;
    SET_GPR_U32(ctx, 31, 0x2F0DA0u);
    ctx->pc = 0x2F0D9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0D98u;
    // 0x2f0d9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F2240u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F2240u, 0x2F0D98u, 0x2F0DA0u)) {
        return;
    }
    ctx->pc = 0x2F0DA0u;
label_2f0da0:
    // 0x2f0da0: 0xc0bdff0  jal         func_2F7FC0
    ctx->pc = 0x2F0DA0u;
    SET_GPR_U32(ctx, 31, 0x2F0DA8u);
    ctx->pc = 0x2F0DA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0DA0u;
    // 0x2f0da4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F7FC0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F7FC0u, 0x2F0DA0u, 0x2F0DA8u)) {
        return;
    }
    ctx->pc = 0x2F0DA8u;
label_2f0da8:
    // 0x2f0da8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2f0da8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f0dac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f0dacu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f0db0: 0x3e00008  jr          $ra
    ctx->pc = 0x2F0DB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F0DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0DB0u;
        // 0x2f0db4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F0DB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F0DB8u;
    // 0x2f0db8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2f0db8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2f0dbc: 0x0  nop
    ctx->pc = 0x2f0dbcu;
    // NOP
    // 0x2f0dc0: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x2f0dc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2f0dc4: 0x0  nop
    ctx->pc = 0x2f0dc4u;
    // NOP
    ctx->pc = 0x2f0dc8u;
}
