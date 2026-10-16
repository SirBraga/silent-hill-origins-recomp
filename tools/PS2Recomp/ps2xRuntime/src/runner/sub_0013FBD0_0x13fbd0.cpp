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

// Function: sub_0013FBD0
// Address: 0x13fbd0 - 0x13fc30
void sub_0013FBD0_0x13fbd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013FBD0_0x13fbd0");
#endif

    switch (ctx->pc) {
        case 0x13fbe4u: goto label_13fbe4;
        case 0x13fc1cu: goto label_13fc1c;
        default: break;
    }

    ctx->pc = 0x13fbd0u;

    // 0x13fbd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13fbd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13fbd4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x13fbd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x13fbd8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13fbd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13fbdc: 0xc04edaa  jal         func_13B6A8
    ctx->pc = 0x13FBDCu;
    SET_GPR_U32(ctx, 31, 0x13FBE4u);
    ctx->pc = 0x13FBE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13FBDCu;
    // 0x13fbe0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13B6A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13B6A8u, 0x13FBDCu, 0x13FBE4u)) {
        return;
    }
    ctx->pc = 0x13FBE4u;
label_13fbe4:
    // 0x13fbe4: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x13fbe4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x13fbe8: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x13fbe8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x13fbec: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x13fbecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x13fbf0: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x13fbf0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
    // 0x13fbf4: 0x24630908  addiu       $v1, $v1, 0x908
    ctx->pc = 0x13fbf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2312));
    // 0x13fbf8: 0x244207e8  addiu       $v0, $v0, 0x7E8
    ctx->pc = 0x13fbf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2024));
    // 0x13fbfc: 0x24a507a8  addiu       $a1, $a1, 0x7A8
    ctx->pc = 0x13fbfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1960));
    // 0x13fc00: 0x24c60928  addiu       $a2, $a2, 0x928
    ctx->pc = 0x13fc00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2344));
    // 0x13fc04: 0xae03003c  sw          $v1, 0x3C($s0)
    ctx->pc = 0x13fc04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 3));
    // 0x13fc08: 0x2604004c  addiu       $a0, $s0, 0x4C
    ctx->pc = 0x13fc08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 76));
    // 0x13fc0c: 0xae020048  sw          $v0, 0x48($s0)
    ctx->pc = 0x13fc0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
    // 0x13fc10: 0xae050084  sw          $a1, 0x84($s0)
    ctx->pc = 0x13fc10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 5));
    // 0x13fc14: 0xc041f10  jal         func_107C40
    ctx->pc = 0x13FC14u;
    SET_GPR_U32(ctx, 31, 0x13FC1Cu);
    ctx->pc = 0x13FC18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13FC14u;
    // 0x13fc18: 0xae060034  sw          $a2, 0x34($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107C40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x107C40u, 0x13FC14u, 0x13FC1Cu)) {
        return;
    }
    ctx->pc = 0x13FC1Cu;
label_13fc1c:
    // 0x13fc1c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x13fc1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13fc20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13fc20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13fc24: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x13fc24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13fc28: 0x3e00008  jr          $ra
    ctx->pc = 0x13FC28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13FC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FC28u;
        // 0x13fc2c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13FC28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13FC30u;
}
