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

// Function: sub_00173768
// Address: 0x173768 - 0x1737c8
void sub_00173768_0x173768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00173768_0x173768");
#endif

    switch (ctx->pc) {
        case 0x17377cu: goto label_17377c;
        case 0x1737a4u: goto label_1737a4;
        case 0x1737b4u: goto label_1737b4;
        default: break;
    }

    ctx->pc = 0x173768u;

    // 0x173768: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x173768u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17376c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x17376cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x173770: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x173770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x173774: 0xc05d80c  jal         func_176030
    ctx->pc = 0x173774u;
    SET_GPR_U32(ctx, 31, 0x17377Cu);
    ctx->pc = 0x173778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173774u;
    // 0x173778: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x176030u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x176030u, 0x173774u, 0x17377Cu)) {
        return;
    }
    ctx->pc = 0x17377Cu;
label_17377c:
    // 0x17377c: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x17377cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x173780: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x173780u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x173784: 0x24635be8  addiu       $v1, $v1, 0x5BE8
    ctx->pc = 0x173784u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23528));
    // 0x173788: 0x24425bc8  addiu       $v0, $v0, 0x5BC8
    ctx->pc = 0x173788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23496));
    // 0x17378c: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x17378cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x173790: 0xae030034  sw          $v1, 0x34($s0)
    ctx->pc = 0x173790u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 3));
    // 0x173794: 0x2604005c  addiu       $a0, $s0, 0x5C
    ctx->pc = 0x173794u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 92));
    // 0x173798: 0xae02003c  sw          $v0, 0x3C($s0)
    ctx->pc = 0x173798u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
    // 0x17379c: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x17379Cu;
    SET_GPR_U32(ctx, 31, 0x1737A4u);
    ctx->pc = 0x1737A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17379Cu;
    // 0x1737a0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x17379Cu, 0x1737A4u)) {
        return;
    }
    ctx->pc = 0x1737A4u;
label_1737a4:
    // 0x1737a4: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1737a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x1737a8: 0x24050017  addiu       $a1, $zero, 0x17
    ctx->pc = 0x1737a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x1737ac: 0xc06ca28  jal         func_1B28A0
    ctx->pc = 0x1737ACu;
    SET_GPR_U32(ctx, 31, 0x1737B4u);
    ctx->pc = 0x1737B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1737ACu;
    // 0x1737b0: 0x8c649168  lw          $a0, -0x6E98($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294938984)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B28A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B28A0u, 0x1737ACu, 0x1737B4u)) {
        return;
    }
    ctx->pc = 0x1737B4u;
label_1737b4:
    // 0x1737b4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1737b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1737b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1737b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1737bc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1737bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1737c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1737C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1737C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1737C0u;
        // 0x1737c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1737C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1737C8u;
}
