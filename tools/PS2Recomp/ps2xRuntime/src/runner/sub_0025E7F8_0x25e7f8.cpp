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

// Function: sub_0025E7F8
// Address: 0x25e7f8 - 0x25e898
void sub_0025E7F8_0x25e7f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025E7F8_0x25e7f8");
#endif

    switch (ctx->pc) {
        case 0x25e85cu: goto label_25e85c;
        default: break;
    }

    ctx->pc = 0x25e7f8u;

    // 0x25e7f8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x25e7f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x25e7fc: 0x8f828604  lw          $v0, -0x79FC($gp)
    ctx->pc = 0x25e7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936068)));
    // 0x25e800: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x25e800u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x25e804: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x25e804u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x25e808: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x25e808u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e80c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25e80cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25e810: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x25e810u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e814: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x25e814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x25e818: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x25e818u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x25e81c: 0x82030001  lb          $v1, 0x1($s0)
    ctx->pc = 0x25e81cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x25e820: 0x4600009  bltz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x25E820u;
    {
        const bool branch_taken_0x25e820 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x25E824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E820u;
        // 0x25e824: 0x2622003c  addiu       $v0, $s1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e820) {
            ctx->pc = 0x25E848u;
            goto label_25e848;
        }
    }
    ctx->pc = 0x25E828u;
    // 0x25e828: 0x8e24003c  lw          $a0, 0x3C($s1)
    ctx->pc = 0x25e828u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x25e82c: 0xae020038  sw          $v0, 0x38($s0)
    ctx->pc = 0x25e82cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
    // 0x25e830: 0x26030034  addiu       $v1, $s0, 0x34
    ctx->pc = 0x25e830u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 52));
    // 0x25e834: 0xae040034  sw          $a0, 0x34($s0)
    ctx->pc = 0x25e834u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 4));
    // 0x25e838: 0x8e22003c  lw          $v0, 0x3C($s1)
    ctx->pc = 0x25e838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x25e83c: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x25e83cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x25e840: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x25E840u;
    {
        const bool branch_taken_0x25e840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E840u;
        // 0x25e844: 0xae23003c  sw          $v1, 0x3C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e840) {
            ctx->pc = 0x25E87Cu;
            goto label_25e87c;
        }
    }
    ctx->pc = 0x25E848u;
label_25e848:
    // 0x25e848: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x25e848u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x25e84c: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x25E84Cu;
    {
        const bool branch_taken_0x25e84c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x25e84c) {
            ctx->pc = 0x25E850u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25E84Cu;
            // 0x25e850: 0x8e240034  lw          $a0, 0x34($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25E860u;
            goto label_25e860;
        }
    }
    ctx->pc = 0x25E854u;
    // 0x25e854: 0xc08992e  jal         func_2264B8
    ctx->pc = 0x25E854u;
    SET_GPR_U32(ctx, 31, 0x25E85Cu);
    ctx->pc = 0x2264B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2264B8u, 0x25E854u, 0x25E85Cu)) {
        return;
    }
    ctx->pc = 0x25E85Cu;
label_25e85c:
    // 0x25e85c: 0x8e240034  lw          $a0, 0x34($s1)
    ctx->pc = 0x25e85cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_25e860:
    // 0x25e860: 0x26220034  addiu       $v0, $s1, 0x34
    ctx->pc = 0x25e860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 52));
    // 0x25e864: 0xae020038  sw          $v0, 0x38($s0)
    ctx->pc = 0x25e864u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
    // 0x25e868: 0x26030034  addiu       $v1, $s0, 0x34
    ctx->pc = 0x25e868u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 52));
    // 0x25e86c: 0xae040034  sw          $a0, 0x34($s0)
    ctx->pc = 0x25e86cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 4));
    // 0x25e870: 0x8e220034  lw          $v0, 0x34($s1)
    ctx->pc = 0x25e870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x25e874: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x25e874u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x25e878: 0xae230034  sw          $v1, 0x34($s1)
    ctx->pc = 0x25e878u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 3));
label_25e87c:
    // 0x25e87c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x25e87cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e880: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x25e880u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25e884: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x25e884u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25e888: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25e888u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25e88c: 0x3e00008  jr          $ra
    ctx->pc = 0x25E88Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25E890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E88Cu;
        // 0x25e890: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25E88Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25E894u;
    // 0x25e894: 0x0  nop
    ctx->pc = 0x25e894u;
    // NOP
    ctx->pc = 0x25e898u;
}
