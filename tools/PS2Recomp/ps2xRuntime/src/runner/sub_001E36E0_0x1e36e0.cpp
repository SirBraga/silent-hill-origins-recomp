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

// Function: sub_001E36E0
// Address: 0x1e36e0 - 0x1e3748
void sub_001E36E0_0x1e36e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E36E0_0x1e36e0");
#endif

    switch (ctx->pc) {
        case 0x1e36e0u: goto label_1e36e0;
        case 0x1e36e4u: goto label_1e36e4;
        case 0x1e36e8u: goto label_1e36e8;
        case 0x1e36ecu: goto label_1e36ec;
        case 0x1e36f0u: goto label_1e36f0;
        case 0x1e36f4u: goto label_1e36f4;
        case 0x1e36f8u: goto label_1e36f8;
        case 0x1e36fcu: goto label_1e36fc;
        case 0x1e3700u: goto label_1e3700;
        case 0x1e3704u: goto label_1e3704;
        case 0x1e3708u: goto label_1e3708;
        case 0x1e370cu: goto label_1e370c;
        case 0x1e3710u: goto label_1e3710;
        case 0x1e3714u: goto label_1e3714;
        case 0x1e3718u: goto label_1e3718;
        case 0x1e371cu: goto label_1e371c;
        case 0x1e3720u: goto label_1e3720;
        case 0x1e3724u: goto label_1e3724;
        case 0x1e3728u: goto label_1e3728;
        case 0x1e372cu: goto label_1e372c;
        case 0x1e3730u: goto label_1e3730;
        case 0x1e3734u: goto label_1e3734;
        case 0x1e3738u: goto label_1e3738;
        case 0x1e373cu: goto label_1e373c;
        case 0x1e3740u: goto label_1e3740;
        case 0x1e3744u: goto label_1e3744;
        default: break;
    }

    ctx->pc = 0x1e36e0u;

label_1e36e0:
    // 0x1e36e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1e36e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1e36e4:
    // 0x1e36e4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1e36e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_1e36e8:
    // 0x1e36e8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1e36e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1e36ec:
    // 0x1e36ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e36ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e36f0:
    // 0x1e36f0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1e36f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_1e36f4:
    // 0x1e36f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e36f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1e36f8:
    // 0x1e36f8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1e36f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1e36fc:
    // 0x1e36fc: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1e36fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1e3700:
    // 0x1e3700: 0xc09d7cc  jal         func_275F30
label_1e3704:
    if (ctx->pc == 0x1E3704u) {
        ctx->pc = 0x1E3704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3700u;
        // 0x1e3704: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3708u;
        goto label_1e3708;
    }
    ctx->pc = 0x1E3700u;
    SET_GPR_U32(ctx, 31, 0x1E3708u);
    ctx->pc = 0x1E3704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3700u;
    // 0x1e3704: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275F30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x275F30u, 0x1E3700u, 0x1E3708u)) {
        return;
    }
    ctx->pc = 0x1E3708u;
label_1e3708:
    // 0x1e3708: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x1e3708u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1e370c:
    // 0x1e370c: 0x24060034  addiu       $a2, $zero, 0x34
    ctx->pc = 0x1e370cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
label_1e3710:
    // 0x1e3710: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1e3710u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e3714:
    // 0x1e3714: 0xc0935aa  jal         func_24D6A8
label_1e3718:
    if (ctx->pc == 0x1E3718u) {
        ctx->pc = 0x1E3718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3714u;
        // 0x1e3718: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E371Cu;
        goto label_1e371c;
    }
    ctx->pc = 0x1E3714u;
    SET_GPR_U32(ctx, 31, 0x1E371Cu);
    ctx->pc = 0x1E3718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3714u;
    // 0x1e3718: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D6A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D6A8u, 0x1E3714u, 0x1E371Cu)) {
        return;
    }
    ctx->pc = 0x1E371Cu;
label_1e371c:
    // 0x1e371c: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x1e371cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_1e3720:
    // 0x1e3720: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e3720u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e3724:
    // 0x1e3724: 0x40f809  jalr        $v0
label_1e3728:
    if (ctx->pc == 0x1E3728u) {
        ctx->pc = 0x1E3728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3724u;
        // 0x1e3728: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E372Cu;
        goto label_1e372c;
    }
    ctx->pc = 0x1E3724u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E372Cu);
        ctx->pc = 0x1E3728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3724u;
        // 0x1e3728: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E3724u, 0x1E372Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E372Cu;
label_1e372c:
    // 0x1e372c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1e372cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1e3730:
    // 0x1e3730: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1e3730u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1e3734:
    // 0x1e3734: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1e3734u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e3738:
    // 0x1e3738: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e3738u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e373c:
    // 0x1e373c: 0x3e00008  jr          $ra
label_1e3740:
    if (ctx->pc == 0x1E3740u) {
        ctx->pc = 0x1E3740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E373Cu;
        // 0x1e3740: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3744u;
        goto label_1e3744;
    }
    ctx->pc = 0x1E373Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E3740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E373Cu;
        // 0x1e3740: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E373Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E3744u;
label_1e3744:
    // 0x1e3744: 0x0  nop
    ctx->pc = 0x1e3744u;
    // NOP
    ctx->pc = 0x1e3748u;
}
