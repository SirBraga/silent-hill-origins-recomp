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

// Function: sub_001995E8
// Address: 0x1995e8 - 0x199668
void sub_001995E8_0x1995e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001995E8_0x1995e8");
#endif

    switch (ctx->pc) {
        case 0x199610u: goto label_199610;
        case 0x199634u: goto label_199634;
        default: break;
    }

    ctx->pc = 0x1995e8u;

    // 0x1995e8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1995e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1995ec: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1995ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1995f0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1995f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1995f4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1995f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1995f8: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x1995f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1995fc: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1995fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x199600: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x199600u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199604: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x199604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x199608: 0xc0ab62a  jal         func_2AD8A8
    ctx->pc = 0x199608u;
    SET_GPR_U32(ctx, 31, 0x199610u);
    ctx->pc = 0x19960Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199608u;
    // 0x19960c: 0xe0902d  daddu       $s2, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AD8A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2AD8A8u, 0x199608u, 0x199610u)) {
        return;
    }
    ctx->pc = 0x199610u;
label_199610:
    // 0x199610: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x199610u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x199614: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x199614u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199618: 0x8c628bcc  lw          $v0, -0x7434($v1)
    ctx->pc = 0x199618u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x338BCCu));
    // 0x19961c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19961cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199620: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x199620u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199624: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x199624u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199628: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x199628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x19962c: 0xc0ab178  jal         func_2AC5E0
    ctx->pc = 0x19962Cu;
    SET_GPR_U32(ctx, 31, 0x199634u);
    ctx->pc = 0x199630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19962Cu;
    // 0x199630: 0xac628bcc  sw          $v0, -0x7434($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294937548), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AC5E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2AC5E0u, 0x19962Cu, 0x199634u)) {
        return;
    }
    ctx->pc = 0x199634u;
label_199634:
    // 0x199634: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x199634u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x199638: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x199638u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19963c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x19963cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x199640: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x199640u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x199644: 0x3e00008  jr          $ra
    ctx->pc = 0x199644u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x199648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199644u;
        // 0x199648: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x199644u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19964Cu;
    // 0x19964c: 0x0  nop
    ctx->pc = 0x19964cu;
    // NOP
    // 0x199650: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x199650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x199654: 0x0  nop
    ctx->pc = 0x199654u;
    // NOP
    // 0x199658: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x199658u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x19965c: 0x0  nop
    ctx->pc = 0x19965cu;
    // NOP
    // 0x199660: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x199660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x199664: 0x0  nop
    ctx->pc = 0x199664u;
    // NOP
    ctx->pc = 0x199668u;
}
