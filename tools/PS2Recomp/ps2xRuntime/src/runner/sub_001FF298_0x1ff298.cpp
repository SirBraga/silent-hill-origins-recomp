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

// Function: sub_001FF298
// Address: 0x1ff298 - 0x1ff308
void sub_001FF298_0x1ff298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FF298_0x1ff298");
#endif

    switch (ctx->pc) {
        case 0x1ff298u: goto label_1ff298;
        case 0x1ff29cu: goto label_1ff29c;
        case 0x1ff2a0u: goto label_1ff2a0;
        case 0x1ff2a4u: goto label_1ff2a4;
        case 0x1ff2a8u: goto label_1ff2a8;
        case 0x1ff2acu: goto label_1ff2ac;
        case 0x1ff2b0u: goto label_1ff2b0;
        case 0x1ff2b4u: goto label_1ff2b4;
        case 0x1ff2b8u: goto label_1ff2b8;
        case 0x1ff2bcu: goto label_1ff2bc;
        case 0x1ff2c0u: goto label_1ff2c0;
        case 0x1ff2c4u: goto label_1ff2c4;
        case 0x1ff2c8u: goto label_1ff2c8;
        case 0x1ff2ccu: goto label_1ff2cc;
        case 0x1ff2d0u: goto label_1ff2d0;
        case 0x1ff2d4u: goto label_1ff2d4;
        case 0x1ff2d8u: goto label_1ff2d8;
        case 0x1ff2dcu: goto label_1ff2dc;
        case 0x1ff2e0u: goto label_1ff2e0;
        case 0x1ff2e4u: goto label_1ff2e4;
        case 0x1ff2e8u: goto label_1ff2e8;
        case 0x1ff2ecu: goto label_1ff2ec;
        case 0x1ff2f0u: goto label_1ff2f0;
        case 0x1ff2f4u: goto label_1ff2f4;
        case 0x1ff2f8u: goto label_1ff2f8;
        case 0x1ff2fcu: goto label_1ff2fc;
        case 0x1ff300u: goto label_1ff300;
        case 0x1ff304u: goto label_1ff304;
        default: break;
    }

    ctx->pc = 0x1ff298u;

label_1ff298:
    // 0x1ff298: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ff298u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1ff29c:
    // 0x1ff29c: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x1ff29cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
label_1ff2a0:
    // 0x1ff2a0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ff2a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1ff2a4:
    // 0x1ff2a4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1ff2a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1ff2a8:
    // 0x1ff2a8: 0x8c900000  lw          $s0, 0x0($a0)
    ctx->pc = 0x1ff2a8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1ff2ac:
    // 0x1ff2ac: 0x8c421a70  lw          $v0, 0x1A70($v0)
    ctx->pc = 0x1ff2acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6768)));
label_1ff2b0:
    // 0x1ff2b0: 0x52020012  beql        $s0, $v0, . + 4 + (0x12 << 2)
label_1ff2b4:
    if (ctx->pc == 0x1FF2B4u) {
        ctx->pc = 0x1FF2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF2B0u;
        // 0x1ff2b4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF2B8u;
        goto label_1ff2b8;
    }
    ctx->pc = 0x1FF2B0u;
    {
        const bool branch_taken_0x1ff2b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ff2b0) {
            ctx->pc = 0x1FF2B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FF2B0u;
            // 0x1ff2b4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FF2FCu;
            goto label_1ff2fc;
        }
    }
    ctx->pc = 0x1FF2B8u;
label_1ff2b8:
    // 0x1ff2b8: 0xafb00000  sw          $s0, 0x0($sp)
    ctx->pc = 0x1ff2b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 16));
label_1ff2bc:
    // 0x1ff2bc: 0x1202000e  beq         $s0, $v0, . + 4 + (0xE << 2)
label_1ff2c0:
    if (ctx->pc == 0x1FF2C0u) {
        ctx->pc = 0x1FF2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF2BCu;
        // 0x1ff2c0: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF2C4u;
        goto label_1ff2c4;
    }
    ctx->pc = 0x1FF2BCu;
    {
        const bool branch_taken_0x1ff2bc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FF2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF2BCu;
        // 0x1ff2c0: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff2bc) {
            ctx->pc = 0x1FF2F8u;
            goto label_1ff2f8;
        }
    }
    ctx->pc = 0x1FF2C4u;
label_1ff2c4:
    // 0x1ff2c4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1ff2c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1ff2c8:
    // 0x1ff2c8: 0x5080000c  beql        $a0, $zero, . + 4 + (0xC << 2)
label_1ff2cc:
    if (ctx->pc == 0x1FF2CCu) {
        ctx->pc = 0x1FF2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF2C8u;
        // 0x1ff2cc: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF2D0u;
        goto label_1ff2d0;
    }
    ctx->pc = 0x1FF2C8u;
    {
        const bool branch_taken_0x1ff2c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ff2c8) {
            ctx->pc = 0x1FF2CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FF2C8u;
            // 0x1ff2cc: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FF2FCu;
            goto label_1ff2fc;
        }
    }
    ctx->pc = 0x1FF2D0u;
label_1ff2d0:
    // 0x1ff2d0: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x1ff2d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1ff2d4:
    // 0x1ff2d4: 0x10c0fffb  beqz        $a2, . + 4 + (-0x5 << 2)
label_1ff2d8:
    if (ctx->pc == 0x1FF2D8u) {
        ctx->pc = 0x1FF2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF2D4u;
        // 0x1ff2d8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF2DCu;
        goto label_1ff2dc;
    }
    ctx->pc = 0x1FF2D4u;
    {
        const bool branch_taken_0x1ff2d4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF2D4u;
        // 0x1ff2d8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff2d4) {
            ctx->pc = 0x1FF2C4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ff2c4;
        }
    }
    ctx->pc = 0x1FF2DCu;
label_1ff2dc:
    // 0x1ff2dc: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x1ff2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_1ff2e0:
    // 0x1ff2e0: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x1ff2e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_1ff2e4:
    // 0x1ff2e4: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x1ff2e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1ff2e8:
    // 0x1ff2e8: 0x60f809  jalr        $v1
label_1ff2ec:
    if (ctx->pc == 0x1FF2ECu) {
        ctx->pc = 0x1FF2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF2E8u;
        // 0x1ff2ec: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF2F0u;
        goto label_1ff2f0;
    }
    ctx->pc = 0x1FF2E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1FF2F0u);
        ctx->pc = 0x1FF2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF2E8u;
        // 0x1ff2ec: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FF2E8u, 0x1FF2F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FF2F0u;
label_1ff2f0:
    // 0x1ff2f0: 0x1000fff5  b           . + 4 + (-0xB << 2)
label_1ff2f4:
    if (ctx->pc == 0x1FF2F4u) {
        ctx->pc = 0x1FF2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF2F0u;
        // 0x1ff2f4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF2F8u;
        goto label_1ff2f8;
    }
    ctx->pc = 0x1FF2F0u;
    {
        const bool branch_taken_0x1ff2f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF2F0u;
        // 0x1ff2f4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff2f0) {
            ctx->pc = 0x1FF2C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ff2c8;
        }
    }
    ctx->pc = 0x1FF2F8u;
label_1ff2f8:
    // 0x1ff2f8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1ff2f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1ff2fc:
    // 0x1ff2fc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ff2fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1ff300:
    // 0x1ff300: 0x3e00008  jr          $ra
label_1ff304:
    if (ctx->pc == 0x1FF304u) {
        ctx->pc = 0x1FF304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF300u;
        // 0x1ff304: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF308u;
        goto label_fallthrough_0x1ff300;
    }
    ctx->pc = 0x1FF300u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FF304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF300u;
        // 0x1ff304: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FF300u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1ff300:
    ctx->pc = 0x1FF308u;
}
