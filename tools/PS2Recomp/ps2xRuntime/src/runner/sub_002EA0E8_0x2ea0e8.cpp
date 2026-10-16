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

// Function: sub_002EA0E8
// Address: 0x2ea0e8 - 0x2ea150
void sub_002EA0E8_0x2ea0e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EA0E8_0x2ea0e8");
#endif

    switch (ctx->pc) {
        case 0x2ea104u: goto label_2ea104;
        case 0x2ea118u: goto label_2ea118;
        default: break;
    }

    ctx->pc = 0x2ea0e8u;

    // 0x2ea0e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ea0e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ea0ec: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2ea0ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2ea0f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ea0f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ea0f4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ea0f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea0f8: 0x260402c0  addiu       $a0, $s0, 0x2C0
    ctx->pc = 0x2ea0f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 704));
    // 0x2ea0fc: 0xc0bb73c  jal         func_2EDCF0
    ctx->pc = 0x2EA0FCu;
    SET_GPR_U32(ctx, 31, 0x2EA104u);
    ctx->pc = 0x2EA100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA0FCu;
    // 0x2ea100: 0x8cc50000  lw          $a1, 0x0($a2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDCF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2EDCF0u, 0x2EA0FCu, 0x2EA104u)) {
        return;
    }
    ctx->pc = 0x2EA104u;
label_2ea104:
    // 0x2ea104: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2ea104u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea108: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ea108u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ea10c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2ea10cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ea110: 0x3e00008  jr          $ra
    ctx->pc = 0x2EA110u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EA114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA110u;
        // 0x2ea114: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EA110u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EA118u;
label_2ea118:
    // 0x2ea118: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2ea118u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea11c: 0x24a21080  addiu       $v0, $a1, 0x1080
    ctx->pc = 0x2ea11cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4224));
    // 0x2ea120: 0x3c042000  lui         $a0, 0x2000
    ctx->pc = 0x2ea120u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
    // 0x2ea124: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x2ea124u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x2ea128: 0x8c430280  lw          $v1, 0x280($v0)
    ctx->pc = 0x2ea128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 640)));
    // 0x2ea12c: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x2ea12cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x2ea130: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EA130u;
    {
        const bool branch_taken_0x2ea130 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EA134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA130u;
        // 0x2ea134: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea130) {
            ctx->pc = 0x2EA140u;
            goto label_2ea140;
        }
    }
    ctx->pc = 0x2EA138u;
    // 0x2ea138: 0x8ca70f40  lw          $a3, 0xF40($a1)
    ctx->pc = 0x2ea138u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3904)));
    // 0x2ea13c: 0x0  nop
    ctx->pc = 0x2ea13cu;
    // NOP
label_2ea140:
    // 0x2ea140: 0xacc70000  sw          $a3, 0x0($a2)
    ctx->pc = 0x2ea140u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 7));
    // 0x2ea144: 0x3e00008  jr          $ra
    ctx->pc = 0x2EA144u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EA148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA144u;
        // 0x2ea148: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EA144u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EA14Cu;
    // 0x2ea14c: 0x0  nop
    ctx->pc = 0x2ea14cu;
    // NOP
    ctx->pc = 0x2ea150u;
}
