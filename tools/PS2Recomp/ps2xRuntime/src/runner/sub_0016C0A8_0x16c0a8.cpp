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

// Function: sub_0016C0A8
// Address: 0x16c0a8 - 0x16c140
void sub_0016C0A8_0x16c0a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016C0A8_0x16c0a8");
#endif

    switch (ctx->pc) {
        case 0x16c0ecu: goto label_16c0ec;
        case 0x16c0f4u: goto label_16c0f4;
        case 0x16c108u: goto label_16c108;
        case 0x16c118u: goto label_16c118;
        case 0x16c124u: goto label_16c124;
        default: break;
    }

    ctx->pc = 0x16c0a8u;

    // 0x16c0a8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x16c0a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x16c0ac: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x16c0acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x16c0b0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x16c0b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x16c0b4: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x16c0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x16c0b8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x16c0b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x16c0bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16c0bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c0c0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x16c0c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x16c0c4: 0x246348d8  addiu       $v1, $v1, 0x48D8
    ctx->pc = 0x16c0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18648));
    // 0x16c0c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16c0c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16c0cc: 0x244248f8  addiu       $v0, $v0, 0x48F8
    ctx->pc = 0x16c0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18680));
    // 0x16c0d0: 0x26110044  addiu       $s1, $s0, 0x44
    ctx->pc = 0x16c0d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
    // 0x16c0d4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x16c0d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c0d8: 0xae03003c  sw          $v1, 0x3C($s0)
    ctx->pc = 0x16c0d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 3));
    // 0x16c0dc: 0x26040038  addiu       $a0, $s0, 0x38
    ctx->pc = 0x16c0dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
    // 0x16c0e0: 0xae020034  sw          $v0, 0x34($s0)
    ctx->pc = 0x16c0e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
    // 0x16c0e4: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x16C0E4u;
    SET_GPR_U32(ctx, 31, 0x16C0ECu);
    ctx->pc = 0x16C0E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C0E4u;
    // 0x16c0e8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x16C0E4u, 0x16C0ECu)) {
        return;
    }
    ctx->pc = 0x16C0ECu;
label_16c0ec:
    // 0x16c0ec: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x16C0ECu;
    SET_GPR_U32(ctx, 31, 0x16C0F4u);
    ctx->pc = 0x16C0F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C0ECu;
    // 0x16c0f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x16C0ECu, 0x16C0F4u)) {
        return;
    }
    ctx->pc = 0x16C0F4u;
label_16c0f4:
    // 0x16c0f4: 0x8e04004c  lw          $a0, 0x4C($s0)
    ctx->pc = 0x16c0f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x16c0f8: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x16C0F8u;
    {
        const bool branch_taken_0x16c0f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x16c0f8) {
            ctx->pc = 0x16C0FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16C0F8u;
            // 0x16c0fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16C110u;
            goto label_16c110;
        }
    }
    ctx->pc = 0x16C100u;
    // 0x16c100: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x16C100u;
    SET_GPR_U32(ctx, 31, 0x16C108u);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x16C100u, 0x16C108u)) {
        return;
    }
    ctx->pc = 0x16C108u;
label_16c108:
    // 0x16c108: 0xae00004c  sw          $zero, 0x4C($s0)
    ctx->pc = 0x16c108u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 0));
    // 0x16c10c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16c10cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16c110:
    // 0x16c110: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x16C110u;
    SET_GPR_U32(ctx, 31, 0x16C118u);
    ctx->pc = 0x16C114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C110u;
    // 0x16c114: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x16C110u, 0x16C118u)) {
        return;
    }
    ctx->pc = 0x16C118u;
label_16c118:
    // 0x16c118: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16c118u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c11c: 0xc04f084  jal         func_13C210
    ctx->pc = 0x16C11Cu;
    SET_GPR_U32(ctx, 31, 0x16C124u);
    ctx->pc = 0x16C120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C11Cu;
    // 0x16c120: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C210u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C210u, 0x16C11Cu, 0x16C124u)) {
        return;
    }
    ctx->pc = 0x16C124u;
label_16c124:
    // 0x16c124: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x16c124u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16c128: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x16c128u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16c12c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x16c12cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16c130: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16c130u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16c134: 0x3e00008  jr          $ra
    ctx->pc = 0x16C134u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16C138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C134u;
        // 0x16c138: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16C134u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16C13Cu;
    // 0x16c13c: 0x0  nop
    ctx->pc = 0x16c13cu;
    // NOP
    ctx->pc = 0x16c140u;
}
