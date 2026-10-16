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

// Function: sub_00192070
// Address: 0x192070 - 0x1920f0
void sub_00192070_0x192070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00192070_0x192070");
#endif

    switch (ctx->pc) {
        case 0x192070u: goto label_192070;
        case 0x192074u: goto label_192074;
        case 0x192078u: goto label_192078;
        case 0x19207cu: goto label_19207c;
        case 0x192080u: goto label_192080;
        case 0x192084u: goto label_192084;
        case 0x192088u: goto label_192088;
        case 0x19208cu: goto label_19208c;
        case 0x192090u: goto label_192090;
        case 0x192094u: goto label_192094;
        case 0x192098u: goto label_192098;
        case 0x19209cu: goto label_19209c;
        case 0x1920a0u: goto label_1920a0;
        case 0x1920a4u: goto label_1920a4;
        case 0x1920a8u: goto label_1920a8;
        case 0x1920acu: goto label_1920ac;
        case 0x1920b0u: goto label_1920b0;
        case 0x1920b4u: goto label_1920b4;
        case 0x1920b8u: goto label_1920b8;
        case 0x1920bcu: goto label_1920bc;
        case 0x1920c0u: goto label_1920c0;
        case 0x1920c4u: goto label_1920c4;
        case 0x1920c8u: goto label_1920c8;
        case 0x1920ccu: goto label_1920cc;
        case 0x1920d0u: goto label_1920d0;
        case 0x1920d4u: goto label_1920d4;
        case 0x1920d8u: goto label_1920d8;
        case 0x1920dcu: goto label_1920dc;
        case 0x1920e0u: goto label_1920e0;
        case 0x1920e4u: goto label_1920e4;
        case 0x1920e8u: goto label_1920e8;
        case 0x1920ecu: goto label_1920ec;
        default: break;
    }

    ctx->pc = 0x192070u;

label_192070:
    // 0x192070: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x192070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_192074:
    // 0x192074: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x192074u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
label_192078:
    // 0x192078: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x192078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_19207c:
    // 0x19207c: 0x24a58880  addiu       $a1, $a1, -0x7780
    ctx->pc = 0x19207cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936704));
label_192080:
    // 0x192080: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x192080u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_192084:
    // 0x192084: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x192084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_192088:
    // 0x192088: 0xae000100  sw          $zero, 0x100($s0)
    ctx->pc = 0x192088u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 0));
label_19208c:
    // 0x19208c: 0xc07fb0c  jal         func_1FEC30
label_192090:
    if (ctx->pc == 0x192090u) {
        ctx->pc = 0x192090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19208Cu;
        // 0x192090: 0x26040078  addiu       $a0, $s0, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
        ctx->in_delay_slot = false;
        ctx->pc = 0x192094u;
        goto label_192094;
    }
    ctx->pc = 0x19208Cu;
    SET_GPR_U32(ctx, 31, 0x192094u);
    ctx->pc = 0x192090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19208Cu;
    // 0x192090: 0x26040078  addiu       $a0, $s0, 0x78 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x19208Cu, 0x192094u)) {
        return;
    }
    ctx->pc = 0x192094u;
label_192094:
    // 0x192094: 0x8e0600f4  lw          $a2, 0xF4($s0)
    ctx->pc = 0x192094u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 244)));
label_192098:
    // 0x192098: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_19209c:
    if (ctx->pc == 0x19209Cu) {
        ctx->pc = 0x19209Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192098u;
        // 0x19209c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1920A0u;
        goto label_1920a0;
    }
    ctx->pc = 0x192098u;
    {
        const bool branch_taken_0x192098 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x19209Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192098u;
        // 0x19209c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192098) {
            ctx->pc = 0x1920B8u;
            goto label_1920b8;
        }
    }
    ctx->pc = 0x1920A0u;
label_1920a0:
    // 0x1920a0: 0x8cc30034  lw          $v1, 0x34($a2)
    ctx->pc = 0x1920a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
label_1920a4:
    // 0x1920a4: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x1920a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_1920a8:
    // 0x1920a8: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x1920a8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_1920ac:
    // 0x1920ac: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x1920acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_1920b0:
    // 0x1920b0: 0x40f809  jalr        $v0
label_1920b4:
    if (ctx->pc == 0x1920B4u) {
        ctx->pc = 0x1920B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1920B0u;
        // 0x1920b4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1920B8u;
        goto label_1920b8;
    }
    ctx->pc = 0x1920B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1920B8u);
        ctx->pc = 0x1920B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1920B0u;
        // 0x1920b4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1920B0u, 0x1920B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1920B8u;
label_1920b8:
    // 0x1920b8: 0x8e0400f8  lw          $a0, 0xF8($s0)
    ctx->pc = 0x1920b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 248)));
label_1920bc:
    // 0x1920bc: 0xc0808b8  jal         func_2022E0
label_1920c0:
    if (ctx->pc == 0x1920C0u) {
        ctx->pc = 0x1920C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1920BCu;
        // 0x1920c0: 0xae0000f4  sw          $zero, 0xF4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 244), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1920C4u;
        goto label_1920c4;
    }
    ctx->pc = 0x1920BCu;
    SET_GPR_U32(ctx, 31, 0x1920C4u);
    ctx->pc = 0x1920C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1920BCu;
    // 0x1920c0: 0xae0000f4  sw          $zero, 0xF4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 244), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x1920BCu, 0x1920C4u)) {
        return;
    }
    ctx->pc = 0x1920C4u;
label_1920c4:
    // 0x1920c4: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x1920c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1920c8:
    // 0x1920c8: 0xae0000f8  sw          $zero, 0xF8($s0)
    ctx->pc = 0x1920c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 248), GPR_U32(ctx, 0));
label_1920cc:
    // 0x1920cc: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x1920ccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_1920d0:
    // 0x1920d0: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x1920d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_1920d4:
    // 0x1920d4: 0x60f809  jalr        $v1
label_1920d8:
    if (ctx->pc == 0x1920D8u) {
        ctx->pc = 0x1920D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1920D4u;
        // 0x1920d8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1920DCu;
        goto label_1920dc;
    }
    ctx->pc = 0x1920D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1920DCu);
        ctx->pc = 0x1920D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1920D4u;
        // 0x1920d8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1920D4u, 0x1920DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1920DCu;
label_1920dc:
    // 0x1920dc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1920dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1920e0:
    // 0x1920e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1920e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1920e4:
    // 0x1920e4: 0x3e00008  jr          $ra
label_1920e8:
    if (ctx->pc == 0x1920E8u) {
        ctx->pc = 0x1920E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1920E4u;
        // 0x1920e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1920ECu;
        goto label_1920ec;
    }
    ctx->pc = 0x1920E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1920E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1920E4u;
        // 0x1920e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1920E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1920ECu;
label_1920ec:
    // 0x1920ec: 0x0  nop
    ctx->pc = 0x1920ecu;
    // NOP
    ctx->pc = 0x1920f0u;
}
