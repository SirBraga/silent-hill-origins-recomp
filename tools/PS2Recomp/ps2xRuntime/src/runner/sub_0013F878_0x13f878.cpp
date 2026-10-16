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

// Function: sub_0013F878
// Address: 0x13f878 - 0x13f8d0
void sub_0013F878_0x13f878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013F878_0x13f878");
#endif

    switch (ctx->pc) {
        case 0x13f88cu: goto label_13f88c;
        default: break;
    }

    ctx->pc = 0x13f878u;

    // 0x13f878: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13f878u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13f87c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x13f87cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x13f880: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13f880u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13f884: 0xc040000  jal         func_100000
    ctx->pc = 0x13F884u;
    SET_GPR_U32(ctx, 31, 0x13F88Cu);
    ctx->pc = 0x13F888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F884u;
    // 0x13f888: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100000u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x100000u, 0x13F884u, 0x13F88Cu)) {
        return;
    }
    ctx->pc = 0x13F88Cu;
label_13f88c:
    // 0x13f88c: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x13f88cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x13f890: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x13f890u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x13f894: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x13f894u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x13f898: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x13f898u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
    // 0x13f89c: 0x24630460  addiu       $v1, $v1, 0x460
    ctx->pc = 0x13f89cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1120));
    // 0x13f8a0: 0x24840340  addiu       $a0, $a0, 0x340
    ctx->pc = 0x13f8a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 832));
    // 0x13f8a4: 0x24a50480  addiu       $a1, $a1, 0x480
    ctx->pc = 0x13f8a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1152));
    // 0x13f8a8: 0x24c604c0  addiu       $a2, $a2, 0x4C0
    ctx->pc = 0x13f8a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1216));
    // 0x13f8ac: 0xae03003c  sw          $v1, 0x3C($s0)
    ctx->pc = 0x13f8acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 3));
    // 0x13f8b0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x13f8b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f8b4: 0xae040048  sw          $a0, 0x48($s0)
    ctx->pc = 0x13f8b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 4));
    // 0x13f8b8: 0xae050084  sw          $a1, 0x84($s0)
    ctx->pc = 0x13f8b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 5));
    // 0x13f8bc: 0xae060034  sw          $a2, 0x34($s0)
    ctx->pc = 0x13f8bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 6));
    // 0x13f8c0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x13f8c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13f8c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13f8c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13f8c8: 0x3e00008  jr          $ra
    ctx->pc = 0x13F8C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13F8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F8C8u;
        // 0x13f8cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13F8C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13F8D0u;
}
