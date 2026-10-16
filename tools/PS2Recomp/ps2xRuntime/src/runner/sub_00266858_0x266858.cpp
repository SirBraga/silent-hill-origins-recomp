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

// Function: sub_00266858
// Address: 0x266858 - 0x2668e0
void sub_00266858_0x266858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00266858_0x266858");
#endif

    switch (ctx->pc) {
        case 0x266858u: goto label_266858;
        case 0x26685cu: goto label_26685c;
        case 0x266860u: goto label_266860;
        case 0x266864u: goto label_266864;
        case 0x266868u: goto label_266868;
        case 0x26686cu: goto label_26686c;
        case 0x266870u: goto label_266870;
        case 0x266874u: goto label_266874;
        case 0x266878u: goto label_266878;
        case 0x26687cu: goto label_26687c;
        case 0x266880u: goto label_266880;
        case 0x266884u: goto label_266884;
        case 0x266888u: goto label_266888;
        case 0x26688cu: goto label_26688c;
        case 0x266890u: goto label_266890;
        case 0x266894u: goto label_266894;
        case 0x266898u: goto label_266898;
        case 0x26689cu: goto label_26689c;
        case 0x2668a0u: goto label_2668a0;
        case 0x2668a4u: goto label_2668a4;
        case 0x2668a8u: goto label_2668a8;
        case 0x2668acu: goto label_2668ac;
        case 0x2668b0u: goto label_2668b0;
        case 0x2668b4u: goto label_2668b4;
        case 0x2668b8u: goto label_2668b8;
        case 0x2668bcu: goto label_2668bc;
        case 0x2668c0u: goto label_2668c0;
        case 0x2668c4u: goto label_2668c4;
        case 0x2668c8u: goto label_2668c8;
        case 0x2668ccu: goto label_2668cc;
        case 0x2668d0u: goto label_2668d0;
        case 0x2668d4u: goto label_2668d4;
        case 0x2668d8u: goto label_2668d8;
        case 0x2668dcu: goto label_2668dc;
        default: break;
    }

    ctx->pc = 0x266858u;

label_266858:
    // 0x266858: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x266858u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_26685c:
    // 0x26685c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x26685cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_266860:
    // 0x266860: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x266860u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_266864:
    // 0x266864: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x266864u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_266868:
    // 0x266868: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x266868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_26686c:
    // 0x26686c: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x26686cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
label_266870:
    // 0x266870: 0x8c843888  lw          $a0, 0x3888($a0)
    ctx->pc = 0x266870u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 14472)));
label_266874:
    // 0x266874: 0x8e23002c  lw          $v1, 0x2C($s1)
    ctx->pc = 0x266874u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_266878:
    // 0x266878: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x266878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_26687c:
    // 0x26687c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x26687cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_266880:
    // 0x266880: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x266880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_266884:
    // 0x266884: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_266888:
    if (ctx->pc == 0x266888u) {
        ctx->pc = 0x266888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266884u;
        // 0x266888: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26688Cu;
        goto label_26688c;
    }
    ctx->pc = 0x266884u;
    {
        const bool branch_taken_0x266884 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x266888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266884u;
        // 0x266888: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266884) {
            ctx->pc = 0x266890u;
            goto label_266890;
        }
    }
    ctx->pc = 0x26688Cu;
label_26688c:
    // 0x26688c: 0x8c460080  lw          $a2, 0x80($v0)
    ctx->pc = 0x26688cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
label_266890:
    // 0x266890: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x266890u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_266894:
    // 0x266894: 0x61100  sll         $v0, $a2, 4
    ctx->pc = 0x266894u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_266898:
    // 0x266898: 0x3c03005f  lui         $v1, 0x5F
    ctx->pc = 0x266898u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)95 << 16));
label_26689c:
    // 0x26689c: 0x62080  sll         $a0, $a2, 2
    ctx->pc = 0x26689cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_2668a0:
    // 0x2668a0: 0x8cb00018  lw          $s0, 0x18($a1)
    ctx->pc = 0x2668a0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
label_2668a4:
    // 0x2668a4: 0x246356b0  addiu       $v1, $v1, 0x56B0
    ctx->pc = 0x2668a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22192));
label_2668a8:
    // 0x2668a8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2668a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2668ac:
    // 0x2668ac: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2668acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_2668b0:
    // 0x2668b0: 0xaca20018  sw          $v0, 0x18($a1)
    ctx->pc = 0x2668b0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 2));
label_2668b4:
    // 0x2668b4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2668b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_2668b8:
    // 0x2668b8: 0x40f809  jalr        $v0
label_2668bc:
    if (ctx->pc == 0x2668BCu) {
        ctx->pc = 0x2668BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2668B8u;
        // 0x2668bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2668C0u;
        goto label_2668c0;
    }
    ctx->pc = 0x2668B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2668C0u);
        ctx->pc = 0x2668BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2668B8u;
        // 0x2668bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2668B8u, 0x2668C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2668C0u;
label_2668c0:
    // 0x2668c0: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x2668c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2668c4:
    // 0x2668c4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2668c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2668c8:
    // 0x2668c8: 0xac700018  sw          $s0, 0x18($v1)
    ctx->pc = 0x2668c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 16));
label_2668cc:
    // 0x2668cc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2668ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2668d0:
    // 0x2668d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2668d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2668d4:
    // 0x2668d4: 0x3e00008  jr          $ra
label_2668d8:
    if (ctx->pc == 0x2668D8u) {
        ctx->pc = 0x2668D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2668D4u;
        // 0x2668d8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2668DCu;
        goto label_2668dc;
    }
    ctx->pc = 0x2668D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2668D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2668D4u;
        // 0x2668d8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2668D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2668DCu;
label_2668dc:
    // 0x2668dc: 0x0  nop
    ctx->pc = 0x2668dcu;
    // NOP
    ctx->pc = 0x2668e0u;
}
