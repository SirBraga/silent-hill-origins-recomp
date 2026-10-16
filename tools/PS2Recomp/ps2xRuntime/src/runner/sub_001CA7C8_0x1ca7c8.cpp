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

// Function: sub_001CA7C8
// Address: 0x1ca7c8 - 0x1ca838
void sub_001CA7C8_0x1ca7c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CA7C8_0x1ca7c8");
#endif

    switch (ctx->pc) {
        case 0x1ca7ecu: goto label_1ca7ec;
        case 0x1ca7f4u: goto label_1ca7f4;
        case 0x1ca7fcu: goto label_1ca7fc;
        case 0x1ca804u: goto label_1ca804;
        case 0x1ca80cu: goto label_1ca80c;
        case 0x1ca814u: goto label_1ca814;
        case 0x1ca81cu: goto label_1ca81c;
        case 0x1ca824u: goto label_1ca824;
        default: break;
    }

    ctx->pc = 0x1ca7c8u;

    // 0x1ca7c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ca7c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ca7cc: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1ca7ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1ca7d0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1ca7d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1ca7d4: 0x24a5f948  addiu       $a1, $a1, -0x6B8
    ctx->pc = 0x1ca7d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965576));
    // 0x1ca7d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ca7d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ca7dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ca7dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca7e0: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x1ca7e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1ca7e4: 0xc08941c  jal         func_225070
    ctx->pc = 0x1CA7E4u;
    SET_GPR_U32(ctx, 31, 0x1CA7ECu);
    ctx->pc = 0x1CA7E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA7E4u;
    // 0x1ca7e8: 0x8e0402b0  lw          $a0, 0x2B0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 688)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225070u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x225070u, 0x1CA7E4u, 0x1CA7ECu)) {
        return;
    }
    ctx->pc = 0x1CA7ECu;
label_1ca7ec:
    // 0x1ca7ec: 0xc0893a2  jal         func_224E88
    ctx->pc = 0x1CA7ECu;
    SET_GPR_U32(ctx, 31, 0x1CA7F4u);
    ctx->pc = 0x1CA7F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA7ECu;
    // 0x1ca7f0: 0x8e0402b0  lw          $a0, 0x2B0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 688)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224E88u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x224E88u, 0x1CA7ECu, 0x1CA7F4u)) {
        return;
    }
    ctx->pc = 0x1CA7F4u;
label_1ca7f4:
    // 0x1ca7f4: 0xc072542  jal         func_1C9508
    ctx->pc = 0x1CA7F4u;
    SET_GPR_U32(ctx, 31, 0x1CA7FCu);
    ctx->pc = 0x1CA7F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA7F4u;
    // 0x1ca7f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C9508u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1C9508u, 0x1CA7F4u, 0x1CA7FCu)) {
        return;
    }
    ctx->pc = 0x1CA7FCu;
label_1ca7fc:
    // 0x1ca7fc: 0xc0725d4  jal         func_1C9750
    ctx->pc = 0x1CA7FCu;
    SET_GPR_U32(ctx, 31, 0x1CA804u);
    ctx->pc = 0x1CA800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA7FCu;
    // 0x1ca800: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C9750u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1C9750u, 0x1CA7FCu, 0x1CA804u)) {
        return;
    }
    ctx->pc = 0x1CA804u;
label_1ca804:
    // 0x1ca804: 0xc0773f4  jal         func_1DCFD0
    ctx->pc = 0x1CA804u;
    SET_GPR_U32(ctx, 31, 0x1CA80Cu);
    ctx->pc = 0x1DCFD0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1DCFD0u, 0x1CA804u, 0x1CA80Cu)) {
        return;
    }
    ctx->pc = 0x1CA80Cu;
label_1ca80c:
    // 0x1ca80c: 0xc0971bc  jal         func_25C6F0
    ctx->pc = 0x1CA80Cu;
    SET_GPR_U32(ctx, 31, 0x1CA814u);
    ctx->pc = 0x1CA810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA80Cu;
    // 0x1ca810: 0x8e0402a0  lw          $a0, 0x2A0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 672)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C6F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25C6F0u, 0x1CA80Cu, 0x1CA814u)) {
        return;
    }
    ctx->pc = 0x1CA814u;
label_1ca814:
    // 0x1ca814: 0xc0771ba  jal         func_1DC6E8
    ctx->pc = 0x1CA814u;
    SET_GPR_U32(ctx, 31, 0x1CA81Cu);
    ctx->pc = 0x1CA818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA814u;
    // 0x1ca818: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DC6E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1DC6E8u, 0x1CA814u, 0x1CA81Cu)) {
        return;
    }
    ctx->pc = 0x1CA81Cu;
label_1ca81c:
    // 0x1ca81c: 0xc08939a  jal         func_224E68
    ctx->pc = 0x1CA81Cu;
    SET_GPR_U32(ctx, 31, 0x1CA824u);
    ctx->pc = 0x1CA820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA81Cu;
    // 0x1ca820: 0x8e0402b0  lw          $a0, 0x2B0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 688)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224E68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x224E68u, 0x1CA81Cu, 0x1CA824u)) {
        return;
    }
    ctx->pc = 0x1CA824u;
label_1ca824:
    // 0x1ca824: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1ca824u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ca828: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ca828u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ca82c: 0x3e00008  jr          $ra
    ctx->pc = 0x1CA82Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CA830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA82Cu;
        // 0x1ca830: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CA82Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CA834u;
    // 0x1ca834: 0x0  nop
    ctx->pc = 0x1ca834u;
    // NOP
    ctx->pc = 0x1ca838u;
}
