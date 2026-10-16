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

// Function: sub_001D68A8
// Address: 0x1d68a8 - 0x1d6900
void sub_001D68A8_0x1d68a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D68A8_0x1d68a8");
#endif

    switch (ctx->pc) {
        case 0x1d68bcu: goto label_1d68bc;
        case 0x1d68c4u: goto label_1d68c4;
        default: break;
    }

    ctx->pc = 0x1d68a8u;

    // 0x1d68a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d68a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d68ac: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1d68acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1d68b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d68b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d68b4: 0xc0620ba  jal         func_1882E8
    ctx->pc = 0x1D68B4u;
    SET_GPR_U32(ctx, 31, 0x1D68BCu);
    ctx->pc = 0x1D68B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D68B4u;
    // 0x1d68b8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1882E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1882E8u, 0x1D68B4u, 0x1D68BCu)) {
        return;
    }
    ctx->pc = 0x1D68BCu;
label_1d68bc:
    // 0x1d68bc: 0xc04f05a  jal         func_13C168
    ctx->pc = 0x1D68BCu;
    SET_GPR_U32(ctx, 31, 0x1D68C4u);
    ctx->pc = 0x1D68C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D68BCu;
    // 0x1d68c0: 0x26040040  addiu       $a0, $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C168u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C168u, 0x1D68BCu, 0x1D68C4u)) {
        return;
    }
    ctx->pc = 0x1D68C4u;
label_1d68c4:
    // 0x1d68c4: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1d68c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x1d68c8: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x1d68c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
    // 0x1d68cc: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1d68ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1d68d0: 0x246313c0  addiu       $v1, $v1, 0x13C0
    ctx->pc = 0x1d68d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5056));
    // 0x1d68d4: 0x248413e0  addiu       $a0, $a0, 0x13E0
    ctx->pc = 0x1d68d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5088));
    // 0x1d68d8: 0x24a51428  addiu       $a1, $a1, 0x1428
    ctx->pc = 0x1d68d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5160));
    // 0x1d68dc: 0xae03007c  sw          $v1, 0x7C($s0)
    ctx->pc = 0x1d68dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 3));
    // 0x1d68e0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1d68e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d68e4: 0xae040074  sw          $a0, 0x74($s0)
    ctx->pc = 0x1d68e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 4));
    // 0x1d68e8: 0xae050030  sw          $a1, 0x30($s0)
    ctx->pc = 0x1d68e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 5));
    // 0x1d68ec: 0xae000084  sw          $zero, 0x84($s0)
    ctx->pc = 0x1d68ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 0));
    // 0x1d68f0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1d68f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d68f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d68f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d68f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1D68F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D68FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D68F8u;
        // 0x1d68fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D68F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D6900u;
}
