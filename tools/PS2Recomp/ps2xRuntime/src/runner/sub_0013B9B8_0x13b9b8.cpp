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

// Function: sub_0013B9B8
// Address: 0x13b9b8 - 0x13ba18
void sub_0013B9B8_0x13b9b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013B9B8_0x13b9b8");
#endif

    switch (ctx->pc) {
        case 0x13b9b8u: goto label_13b9b8;
        case 0x13b9bcu: goto label_13b9bc;
        case 0x13b9c0u: goto label_13b9c0;
        case 0x13b9c4u: goto label_13b9c4;
        case 0x13b9c8u: goto label_13b9c8;
        case 0x13b9ccu: goto label_13b9cc;
        case 0x13b9d0u: goto label_13b9d0;
        case 0x13b9d4u: goto label_13b9d4;
        case 0x13b9d8u: goto label_13b9d8;
        case 0x13b9dcu: goto label_13b9dc;
        case 0x13b9e0u: goto label_13b9e0;
        case 0x13b9e4u: goto label_13b9e4;
        case 0x13b9e8u: goto label_13b9e8;
        case 0x13b9ecu: goto label_13b9ec;
        case 0x13b9f0u: goto label_13b9f0;
        case 0x13b9f4u: goto label_13b9f4;
        case 0x13b9f8u: goto label_13b9f8;
        case 0x13b9fcu: goto label_13b9fc;
        case 0x13ba00u: goto label_13ba00;
        case 0x13ba04u: goto label_13ba04;
        case 0x13ba08u: goto label_13ba08;
        case 0x13ba0cu: goto label_13ba0c;
        case 0x13ba10u: goto label_13ba10;
        case 0x13ba14u: goto label_13ba14;
        default: break;
    }

    ctx->pc = 0x13b9b8u;

label_13b9b8:
    // 0x13b9b8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x13b9b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_13b9bc:
    // 0x13b9bc: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x13b9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_13b9c0:
    // 0x13b9c0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x13b9c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_13b9c4:
    // 0x13b9c4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x13b9c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_13b9c8:
    // 0x13b9c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13b9c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_13b9cc:
    // 0x13b9cc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13b9ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_13b9d0:
    // 0x13b9d0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x13b9d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_13b9d4:
    // 0x13b9d4: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x13b9d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_13b9d8:
    // 0x13b9d8: 0x8e0500c4  lw          $a1, 0xC4($s0)
    ctx->pc = 0x13b9d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
label_13b9dc:
    // 0x13b9dc: 0xc05ee9a  jal         func_17BA68
label_13b9e0:
    if (ctx->pc == 0x13B9E0u) {
        ctx->pc = 0x13B9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B9DCu;
        // 0x13b9e0: 0x8c44870c  lw          $a0, -0x78F4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936332)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13B9E4u;
        goto label_13b9e4;
    }
    ctx->pc = 0x13B9DCu;
    SET_GPR_U32(ctx, 31, 0x13B9E4u);
    ctx->pc = 0x13B9E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B9DCu;
    // 0x13b9e0: 0x8c44870c  lw          $a0, -0x78F4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936332)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17BA68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17BA68u, 0x13B9DCu, 0x13B9E4u)) {
        return;
    }
    ctx->pc = 0x13B9E4u;
label_13b9e4:
    // 0x13b9e4: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x13b9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_13b9e8:
    // 0x13b9e8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x13b9e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_13b9ec:
    // 0x13b9ec: 0x84640070  lh          $a0, 0x70($v1)
    ctx->pc = 0x13b9ecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 112)));
label_13b9f0:
    // 0x13b9f0: 0x8c620074  lw          $v0, 0x74($v1)
    ctx->pc = 0x13b9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
label_13b9f4:
    // 0x13b9f4: 0x40f809  jalr        $v0
label_13b9f8:
    if (ctx->pc == 0x13B9F8u) {
        ctx->pc = 0x13B9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B9F4u;
        // 0x13b9f8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13B9FCu;
        goto label_13b9fc;
    }
    ctx->pc = 0x13B9F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13B9FCu);
        ctx->pc = 0x13B9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B9F4u;
        // 0x13b9f8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13B9F4u, 0x13B9FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13B9FCu;
label_13b9fc:
    // 0x13b9fc: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x13b9fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_13ba00:
    // 0x13ba00: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x13ba00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_13ba04:
    // 0x13ba04: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13ba04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_13ba08:
    // 0x13ba08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13ba08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_13ba0c:
    // 0x13ba0c: 0x3e00008  jr          $ra
label_13ba10:
    if (ctx->pc == 0x13BA10u) {
        ctx->pc = 0x13BA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BA0Cu;
        // 0x13ba10: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13BA14u;
        goto label_13ba14;
    }
    ctx->pc = 0x13BA0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13BA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BA0Cu;
        // 0x13ba10: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13BA0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13BA14u;
label_13ba14:
    // 0x13ba14: 0x0  nop
    ctx->pc = 0x13ba14u;
    // NOP
    ctx->pc = 0x13ba18u;
}
