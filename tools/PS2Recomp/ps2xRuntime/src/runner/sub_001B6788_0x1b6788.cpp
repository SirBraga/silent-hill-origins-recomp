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

// Function: sub_001B6788
// Address: 0x1b6788 - 0x1b6830
void sub_001B6788_0x1b6788(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B6788_0x1b6788");
#endif

    switch (ctx->pc) {
        case 0x1b67b0u: goto label_1b67b0;
        case 0x1b67b4u: goto label_1b67b4;
        case 0x1b67b8u: goto label_1b67b8;
        case 0x1b680cu: goto label_1b680c;
        default: break;
    }

    ctx->pc = 0x1b6788u;

    // 0x1b6788: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b6788u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b678c: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1b678cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1b6790: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1b6790u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1b6794: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b6794u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b6798: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b6798u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b679c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b679cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b67a0: 0x8c44870c  lw          $a0, -0x78F4($v0)
    ctx->pc = 0x1b67a0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x33870Cu));
    // 0x1b67a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b67a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b67a8: 0xc05ec94  jal         func_17B250
    ctx->pc = 0x1B67A8u;
    SET_GPR_U32(ctx, 31, 0x1B67B0u);
    ctx->pc = 0x1B67ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B67A8u;
    // 0x1b67ac: 0x2611028c  addiu       $s1, $s0, 0x28C (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 652));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17B250u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17B250u, 0x1B67A8u, 0x1B67B0u)) {
        return;
    }
    ctx->pc = 0x1B67B0u;
label_1b67b0:
    // 0x1b67b0: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x1b67b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
label_1b67b4:
    // 0x1b67b4: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1b67b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1b67b8:
    // 0x1b67b8: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1B67B8u;
    {
        const bool branch_taken_0x1b67b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B67BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B67B8u;
        // 0x1b67bc: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b67b8) {
            ctx->pc = 0x1B681Cu;
            goto label_1b681c;
        }
    }
    ctx->pc = 0x1B67C0u;
    // 0x1b67c0: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x1b67c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1b67c4: 0x0  nop
    ctx->pc = 0x1b67c4u;
    // NOP
    // 0x1b67c8: 0x1080fffb  beqz        $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1B67C8u;
    {
        const bool branch_taken_0x1b67c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b67c8) {
            ctx->pc = 0x1B67B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b67b8;
        }
    }
    ctx->pc = 0x1B67D0u;
    // 0x1b67d0: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1b67d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1b67d4: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B67D4u;
    {
        const bool branch_taken_0x1b67d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B67D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B67D4u;
        // 0x1b67d8: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b67d4) {
            ctx->pc = 0x1B67E8u;
            goto label_1b67e8;
        }
    }
    ctx->pc = 0x1B67DCu;
    // 0x1b67dc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1B67DCu;
    {
        const bool branch_taken_0x1b67dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B67E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B67DCu;
        // 0x1b67e0: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b67dc) {
            ctx->pc = 0x1B67ECu;
            goto label_1b67ec;
        }
    }
    ctx->pc = 0x1B67E4u;
    // 0x1b67e4: 0x0  nop
    ctx->pc = 0x1b67e4u;
    // NOP
label_1b67e8:
    // 0x1b67e8: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1b67e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_1b67ec:
    // 0x1b67ec: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1b67ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1b67f0: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B67F0u;
    {
        const bool branch_taken_0x1b67f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B67F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B67F0u;
        // 0x1b67f4: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b67f0) {
            ctx->pc = 0x1B6800u;
            goto label_1b6800;
        }
    }
    ctx->pc = 0x1B67F8u;
    // 0x1b67f8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1B67F8u;
    {
        const bool branch_taken_0x1b67f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B67FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B67F8u;
        // 0x1b67fc: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b67f8) {
            ctx->pc = 0x1B6804u;
            goto label_1b6804;
        }
    }
    ctx->pc = 0x1B6800u;
label_1b6800:
    // 0x1b6800: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x1b6800u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_1b6804:
    // 0x1b6804: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x1B6804u;
    SET_GPR_U32(ctx, 31, 0x1B680Cu);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x1B6804u, 0x1B680Cu)) {
        return;
    }
    ctx->pc = 0x1B680Cu;
label_1b680c:
    // 0x1b680c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1b680cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1b6810: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1b6810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1b6814: 0x1000ffe7  b           . + 4 + (-0x19 << 2)
    ctx->pc = 0x1B6814u;
    {
        const bool branch_taken_0x1b6814 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6814u;
        // 0x1b6818: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6814) {
            ctx->pc = 0x1B67B4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b67b4;
        }
    }
    ctx->pc = 0x1B681Cu;
label_1b681c:
    // 0x1b681c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b681cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b6820: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b6820u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b6824: 0x3e00008  jr          $ra
    ctx->pc = 0x1B6824u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B6828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6824u;
        // 0x1b6828: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B6824u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B682Cu;
    // 0x1b682c: 0x0  nop
    ctx->pc = 0x1b682cu;
    // NOP
    ctx->pc = 0x1b6830u;
}
