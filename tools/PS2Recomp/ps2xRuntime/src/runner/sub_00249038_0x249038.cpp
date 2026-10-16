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

// Function: sub_00249038
// Address: 0x249038 - 0x249108
void sub_00249038_0x249038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00249038_0x249038");
#endif

    switch (ctx->pc) {
        case 0x249038u: goto label_249038;
        case 0x24903cu: goto label_24903c;
        case 0x249040u: goto label_249040;
        case 0x249044u: goto label_249044;
        case 0x249048u: goto label_249048;
        case 0x24904cu: goto label_24904c;
        case 0x249050u: goto label_249050;
        case 0x249054u: goto label_249054;
        case 0x249058u: goto label_249058;
        case 0x24905cu: goto label_24905c;
        case 0x249060u: goto label_249060;
        case 0x249064u: goto label_249064;
        case 0x249068u: goto label_249068;
        case 0x24906cu: goto label_24906c;
        case 0x249070u: goto label_249070;
        case 0x249074u: goto label_249074;
        case 0x249078u: goto label_249078;
        case 0x24907cu: goto label_24907c;
        case 0x249080u: goto label_249080;
        case 0x249084u: goto label_249084;
        case 0x249088u: goto label_249088;
        case 0x24908cu: goto label_24908c;
        case 0x249090u: goto label_249090;
        case 0x249094u: goto label_249094;
        case 0x249098u: goto label_249098;
        case 0x24909cu: goto label_24909c;
        case 0x2490a0u: goto label_2490a0;
        case 0x2490a4u: goto label_2490a4;
        case 0x2490a8u: goto label_2490a8;
        case 0x2490acu: goto label_2490ac;
        case 0x2490b0u: goto label_2490b0;
        case 0x2490b4u: goto label_2490b4;
        case 0x2490b8u: goto label_2490b8;
        case 0x2490bcu: goto label_2490bc;
        case 0x2490c0u: goto label_2490c0;
        case 0x2490c4u: goto label_2490c4;
        case 0x2490c8u: goto label_2490c8;
        case 0x2490ccu: goto label_2490cc;
        case 0x2490d0u: goto label_2490d0;
        case 0x2490d4u: goto label_2490d4;
        case 0x2490d8u: goto label_2490d8;
        case 0x2490dcu: goto label_2490dc;
        case 0x2490e0u: goto label_2490e0;
        case 0x2490e4u: goto label_2490e4;
        case 0x2490e8u: goto label_2490e8;
        case 0x2490ecu: goto label_2490ec;
        case 0x2490f0u: goto label_2490f0;
        case 0x2490f4u: goto label_2490f4;
        case 0x2490f8u: goto label_2490f8;
        case 0x2490fcu: goto label_2490fc;
        case 0x249100u: goto label_249100;
        case 0x249104u: goto label_249104;
        default: break;
    }

    ctx->pc = 0x249038u;

label_249038:
    // 0x249038: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x249038u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_24903c:
    // 0x24903c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x24903cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_249040:
    // 0x249040: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x249040u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_249044:
    // 0x249044: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x249044u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_249048:
    // 0x249048: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x249048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_24904c:
    // 0x24904c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x24904cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_249050:
    // 0x249050: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x249050u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_249054:
    // 0x249054: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_249058:
    if (ctx->pc == 0x249058u) {
        ctx->pc = 0x249058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249054u;
        // 0x249058: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24905Cu;
        goto label_24905c;
    }
    ctx->pc = 0x249054u;
    {
        const bool branch_taken_0x249054 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x249058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249054u;
        // 0x249058: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249054) {
            ctx->pc = 0x249074u;
            goto label_249074;
        }
    }
    ctx->pc = 0x24905Cu;
label_24905c:
    // 0x24905c: 0x8f84851c  lw          $a0, -0x7AE4($gp)
    ctx->pc = 0x24905cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935836)));
label_249060:
    // 0x249060: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x249060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_249064:
    // 0x249064: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_249068:
    if (ctx->pc == 0x249068u) {
        ctx->pc = 0x249068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249064u;
        // 0x249068: 0x3c120073  lui         $s2, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24906Cu;
        goto label_24906c;
    }
    ctx->pc = 0x249064u;
    {
        const bool branch_taken_0x249064 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x249068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249064u;
        // 0x249068: 0x3c120073  lui         $s2, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249064) {
            ctx->pc = 0x249078u;
            goto label_249078;
        }
    }
    ctx->pc = 0x24906Cu;
label_24906c:
    // 0x24906c: 0xc0925a8  jal         func_2496A0
label_249070:
    if (ctx->pc == 0x249070u) {
        ctx->pc = 0x249074u;
        goto label_249074;
    }
    ctx->pc = 0x24906Cu;
    SET_GPR_U32(ctx, 31, 0x249074u);
    ctx->pc = 0x2496A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2496A0u, 0x24906Cu, 0x249074u)) {
        return;
    }
    ctx->pc = 0x249074u;
label_249074:
    // 0x249074: 0x3c120073  lui         $s2, 0x73
    ctx->pc = 0x249074u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)115 << 16));
label_249078:
    // 0x249078: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x249078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24907c:
    // 0x24907c: 0x26515600  addiu       $s1, $s2, 0x5600
    ctx->pc = 0x24907cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 22016));
label_249080:
    // 0x249080: 0xae505600  sw          $s0, 0x5600($s2)
    ctx->pc = 0x249080u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 22016), GPR_U32(ctx, 16));
label_249084:
    // 0x249084: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x249084u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_249088:
    // 0x249088: 0xc092402  jal         func_249008
label_24908c:
    if (ctx->pc == 0x24908Cu) {
        ctx->pc = 0x24908Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249088u;
        // 0x24908c: 0xae330010  sw          $s3, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249090u;
        goto label_249090;
    }
    ctx->pc = 0x249088u;
    SET_GPR_U32(ctx, 31, 0x249090u);
    ctx->pc = 0x24908Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249088u;
    // 0x24908c: 0xae330010  sw          $s3, 0x10($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249008u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249008u, 0x249088u, 0x249090u)) {
        return;
    }
    ctx->pc = 0x249090u;
label_249090:
    // 0x249090: 0xae220014  sw          $v0, 0x14($s1)
    ctx->pc = 0x249090u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
label_249094:
    // 0x249094: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x249094u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
label_249098:
    // 0x249098: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x249098u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_24909c:
    // 0x24909c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x24909cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2490a0:
    // 0x2490a0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2490a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_2490a4:
    // 0x2490a4: 0x40f809  jalr        $v0
label_2490a8:
    if (ctx->pc == 0x2490A8u) {
        ctx->pc = 0x2490A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2490A4u;
        // 0x2490a8: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2490ACu;
        goto label_2490ac;
    }
    ctx->pc = 0x2490A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2490ACu);
        ctx->pc = 0x2490A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2490A4u;
        // 0x2490a8: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2490A4u, 0x2490ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2490ACu;
label_2490ac:
    // 0x2490ac: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
label_2490b0:
    if (ctx->pc == 0x2490B0u) {
        ctx->pc = 0x2490B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2490ACu;
        // 0x2490b0: 0xae200008  sw          $zero, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2490B4u;
        goto label_2490b4;
    }
    ctx->pc = 0x2490ACu;
    {
        const bool branch_taken_0x2490ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2490ac) {
            ctx->pc = 0x2490B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2490ACu;
            // 0x2490b0: 0xae200008  sw          $zero, 0x8($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2490B8u;
            goto label_2490b8;
        }
    }
    ctx->pc = 0x2490B4u;
label_2490b4:
    // 0x2490b4: 0x0  nop
    ctx->pc = 0x2490b4u;
    // NOP
label_2490b8:
    // 0x2490b8: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x2490b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_2490bc:
    // 0x2490bc: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2490bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_2490c0:
    // 0x2490c0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_2490c4:
    if (ctx->pc == 0x2490C4u) {
        ctx->pc = 0x2490C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2490C0u;
        // 0x2490c4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2490C8u;
        goto label_2490c8;
    }
    ctx->pc = 0x2490C0u;
    {
        const bool branch_taken_0x2490c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2490C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2490C0u;
        // 0x2490c4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2490c0) {
            ctx->pc = 0x2490D4u;
            goto label_2490d4;
        }
    }
    ctx->pc = 0x2490C8u;
label_2490c8:
    // 0x2490c8: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x2490c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_2490cc:
    // 0x2490cc: 0xc093e68  jal         func_24F9A0
label_2490d0:
    if (ctx->pc == 0x2490D0u) {
        ctx->pc = 0x2490D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2490CCu;
        // 0x2490d0: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2490D4u;
        goto label_2490d4;
    }
    ctx->pc = 0x2490CCu;
    SET_GPR_U32(ctx, 31, 0x2490D4u);
    ctx->pc = 0x2490D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2490CCu;
    // 0x2490d0: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24F9A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24F9A0u, 0x2490CCu, 0x2490D4u)) {
        return;
    }
    ctx->pc = 0x2490D4u;
label_2490d4:
    // 0x2490d4: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x2490d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_2490d8:
    // 0x2490d8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2490d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2490dc:
    // 0x2490dc: 0xae405600  sw          $zero, 0x5600($s2)
    ctx->pc = 0x2490dcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 22016), GPR_U32(ctx, 0));
label_2490e0:
    // 0x2490e0: 0x203100b  movn        $v0, $s0, $v1
    ctx->pc = 0x2490e0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16));
label_2490e4:
    // 0x2490e4: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x2490e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
label_2490e8:
    // 0x2490e8: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x2490e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
label_2490ec:
    // 0x2490ec: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2490ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2490f0:
    // 0x2490f0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2490f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2490f4:
    // 0x2490f4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2490f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2490f8:
    // 0x2490f8: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x2490f8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2490fc:
    // 0x2490fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2490fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_249100:
    // 0x249100: 0x3e00008  jr          $ra
label_249104:
    if (ctx->pc == 0x249104u) {
        ctx->pc = 0x249104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249100u;
        // 0x249104: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249108u;
        goto label_fallthrough_0x249100;
    }
    ctx->pc = 0x249100u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x249104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249100u;
        // 0x249104: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x249100u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x249100:
    ctx->pc = 0x249108u;
}
