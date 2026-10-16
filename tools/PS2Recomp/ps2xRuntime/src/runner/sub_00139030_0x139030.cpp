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

// Function: sub_00139030
// Address: 0x139030 - 0x1390e8
void sub_00139030_0x139030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00139030_0x139030");
#endif

    switch (ctx->pc) {
        case 0x139030u: goto label_139030;
        case 0x139034u: goto label_139034;
        case 0x139038u: goto label_139038;
        case 0x13903cu: goto label_13903c;
        case 0x139040u: goto label_139040;
        case 0x139044u: goto label_139044;
        case 0x139048u: goto label_139048;
        case 0x13904cu: goto label_13904c;
        case 0x139050u: goto label_139050;
        case 0x139054u: goto label_139054;
        case 0x139058u: goto label_139058;
        case 0x13905cu: goto label_13905c;
        case 0x139060u: goto label_139060;
        case 0x139064u: goto label_139064;
        case 0x139068u: goto label_139068;
        case 0x13906cu: goto label_13906c;
        case 0x139070u: goto label_139070;
        case 0x139074u: goto label_139074;
        case 0x139078u: goto label_139078;
        case 0x13907cu: goto label_13907c;
        case 0x139080u: goto label_139080;
        case 0x139084u: goto label_139084;
        case 0x139088u: goto label_139088;
        case 0x13908cu: goto label_13908c;
        case 0x139090u: goto label_139090;
        case 0x139094u: goto label_139094;
        case 0x139098u: goto label_139098;
        case 0x13909cu: goto label_13909c;
        case 0x1390a0u: goto label_1390a0;
        case 0x1390a4u: goto label_1390a4;
        case 0x1390a8u: goto label_1390a8;
        case 0x1390acu: goto label_1390ac;
        case 0x1390b0u: goto label_1390b0;
        case 0x1390b4u: goto label_1390b4;
        case 0x1390b8u: goto label_1390b8;
        case 0x1390bcu: goto label_1390bc;
        case 0x1390c0u: goto label_1390c0;
        case 0x1390c4u: goto label_1390c4;
        case 0x1390c8u: goto label_1390c8;
        case 0x1390ccu: goto label_1390cc;
        case 0x1390d0u: goto label_1390d0;
        case 0x1390d4u: goto label_1390d4;
        case 0x1390d8u: goto label_1390d8;
        case 0x1390dcu: goto label_1390dc;
        case 0x1390e0u: goto label_1390e0;
        case 0x1390e4u: goto label_1390e4;
        default: break;
    }

    ctx->pc = 0x139030u;

label_139030:
    // 0x139030: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x139030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_139034:
    // 0x139034: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x139034u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_139038:
    // 0x139038: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x139038u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_13903c:
    // 0x13903c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x13903cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_139040:
    // 0x139040: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x139040u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_139044:
    // 0x139044: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x139044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_139048:
    // 0x139048: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x139048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_13904c:
    // 0x13904c: 0x844400a8  lh          $a0, 0xA8($v0)
    ctx->pc = 0x13904cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_139050:
    // 0x139050: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x139050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_139054:
    // 0x139054: 0x60f809  jalr        $v1
label_139058:
    if (ctx->pc == 0x139058u) {
        ctx->pc = 0x139058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139054u;
        // 0x139058: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13905Cu;
        goto label_13905c;
    }
    ctx->pc = 0x139054u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x13905Cu);
        ctx->pc = 0x139058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139054u;
        // 0x139058: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x139054u, 0x13905Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13905Cu;
label_13905c:
    // 0x13905c: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x13905cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_139060:
    // 0x139060: 0x3c090014  lui         $t1, 0x14
    ctx->pc = 0x139060u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)20 << 16));
label_139064:
    // 0x139064: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x139064u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_139068:
    // 0x139068: 0x25298fd8  addiu       $t1, $t1, -0x7028
    ctx->pc = 0x139068u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294938584));
label_13906c:
    // 0x13906c: 0x8e051a98  lw          $a1, 0x1A98($s0)
    ctx->pc = 0x13906cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6808)));
label_139070:
    // 0x139070: 0x3c030014  lui         $v1, 0x14
    ctx->pc = 0x139070u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20 << 16));
label_139074:
    // 0x139074: 0x8c518668  lw          $s1, -0x7998($v0)
    ctx->pc = 0x139074u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936168)));
label_139078:
    // 0x139078: 0x24638f70  addiu       $v1, $v1, -0x7090
    ctx->pc = 0x139078u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938480));
label_13907c:
    // 0x13907c: 0xafa90004  sw          $t1, 0x4($sp)
    ctx->pc = 0x13907cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 9));
label_139080:
    // 0x139080: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x139080u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_139084:
    // 0x139084: 0xafb0001c  sw          $s0, 0x1C($sp)
    ctx->pc = 0x139084u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 16));
label_139088:
    // 0x139088: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x139088u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_13908c:
    // 0x13908c: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x13908cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
label_139090:
    // 0x139090: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x139090u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_139094:
    // 0x139094: 0xc0596ae  jal         func_165AB8
label_139098:
    if (ctx->pc == 0x139098u) {
        ctx->pc = 0x139098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139094u;
        // 0x139098: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13909Cu;
        goto label_13909c;
    }
    ctx->pc = 0x139094u;
    SET_GPR_U32(ctx, 31, 0x13909Cu);
    ctx->pc = 0x139098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139094u;
    // 0x139098: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165AB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x165AB8u, 0x139094u, 0x13909Cu)) {
        return;
    }
    ctx->pc = 0x13909Cu;
label_13909c:
    // 0x13909c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x13909cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1390a0:
    // 0x1390a0: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x1390a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1390a4:
    // 0x1390a4: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_1390a8:
    if (ctx->pc == 0x1390A8u) {
        ctx->pc = 0x1390A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1390A4u;
        // 0x1390a8: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1390ACu;
        goto label_1390ac;
    }
    ctx->pc = 0x1390A4u;
    {
        const bool branch_taken_0x1390a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1390a4) {
            ctx->pc = 0x1390A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1390A4u;
            // 0x1390a8: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1390CCu;
            goto label_1390cc;
        }
    }
    ctx->pc = 0x1390ACu;
label_1390ac:
    // 0x1390ac: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1390acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1390b0:
    // 0x1390b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1390b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1390b4:
    // 0x1390b4: 0xc0595c6  jal         func_165718
label_1390b8:
    if (ctx->pc == 0x1390B8u) {
        ctx->pc = 0x1390B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1390B4u;
        // 0x1390b8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1390BCu;
        goto label_1390bc;
    }
    ctx->pc = 0x1390B4u;
    SET_GPR_U32(ctx, 31, 0x1390BCu);
    ctx->pc = 0x1390B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1390B4u;
    // 0x1390b8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165718u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x165718u, 0x1390B4u, 0x1390BCu)) {
        return;
    }
    ctx->pc = 0x1390BCu;
label_1390bc:
    // 0x1390bc: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1390bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1390c0:
    // 0x1390c0: 0xc0596be  jal         func_165AF8
label_1390c4:
    if (ctx->pc == 0x1390C4u) {
        ctx->pc = 0x1390C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1390C0u;
        // 0x1390c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1390C8u;
        goto label_1390c8;
    }
    ctx->pc = 0x1390C0u;
    SET_GPR_U32(ctx, 31, 0x1390C8u);
    ctx->pc = 0x1390C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1390C0u;
    // 0x1390c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165AF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x165AF8u, 0x1390C0u, 0x1390C8u)) {
        return;
    }
    ctx->pc = 0x1390C8u;
label_1390c8:
    // 0x1390c8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1390c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1390cc:
    // 0x1390cc: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1390ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1390d0:
    // 0x1390d0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1390d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1390d4:
    // 0x1390d4: 0x3e00008  jr          $ra
label_1390d8:
    if (ctx->pc == 0x1390D8u) {
        ctx->pc = 0x1390D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1390D4u;
        // 0x1390d8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1390DCu;
        goto label_1390dc;
    }
    ctx->pc = 0x1390D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1390D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1390D4u;
        // 0x1390d8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1390D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1390DCu;
label_1390dc:
    // 0x1390dc: 0x0  nop
    ctx->pc = 0x1390dcu;
    // NOP
label_1390e0:
    // 0x1390e0: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1390e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1390e4:
    // 0x1390e4: 0x0  nop
    ctx->pc = 0x1390e4u;
    // NOP
    ctx->pc = 0x1390e8u;
}
