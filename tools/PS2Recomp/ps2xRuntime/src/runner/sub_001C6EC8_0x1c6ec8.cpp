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

// Function: sub_001C6EC8
// Address: 0x1c6ec8 - 0x1c6f48
void sub_001C6EC8_0x1c6ec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C6EC8_0x1c6ec8");
#endif

    switch (ctx->pc) {
        case 0x1c6ee4u: goto label_1c6ee4;
        case 0x1c6ef8u: goto label_1c6ef8;
        case 0x1c6f30u: goto label_1c6f30;
        default: break;
    }

    ctx->pc = 0x1c6ec8u;

    // 0x1c6ec8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c6ec8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c6ecc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1c6eccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1c6ed0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c6ed0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c6ed4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c6ed4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6ed8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c6ed8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c6edc: 0xc06bcae  jal         func_1AF2B8
    ctx->pc = 0x1C6EDCu;
    SET_GPR_U32(ctx, 31, 0x1C6EE4u);
    ctx->pc = 0x1C6EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6EDCu;
    // 0x1c6ee0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF2B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AF2B8u, 0x1C6EDCu, 0x1C6EE4u)) {
        return;
    }
    ctx->pc = 0x1C6EE4u;
label_1c6ee4:
    // 0x1c6ee4: 0x8e040268  lw          $a0, 0x268($s0)
    ctx->pc = 0x1c6ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 616)));
    // 0x1c6ee8: 0x5080000d  beql        $a0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x1C6EE8u;
    {
        const bool branch_taken_0x1c6ee8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c6ee8) {
            ctx->pc = 0x1C6EECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C6EE8u;
            // 0x1c6eec: 0x8e040260  lw          $a0, 0x260($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 608)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C6F20u;
            goto label_1c6f20;
        }
    }
    ctx->pc = 0x1C6EF0u;
    // 0x1c6ef0: 0xc06d134  jal         func_1B44D0
    ctx->pc = 0x1C6EF0u;
    SET_GPR_U32(ctx, 31, 0x1C6EF8u);
    ctx->pc = 0x1B44D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B44D0u, 0x1C6EF0u, 0x1C6EF8u)) {
        return;
    }
    ctx->pc = 0x1C6EF8u;
label_1c6ef8:
    // 0x1c6ef8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1c6ef8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6efc: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C6EFCu;
    {
        const bool branch_taken_0x1c6efc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6EFCu;
        // 0x1c6f00: 0xae03026c  sw          $v1, 0x26C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 620), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6efc) {
            ctx->pc = 0x1C6F1Cu;
            goto label_1c6f1c;
        }
    }
    ctx->pc = 0x1C6F04u;
    // 0x1c6f04: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C6F04u;
    {
        const bool branch_taken_0x1c6f04 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6F04u;
        // 0x1c6f08: 0x8c620054  lw          $v0, 0x54($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6f04) {
            ctx->pc = 0x1C6F14u;
            goto label_1c6f14;
        }
    }
    ctx->pc = 0x1C6F0Cu;
    // 0x1c6f0c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C6F0Cu;
    {
        const bool branch_taken_0x1c6f0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6F0Cu;
        // 0x1c6f10: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6f0c) {
            ctx->pc = 0x1C6F18u;
            goto label_1c6f18;
        }
    }
    ctx->pc = 0x1C6F14u;
label_1c6f14:
    // 0x1c6f14: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1c6f14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1c6f18:
    // 0x1c6f18: 0xac620054  sw          $v0, 0x54($v1)
    ctx->pc = 0x1c6f18u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 2));
label_1c6f1c:
    // 0x1c6f1c: 0x8e040260  lw          $a0, 0x260($s0)
    ctx->pc = 0x1c6f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 608)));
label_1c6f20:
    // 0x1c6f20: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C6F20u;
    {
        const bool branch_taken_0x1c6f20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6F20u;
        // 0x1c6f24: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6f20) {
            ctx->pc = 0x1C6F34u;
            goto label_1c6f34;
        }
    }
    ctx->pc = 0x1C6F28u;
    // 0x1c6f28: 0xc06db64  jal         func_1B6D90
    ctx->pc = 0x1C6F28u;
    SET_GPR_U32(ctx, 31, 0x1C6F30u);
    ctx->pc = 0x1C6F2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6F28u;
    // 0x1c6f2c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6D90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B6D90u, 0x1C6F28u, 0x1C6F30u)) {
        return;
    }
    ctx->pc = 0x1C6F30u;
label_1c6f30:
    // 0x1c6f30: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1c6f30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1c6f34:
    // 0x1c6f34: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c6f34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c6f38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c6f38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c6f3c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C6F3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C6F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6F3Cu;
        // 0x1c6f40: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C6F3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C6F44u;
    // 0x1c6f44: 0x0  nop
    ctx->pc = 0x1c6f44u;
    // NOP
    ctx->pc = 0x1c6f48u;
}
