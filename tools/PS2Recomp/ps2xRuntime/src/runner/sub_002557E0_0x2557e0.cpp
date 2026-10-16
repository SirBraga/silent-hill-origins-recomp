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

// Function: sub_002557E0
// Address: 0x2557e0 - 0x255888
void sub_002557E0_0x2557e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002557E0_0x2557e0");
#endif

    switch (ctx->pc) {
        case 0x2557e0u: goto label_2557e0;
        case 0x2557e4u: goto label_2557e4;
        case 0x2557e8u: goto label_2557e8;
        case 0x2557ecu: goto label_2557ec;
        case 0x2557f0u: goto label_2557f0;
        case 0x2557f4u: goto label_2557f4;
        case 0x2557f8u: goto label_2557f8;
        case 0x2557fcu: goto label_2557fc;
        case 0x255800u: goto label_255800;
        case 0x255804u: goto label_255804;
        case 0x255808u: goto label_255808;
        case 0x25580cu: goto label_25580c;
        case 0x255810u: goto label_255810;
        case 0x255814u: goto label_255814;
        case 0x255818u: goto label_255818;
        case 0x25581cu: goto label_25581c;
        case 0x255820u: goto label_255820;
        case 0x255824u: goto label_255824;
        case 0x255828u: goto label_255828;
        case 0x25582cu: goto label_25582c;
        case 0x255830u: goto label_255830;
        case 0x255834u: goto label_255834;
        case 0x255838u: goto label_255838;
        case 0x25583cu: goto label_25583c;
        case 0x255840u: goto label_255840;
        case 0x255844u: goto label_255844;
        case 0x255848u: goto label_255848;
        case 0x25584cu: goto label_25584c;
        case 0x255850u: goto label_255850;
        case 0x255854u: goto label_255854;
        case 0x255858u: goto label_255858;
        case 0x25585cu: goto label_25585c;
        case 0x255860u: goto label_255860;
        case 0x255864u: goto label_255864;
        case 0x255868u: goto label_255868;
        case 0x25586cu: goto label_25586c;
        case 0x255870u: goto label_255870;
        case 0x255874u: goto label_255874;
        case 0x255878u: goto label_255878;
        case 0x25587cu: goto label_25587c;
        case 0x255880u: goto label_255880;
        case 0x255884u: goto label_255884;
        default: break;
    }

    ctx->pc = 0x2557e0u;

label_2557e0:
    // 0x2557e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2557e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2557e4:
    // 0x2557e4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2557e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_2557e8:
    // 0x2557e8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2557e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2557ec:
    // 0x2557ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2557ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2557f0:
    // 0x2557f0: 0x3c04005c  lui         $a0, 0x5C
    ctx->pc = 0x2557f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)92 << 16));
label_2557f4:
    // 0x2557f4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2557f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2557f8:
    // 0x2557f8: 0xc09397e  jal         func_24E5F8
label_2557fc:
    if (ctx->pc == 0x2557FCu) {
        ctx->pc = 0x2557FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2557F8u;
        // 0x2557fc: 0x248411f8  addiu       $a0, $a0, 0x11F8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4600));
        ctx->in_delay_slot = false;
        ctx->pc = 0x255800u;
        goto label_255800;
    }
    ctx->pc = 0x2557F8u;
    SET_GPR_U32(ctx, 31, 0x255800u);
    ctx->pc = 0x2557FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2557F8u;
    // 0x2557fc: 0x248411f8  addiu       $a0, $a0, 0x11F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4600));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24E5F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24E5F8u, 0x2557F8u, 0x255800u)) {
        return;
    }
    ctx->pc = 0x255800u;
label_255800:
    // 0x255800: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x255800u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
label_255804:
    // 0x255804: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x255804u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_255808:
    // 0x255808: 0x24a548e8  addiu       $a1, $a1, 0x48E8
    ctx->pc = 0x255808u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18664));
label_25580c:
    // 0x25580c: 0xc09545a  jal         func_255168
label_255810:
    if (ctx->pc == 0x255810u) {
        ctx->pc = 0x255810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25580Cu;
        // 0x255810: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x255814u;
        goto label_255814;
    }
    ctx->pc = 0x25580Cu;
    SET_GPR_U32(ctx, 31, 0x255814u);
    ctx->pc = 0x255810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25580Cu;
    // 0x255810: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255168u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x255168u, 0x25580Cu, 0x255814u)) {
        return;
    }
    ctx->pc = 0x255814u;
label_255814:
    // 0x255814: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x255814u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
label_255818:
    // 0x255818: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x255818u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25581c:
    // 0x25581c: 0x24a54850  addiu       $a1, $a1, 0x4850
    ctx->pc = 0x25581cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18512));
label_255820:
    // 0x255820: 0xc095498  jal         func_255260
label_255824:
    if (ctx->pc == 0x255824u) {
        ctx->pc = 0x255824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255820u;
        // 0x255824: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x255828u;
        goto label_255828;
    }
    ctx->pc = 0x255820u;
    SET_GPR_U32(ctx, 31, 0x255828u);
    ctx->pc = 0x255824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255820u;
    // 0x255824: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x255260u, 0x255820u, 0x255828u)) {
        return;
    }
    ctx->pc = 0x255828u;
label_255828:
    // 0x255828: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x255828u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
label_25582c:
    // 0x25582c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25582cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_255830:
    // 0x255830: 0x24a54890  addiu       $a1, $a1, 0x4890
    ctx->pc = 0x255830u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18576));
label_255834:
    // 0x255834: 0xc095478  jal         func_2551E0
label_255838:
    if (ctx->pc == 0x255838u) {
        ctx->pc = 0x255838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255834u;
        // 0x255838: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25583Cu;
        goto label_25583c;
    }
    ctx->pc = 0x255834u;
    SET_GPR_U32(ctx, 31, 0x25583Cu);
    ctx->pc = 0x255838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255834u;
    // 0x255838: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2551E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2551E0u, 0x255834u, 0x25583Cu)) {
        return;
    }
    ctx->pc = 0x25583Cu;
label_25583c:
    // 0x25583c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x25583cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_255840:
    // 0x255840: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_255844:
    if (ctx->pc == 0x255844u) {
        ctx->pc = 0x255844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255840u;
        // 0x255844: 0x8f838f38  lw          $v1, -0x70C8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938424)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x255848u;
        goto label_255848;
    }
    ctx->pc = 0x255840u;
    {
        const bool branch_taken_0x255840 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x255844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255840u;
        // 0x255844: 0x8f838f38  lw          $v1, -0x70C8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938424)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255840) {
            ctx->pc = 0x255858u;
            goto label_255858;
        }
    }
    ctx->pc = 0x255848u;
label_255848:
    // 0x255848: 0xc089926  jal         func_226498
label_25584c:
    if (ctx->pc == 0x25584Cu) {
        ctx->pc = 0x255850u;
        goto label_255850;
    }
    ctx->pc = 0x255848u;
    SET_GPR_U32(ctx, 31, 0x255850u);
    ctx->pc = 0x226498u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226498u, 0x255848u, 0x255850u)) {
        return;
    }
    ctx->pc = 0x255850u;
label_255850:
    // 0x255850: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x255850u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_255854:
    // 0x255854: 0x8c633fa8  lw          $v1, 0x3FA8($v1)
    ctx->pc = 0x255854u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16296)));
label_255858:
    // 0x255858: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x255858u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
label_25585c:
    // 0x25585c: 0x24840fc8  addiu       $a0, $a0, 0xFC8
    ctx->pc = 0x25585cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4040));
label_255860:
    // 0x255860: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x255860u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_255864:
    // 0x255864: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x255864u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_255868:
    // 0x255868: 0x8c82011c  lw          $v0, 0x11C($a0)
    ctx->pc = 0x255868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 284)));
label_25586c:
    // 0x25586c: 0x40f809  jalr        $v0
label_255870:
    if (ctx->pc == 0x255870u) {
        ctx->pc = 0x255870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25586Cu;
        // 0x255870: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x255874u;
        goto label_255874;
    }
    ctx->pc = 0x25586Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x255874u);
        ctx->pc = 0x255870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25586Cu;
        // 0x255870: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25586Cu, 0x255874u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x255874u;
label_255874:
    // 0x255874: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x255874u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_255878:
    // 0x255878: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x255878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_25587c:
    // 0x25587c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25587cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_255880:
    // 0x255880: 0x3e00008  jr          $ra
label_255884:
    if (ctx->pc == 0x255884u) {
        ctx->pc = 0x255884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255880u;
        // 0x255884: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x255888u;
        goto label_fallthrough_0x255880;
    }
    ctx->pc = 0x255880u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x255884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255880u;
        // 0x255884: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x255880u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x255880:
    ctx->pc = 0x255888u;
}
