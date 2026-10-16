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

// Function: sub_002AD628
// Address: 0x2ad628 - 0x2ad690
void sub_002AD628_0x2ad628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AD628_0x2ad628");
#endif

    switch (ctx->pc) {
        case 0x2ad628u: goto label_2ad628;
        case 0x2ad62cu: goto label_2ad62c;
        case 0x2ad630u: goto label_2ad630;
        case 0x2ad634u: goto label_2ad634;
        case 0x2ad638u: goto label_2ad638;
        case 0x2ad63cu: goto label_2ad63c;
        case 0x2ad640u: goto label_2ad640;
        case 0x2ad644u: goto label_2ad644;
        case 0x2ad648u: goto label_2ad648;
        case 0x2ad64cu: goto label_2ad64c;
        case 0x2ad650u: goto label_2ad650;
        case 0x2ad654u: goto label_2ad654;
        case 0x2ad658u: goto label_2ad658;
        case 0x2ad65cu: goto label_2ad65c;
        case 0x2ad660u: goto label_2ad660;
        case 0x2ad664u: goto label_2ad664;
        case 0x2ad668u: goto label_2ad668;
        case 0x2ad66cu: goto label_2ad66c;
        case 0x2ad670u: goto label_2ad670;
        case 0x2ad674u: goto label_2ad674;
        case 0x2ad678u: goto label_2ad678;
        case 0x2ad67cu: goto label_2ad67c;
        case 0x2ad680u: goto label_2ad680;
        case 0x2ad684u: goto label_2ad684;
        case 0x2ad688u: goto label_2ad688;
        case 0x2ad68cu: goto label_2ad68c;
        default: break;
    }

    ctx->pc = 0x2ad628u;

label_2ad628:
    // 0x2ad628: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2ad628u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2ad62c:
    // 0x2ad62c: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x2ad62cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_2ad630:
    // 0x2ad630: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2ad630u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2ad634:
    // 0x2ad634: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2ad634u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_2ad638:
    // 0x2ad638: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2ad638u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2ad63c:
    // 0x2ad63c: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x2ad63cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_2ad640:
    // 0x2ad640: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ad640u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2ad644:
    // 0x2ad644: 0x8c6210d0  lw          $v0, 0x10D0($v1)
    ctx->pc = 0x2ad644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4304)));
label_2ad648:
    // 0x2ad648: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x2ad648u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_2ad64c:
    // 0x2ad64c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ad64cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2ad650:
    // 0x2ad650: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x2ad650u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_2ad654:
    // 0x2ad654: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x2ad654u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_2ad658:
    // 0x2ad658: 0x40f809  jalr        $v0
label_2ad65c:
    if (ctx->pc == 0x2AD65Cu) {
        ctx->pc = 0x2AD65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD658u;
        // 0x2ad65c: 0x34a50900  ori         $a1, $a1, 0x900 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2304);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AD660u;
        goto label_2ad660;
    }
    ctx->pc = 0x2AD658u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2AD660u);
        ctx->pc = 0x2AD65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD658u;
        // 0x2ad65c: 0x34a50900  ori         $a1, $a1, 0x900 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2304);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AD658u, 0x2AD660u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2AD660u;
label_2ad660:
    // 0x2ad660: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2ad660u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ad664:
    // 0x2ad664: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2ad664u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_2ad668:
    // 0x2ad668: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2ad668u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2ad66c:
    // 0x2ad66c: 0xc0ab5a4  jal         func_2AD690
label_2ad670:
    if (ctx->pc == 0x2AD670u) {
        ctx->pc = 0x2AD670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD66Cu;
        // 0x2ad670: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AD674u;
        goto label_2ad674;
    }
    ctx->pc = 0x2AD66Cu;
    SET_GPR_U32(ctx, 31, 0x2AD674u);
    ctx->pc = 0x2AD670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AD66Cu;
    // 0x2ad670: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AD690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2AD690u, 0x2AD66Cu, 0x2AD674u)) {
        return;
    }
    ctx->pc = 0x2AD674u;
label_2ad674:
    // 0x2ad674: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2ad674u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2ad678:
    // 0x2ad678: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ad678u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2ad67c:
    // 0x2ad67c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ad67cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2ad680:
    // 0x2ad680: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x2ad680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2ad684:
    // 0x2ad684: 0x3e00008  jr          $ra
label_2ad688:
    if (ctx->pc == 0x2AD688u) {
        ctx->pc = 0x2AD688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD684u;
        // 0x2ad688: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AD68Cu;
        goto label_2ad68c;
    }
    ctx->pc = 0x2AD684u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AD688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD684u;
        // 0x2ad688: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AD684u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AD68Cu;
label_2ad68c:
    // 0x2ad68c: 0x0  nop
    ctx->pc = 0x2ad68cu;
    // NOP
    ctx->pc = 0x2ad690u;
}
