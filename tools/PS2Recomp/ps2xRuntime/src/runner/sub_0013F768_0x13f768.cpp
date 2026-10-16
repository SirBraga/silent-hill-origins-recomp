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

// Function: sub_0013F768
// Address: 0x13f768 - 0x13f7c0
void sub_0013F768_0x13f768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013F768_0x13f768");
#endif

    switch (ctx->pc) {
        case 0x13f77cu: goto label_13f77c;
        default: break;
    }

    ctx->pc = 0x13f768u;

    // 0x13f768: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13f768u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13f76c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x13f76cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x13f770: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13f770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13f774: 0xc04edaa  jal         func_13B6A8
    ctx->pc = 0x13F774u;
    SET_GPR_U32(ctx, 31, 0x13F77Cu);
    ctx->pc = 0x13F778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F774u;
    // 0x13f778: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13B6A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13B6A8u, 0x13F774u, 0x13F77Cu)) {
        return;
    }
    ctx->pc = 0x13F77Cu;
label_13f77c:
    // 0x13f77c: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x13f77cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x13f780: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x13f780u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x13f784: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x13f784u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x13f788: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x13f788u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
    // 0x13f78c: 0x24630698  addiu       $v1, $v1, 0x698
    ctx->pc = 0x13f78cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1688));
    // 0x13f790: 0x24840578  addiu       $a0, $a0, 0x578
    ctx->pc = 0x13f790u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1400));
    // 0x13f794: 0x24a506b8  addiu       $a1, $a1, 0x6B8
    ctx->pc = 0x13f794u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1720));
    // 0x13f798: 0x24c606f8  addiu       $a2, $a2, 0x6F8
    ctx->pc = 0x13f798u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1784));
    // 0x13f79c: 0xae03003c  sw          $v1, 0x3C($s0)
    ctx->pc = 0x13f79cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 3));
    // 0x13f7a0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x13f7a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f7a4: 0xae040048  sw          $a0, 0x48($s0)
    ctx->pc = 0x13f7a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 4));
    // 0x13f7a8: 0xae050084  sw          $a1, 0x84($s0)
    ctx->pc = 0x13f7a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 5));
    // 0x13f7ac: 0xae060034  sw          $a2, 0x34($s0)
    ctx->pc = 0x13f7acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 6));
    // 0x13f7b0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x13f7b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13f7b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13f7b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13f7b8: 0x3e00008  jr          $ra
    ctx->pc = 0x13F7B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13F7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F7B8u;
        // 0x13f7bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13F7B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13F7C0u;
}
