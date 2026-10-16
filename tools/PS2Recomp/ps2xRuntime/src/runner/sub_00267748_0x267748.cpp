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

// Function: sub_00267748
// Address: 0x267748 - 0x2677b0
void sub_00267748_0x267748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00267748_0x267748");
#endif

    switch (ctx->pc) {
        case 0x267748u: goto label_267748;
        case 0x26774cu: goto label_26774c;
        case 0x267750u: goto label_267750;
        case 0x267754u: goto label_267754;
        case 0x267758u: goto label_267758;
        case 0x26775cu: goto label_26775c;
        case 0x267760u: goto label_267760;
        case 0x267764u: goto label_267764;
        case 0x267768u: goto label_267768;
        case 0x26776cu: goto label_26776c;
        case 0x267770u: goto label_267770;
        case 0x267774u: goto label_267774;
        case 0x267778u: goto label_267778;
        case 0x26777cu: goto label_26777c;
        case 0x267780u: goto label_267780;
        case 0x267784u: goto label_267784;
        case 0x267788u: goto label_267788;
        case 0x26778cu: goto label_26778c;
        case 0x267790u: goto label_267790;
        case 0x267794u: goto label_267794;
        case 0x267798u: goto label_267798;
        case 0x26779cu: goto label_26779c;
        case 0x2677a0u: goto label_2677a0;
        case 0x2677a4u: goto label_2677a4;
        case 0x2677a8u: goto label_2677a8;
        case 0x2677acu: goto label_2677ac;
        default: break;
    }

    ctx->pc = 0x267748u;

label_267748:
    // 0x267748: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x267748u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_26774c:
    // 0x26774c: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x26774cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_267750:
    // 0x267750: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x267750u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_267754:
    // 0x267754: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x267754u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_267758:
    // 0x267758: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x267758u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_26775c:
    // 0x26775c: 0x24110009  addiu       $s1, $zero, 0x9
    ctx->pc = 0x26775cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_267760:
    // 0x267760: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x267760u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_267764:
    // 0x267764: 0xa5880b  movn        $s1, $a1, $a1
    ctx->pc = 0x267764u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5));
label_267768:
    // 0x267768: 0x8c6210d0  lw          $v0, 0x10D0($v1)
    ctx->pc = 0x267768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4304)));
label_26776c:
    // 0x26776c: 0x2240018  mult        $zero, $s1, $a0
    ctx->pc = 0x26776cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_267770:
    // 0x267770: 0x3c050104  lui         $a1, 0x104
    ctx->pc = 0x267770u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)260 << 16));
label_267774:
    // 0x267774: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x267774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_267778:
    // 0x267778: 0x2012  mflo        $a0
    ctx->pc = 0x267778u;
    SET_GPR_U64(ctx, 4, ctx->lo);
label_26777c:
    // 0x26777c: 0x40f809  jalr        $v0
label_267780:
    if (ctx->pc == 0x267780u) {
        ctx->pc = 0x267780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26777Cu;
        // 0x267780: 0x34a50131  ori         $a1, $a1, 0x131 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)305);
        ctx->in_delay_slot = false;
        ctx->pc = 0x267784u;
        goto label_267784;
    }
    ctx->pc = 0x26777Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x267784u);
        ctx->pc = 0x267780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26777Cu;
        // 0x267780: 0x34a50131  ori         $a1, $a1, 0x131 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)305);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26777Cu, 0x267784u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x267784u;
label_267784:
    // 0x267784: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x267784u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_267788:
    // 0x267788: 0xae110008  sw          $s1, 0x8($s0)
    ctx->pc = 0x267788u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 17));
label_26778c:
    // 0x26778c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x26778cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_267790:
    // 0x267790: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x267790u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_267794:
    // 0x267794: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x267794u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_267798:
    // 0x267798: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x267798u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_26779c:
    // 0x26779c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x26779cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2677a0:
    // 0x2677a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2677a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2677a4:
    // 0x2677a4: 0x3e00008  jr          $ra
label_2677a8:
    if (ctx->pc == 0x2677A8u) {
        ctx->pc = 0x2677A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2677A4u;
        // 0x2677a8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2677ACu;
        goto label_2677ac;
    }
    ctx->pc = 0x2677A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2677A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2677A4u;
        // 0x2677a8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2677A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2677ACu;
label_2677ac:
    // 0x2677ac: 0x0  nop
    ctx->pc = 0x2677acu;
    // NOP
    ctx->pc = 0x2677b0u;
}
