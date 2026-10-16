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

// Function: sub_0028B6D8
// Address: 0x28b6d8 - 0x28b770
void sub_0028B6D8_0x28b6d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028B6D8_0x28b6d8");
#endif

    switch (ctx->pc) {
        case 0x28b6d8u: goto label_28b6d8;
        case 0x28b6dcu: goto label_28b6dc;
        case 0x28b6e0u: goto label_28b6e0;
        case 0x28b6e4u: goto label_28b6e4;
        case 0x28b6e8u: goto label_28b6e8;
        case 0x28b6ecu: goto label_28b6ec;
        case 0x28b6f0u: goto label_28b6f0;
        case 0x28b6f4u: goto label_28b6f4;
        case 0x28b6f8u: goto label_28b6f8;
        case 0x28b6fcu: goto label_28b6fc;
        case 0x28b700u: goto label_28b700;
        case 0x28b704u: goto label_28b704;
        case 0x28b708u: goto label_28b708;
        case 0x28b70cu: goto label_28b70c;
        case 0x28b710u: goto label_28b710;
        case 0x28b714u: goto label_28b714;
        case 0x28b718u: goto label_28b718;
        case 0x28b71cu: goto label_28b71c;
        case 0x28b720u: goto label_28b720;
        case 0x28b724u: goto label_28b724;
        case 0x28b728u: goto label_28b728;
        case 0x28b72cu: goto label_28b72c;
        case 0x28b730u: goto label_28b730;
        case 0x28b734u: goto label_28b734;
        case 0x28b738u: goto label_28b738;
        case 0x28b73cu: goto label_28b73c;
        case 0x28b740u: goto label_28b740;
        case 0x28b744u: goto label_28b744;
        case 0x28b748u: goto label_28b748;
        case 0x28b74cu: goto label_28b74c;
        case 0x28b750u: goto label_28b750;
        case 0x28b754u: goto label_28b754;
        case 0x28b758u: goto label_28b758;
        case 0x28b75cu: goto label_28b75c;
        case 0x28b760u: goto label_28b760;
        case 0x28b764u: goto label_28b764;
        case 0x28b768u: goto label_28b768;
        case 0x28b76cu: goto label_28b76c;
        default: break;
    }

    ctx->pc = 0x28b6d8u;

label_28b6d8:
    // 0x28b6d8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x28b6d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_28b6dc:
    // 0x28b6dc: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x28b6dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_28b6e0:
    // 0x28b6e0: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x28b6e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_28b6e4:
    // 0x28b6e4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x28b6e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_28b6e8:
    // 0x28b6e8: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x28b6e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_28b6ec:
    // 0x28b6ec: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x28b6ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_28b6f0:
    // 0x28b6f0: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x28b6f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_28b6f4:
    // 0x28b6f4: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x28b6f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_28b6f8:
    // 0x28b6f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28b6f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_28b6fc:
    // 0x28b6fc: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x28b6fcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_28b700:
    // 0x28b700: 0xc09292a  jal         func_24A4A8
label_28b704:
    if (ctx->pc == 0x28B704u) {
        ctx->pc = 0x28B704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B700u;
        // 0x28b704: 0x8e4400b0  lw          $a0, 0xB0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B708u;
        goto label_28b708;
    }
    ctx->pc = 0x28B700u;
    SET_GPR_U32(ctx, 31, 0x28B708u);
    ctx->pc = 0x28B704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B700u;
    // 0x28b704: 0x8e4400b0  lw          $a0, 0xB0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A4A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A4A8u, 0x28B700u, 0x28B708u)) {
        return;
    }
    ctx->pc = 0x28B708u;
label_28b708:
    // 0x28b708: 0x8e4400b4  lw          $a0, 0xB4($s2)
    ctx->pc = 0x28b708u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 180)));
label_28b70c:
    // 0x28b70c: 0x24030110  addiu       $v1, $zero, 0x110
    ctx->pc = 0x28b70cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
label_28b710:
    // 0x28b710: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x28b710u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28b714:
    // 0x28b714: 0x832818  mult        $a1, $a0, $v1
    ctx->pc = 0x28b714u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_28b718:
    // 0x28b718: 0xa28821  addu        $s1, $a1, $v0
    ctx->pc = 0x28b718u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_28b71c:
    // 0x28b71c: 0x12110009  beq         $s0, $s1, . + 4 + (0x9 << 2)
label_28b720:
    if (ctx->pc == 0x28B720u) {
        ctx->pc = 0x28B720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B71Cu;
        // 0x28b720: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B724u;
        goto label_28b724;
    }
    ctx->pc = 0x28B71Cu;
    {
        const bool branch_taken_0x28b71c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 17));
        ctx->pc = 0x28B720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B71Cu;
        // 0x28b720: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b71c) {
            ctx->pc = 0x28B744u;
            goto label_28b744;
        }
    }
    ctx->pc = 0x28B724u;
label_28b724:
    // 0x28b724: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28b724u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28b728:
    // 0x28b728: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x28b728u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_28b72c:
    // 0x28b72c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x28b72cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_28b730:
    // 0x28b730: 0x280f809  jalr        $s4
label_28b734:
    if (ctx->pc == 0x28B734u) {
        ctx->pc = 0x28B734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B730u;
        // 0x28b734: 0x26100110  addiu       $s0, $s0, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B738u;
        goto label_28b738;
    }
    ctx->pc = 0x28B730u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 20);
        SET_GPR_U32(ctx, 31, 0x28B738u);
        ctx->pc = 0x28B734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B730u;
        // 0x28b734: 0x26100110  addiu       $s0, $s0, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28B730u, 0x28B738u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28B738u;
label_28b738:
    // 0x28b738: 0x1611fffb  bne         $s0, $s1, . + 4 + (-0x5 << 2)
label_28b73c:
    if (ctx->pc == 0x28B73Cu) {
        ctx->pc = 0x28B73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B738u;
        // 0x28b73c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B740u;
        goto label_28b740;
    }
    ctx->pc = 0x28B738u;
    {
        const bool branch_taken_0x28b738 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 17));
        ctx->pc = 0x28B73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B738u;
        // 0x28b73c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b738) {
            ctx->pc = 0x28B728u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28b728;
        }
    }
    ctx->pc = 0x28B740u;
label_28b740:
    // 0x28b740: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x28b740u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_28b744:
    // 0x28b744: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x28b744u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_28b748:
    // 0x28b748: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x28b748u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_28b74c:
    // 0x28b74c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x28b74cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_28b750:
    // 0x28b750: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x28b750u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_28b754:
    // 0x28b754: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x28b754u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_28b758:
    // 0x28b758: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28b758u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_28b75c:
    // 0x28b75c: 0x3e00008  jr          $ra
label_28b760:
    if (ctx->pc == 0x28B760u) {
        ctx->pc = 0x28B760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B75Cu;
        // 0x28b760: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B764u;
        goto label_28b764;
    }
    ctx->pc = 0x28B75Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28B760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B75Cu;
        // 0x28b760: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28B75Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28B764u;
label_28b764:
    // 0x28b764: 0x0  nop
    ctx->pc = 0x28b764u;
    // NOP
label_28b768:
    // 0x28b768: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x28b768u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_28b76c:
    // 0x28b76c: 0x0  nop
    ctx->pc = 0x28b76cu;
    // NOP
    ctx->pc = 0x28b770u;
}
