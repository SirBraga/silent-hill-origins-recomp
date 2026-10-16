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

// Function: sub_001AC060
// Address: 0x1ac060 - 0x1ac118
void sub_001AC060_0x1ac060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AC060_0x1ac060");
#endif

    switch (ctx->pc) {
        case 0x1ac060u: goto label_1ac060;
        case 0x1ac064u: goto label_1ac064;
        case 0x1ac068u: goto label_1ac068;
        case 0x1ac06cu: goto label_1ac06c;
        case 0x1ac070u: goto label_1ac070;
        case 0x1ac074u: goto label_1ac074;
        case 0x1ac078u: goto label_1ac078;
        case 0x1ac07cu: goto label_1ac07c;
        case 0x1ac080u: goto label_1ac080;
        case 0x1ac084u: goto label_1ac084;
        case 0x1ac088u: goto label_1ac088;
        case 0x1ac08cu: goto label_1ac08c;
        case 0x1ac090u: goto label_1ac090;
        case 0x1ac094u: goto label_1ac094;
        case 0x1ac098u: goto label_1ac098;
        case 0x1ac09cu: goto label_1ac09c;
        case 0x1ac0a0u: goto label_1ac0a0;
        case 0x1ac0a4u: goto label_1ac0a4;
        case 0x1ac0a8u: goto label_1ac0a8;
        case 0x1ac0acu: goto label_1ac0ac;
        case 0x1ac0b0u: goto label_1ac0b0;
        case 0x1ac0b4u: goto label_1ac0b4;
        case 0x1ac0b8u: goto label_1ac0b8;
        case 0x1ac0bcu: goto label_1ac0bc;
        case 0x1ac0c0u: goto label_1ac0c0;
        case 0x1ac0c4u: goto label_1ac0c4;
        case 0x1ac0c8u: goto label_1ac0c8;
        case 0x1ac0ccu: goto label_1ac0cc;
        case 0x1ac0d0u: goto label_1ac0d0;
        case 0x1ac0d4u: goto label_1ac0d4;
        case 0x1ac0d8u: goto label_1ac0d8;
        case 0x1ac0dcu: goto label_1ac0dc;
        case 0x1ac0e0u: goto label_1ac0e0;
        case 0x1ac0e4u: goto label_1ac0e4;
        case 0x1ac0e8u: goto label_1ac0e8;
        case 0x1ac0ecu: goto label_1ac0ec;
        case 0x1ac0f0u: goto label_1ac0f0;
        case 0x1ac0f4u: goto label_1ac0f4;
        case 0x1ac0f8u: goto label_1ac0f8;
        case 0x1ac0fcu: goto label_1ac0fc;
        case 0x1ac100u: goto label_1ac100;
        case 0x1ac104u: goto label_1ac104;
        case 0x1ac108u: goto label_1ac108;
        case 0x1ac10cu: goto label_1ac10c;
        case 0x1ac110u: goto label_1ac110;
        case 0x1ac114u: goto label_1ac114;
        default: break;
    }

    ctx->pc = 0x1ac060u;

label_1ac060:
    // 0x1ac060: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ac060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1ac064:
    // 0x1ac064: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1ac064u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1ac068:
    // 0x1ac068: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ac068u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1ac06c:
    // 0x1ac06c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ac06cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ac070:
    // 0x1ac070: 0xae050004  sw          $a1, 0x4($s0)
    ctx->pc = 0x1ac070u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 5));
label_1ac074:
    // 0x1ac074: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1ac074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1ac078:
    // 0x1ac078: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x1ac078u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_1ac07c:
    // 0x1ac07c: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x1ac07cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_1ac080:
    // 0x1ac080: 0x60f809  jalr        $v1
label_1ac084:
    if (ctx->pc == 0x1AC084u) {
        ctx->pc = 0x1AC084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC080u;
        // 0x1ac084: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC088u;
        goto label_1ac088;
    }
    ctx->pc = 0x1AC080u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1AC088u);
        ctx->pc = 0x1AC084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC080u;
        // 0x1ac084: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AC080u, 0x1AC088u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AC088u;
label_1ac088:
    // 0x1ac088: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ac088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ac08c:
    // 0x1ac08c: 0xae001070  sw          $zero, 0x1070($s0)
    ctx->pc = 0x1ac08cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4208), GPR_U32(ctx, 0));
label_1ac090:
    // 0x1ac090: 0xae021078  sw          $v0, 0x1078($s0)
    ctx->pc = 0x1ac090u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4216), GPR_U32(ctx, 2));
label_1ac094:
    // 0x1ac094: 0x2605000c  addiu       $a1, $s0, 0xC
    ctx->pc = 0x1ac094u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_1ac098:
    // 0x1ac098: 0xae021080  sw          $v0, 0x1080($s0)
    ctx->pc = 0x1ac098u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4224), GPR_U32(ctx, 2));
label_1ac09c:
    // 0x1ac09c: 0xae021074  sw          $v0, 0x1074($s0)
    ctx->pc = 0x1ac09cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4212), GPR_U32(ctx, 2));
label_1ac0a0:
    // 0x1ac0a0: 0xae00107c  sw          $zero, 0x107C($s0)
    ctx->pc = 0x1ac0a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4220), GPR_U32(ctx, 0));
label_1ac0a4:
    // 0x1ac0a4: 0x8ca20040  lw          $v0, 0x40($a1)
    ctx->pc = 0x1ac0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 64)));
label_1ac0a8:
    // 0x1ac0a8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_1ac0ac:
    if (ctx->pc == 0x1AC0ACu) {
        ctx->pc = 0x1AC0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC0A8u;
        // 0x1ac0ac: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC0B0u;
        goto label_1ac0b0;
    }
    ctx->pc = 0x1AC0A8u;
    {
        const bool branch_taken_0x1ac0a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC0A8u;
        // 0x1ac0ac: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac0a8) {
            ctx->pc = 0x1AC0D0u;
            goto label_1ac0d0;
        }
    }
    ctx->pc = 0x1AC0B0u;
label_1ac0b0:
    // 0x1ac0b0: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x1ac0b0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1ac0b4:
    // 0x1ac0b4: 0x0  nop
    ctx->pc = 0x1ac0b4u;
    // NOP
label_1ac0b8:
    // 0x1ac0b8: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1ac0b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_1ac0bc:
    // 0x1ac0bc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1ac0bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1ac0c0:
    // 0x1ac0c0: 0x8ca20040  lw          $v0, 0x40($a1)
    ctx->pc = 0x1ac0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 64)));
label_1ac0c4:
    // 0x1ac0c4: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x1ac0c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1ac0c8:
    // 0x1ac0c8: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
label_1ac0cc:
    if (ctx->pc == 0x1AC0CCu) {
        ctx->pc = 0x1AC0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC0C8u;
        // 0x1ac0cc: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC0D0u;
        goto label_1ac0d0;
    }
    ctx->pc = 0x1AC0C8u;
    {
        const bool branch_taken_0x1ac0c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AC0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC0C8u;
        // 0x1ac0cc: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac0c8) {
            ctx->pc = 0x1AC0B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ac0b8;
        }
    }
    ctx->pc = 0x1AC0D0u;
label_1ac0d0:
    // 0x1ac0d0: 0xaca00040  sw          $zero, 0x40($a1)
    ctx->pc = 0x1ac0d0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 64), GPR_U32(ctx, 0));
label_1ac0d4:
    // 0x1ac0d4: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x1ac0d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_1ac0d8:
    // 0x1ac0d8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1ac0d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1ac0dc:
    // 0x1ac0dc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ac0dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ac0e0:
    // 0x1ac0e0: 0x2605000c  addiu       $a1, $s0, 0xC
    ctx->pc = 0x1ac0e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_1ac0e4:
    // 0x1ac0e4: 0x0  nop
    ctx->pc = 0x1ac0e4u;
    // NOP
label_1ac0e8:
    // 0x1ac0e8: 0x8e03004c  lw          $v1, 0x4C($s0)
    ctx->pc = 0x1ac0e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
label_1ac0ec:
    // 0x1ac0ec: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1ac0ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_1ac0f0:
    // 0x1ac0f0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1ac0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1ac0f4:
    // 0x1ac0f4: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x1ac0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_1ac0f8:
    // 0x1ac0f8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1ac0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1ac0fc:
    // 0x1ac0fc: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1ac0fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_1ac100:
    // 0x1ac100: 0x481fff9  bgez        $a0, . + 4 + (-0x7 << 2)
label_1ac104:
    if (ctx->pc == 0x1AC104u) {
        ctx->pc = 0x1AC104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC100u;
        // 0x1ac104: 0xae03004c  sw          $v1, 0x4C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC108u;
        goto label_1ac108;
    }
    ctx->pc = 0x1AC100u;
    {
        const bool branch_taken_0x1ac100 = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x1AC104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC100u;
        // 0x1ac104: 0xae03004c  sw          $v1, 0x4C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac100) {
            ctx->pc = 0x1AC0E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ac0e8;
        }
    }
    ctx->pc = 0x1AC108u;
label_1ac108:
    // 0x1ac108: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1ac108u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1ac10c:
    // 0x1ac10c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ac10cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ac110:
    // 0x1ac110: 0x3e00008  jr          $ra
label_1ac114:
    if (ctx->pc == 0x1AC114u) {
        ctx->pc = 0x1AC114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC110u;
        // 0x1ac114: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC118u;
        goto label_fallthrough_0x1ac110;
    }
    ctx->pc = 0x1AC110u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AC114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC110u;
        // 0x1ac114: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AC110u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1ac110:
    ctx->pc = 0x1AC118u;
}
