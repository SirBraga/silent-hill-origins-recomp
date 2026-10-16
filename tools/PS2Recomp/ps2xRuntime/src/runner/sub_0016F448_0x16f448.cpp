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

// Function: sub_0016F448
// Address: 0x16f448 - 0x16f4c8
void sub_0016F448_0x16f448(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016F448_0x16f448");
#endif

    switch (ctx->pc) {
        case 0x16f48cu: goto label_16f48c;
        case 0x16f498u: goto label_16f498;
        case 0x16f4a4u: goto label_16f4a4;
        case 0x16f4b0u: goto label_16f4b0;
        default: break;
    }

    ctx->pc = 0x16f448u;

    // 0x16f448: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x16f448u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x16f44c: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x16f44cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x16f450: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x16f450u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x16f454: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x16f454u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x16f458: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x16f458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x16f45c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x16f45cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f460: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x16f460u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x16f464: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16f464u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f468: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16f468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16f46c: 0x244250e8  addiu       $v0, $v0, 0x50E8
    ctx->pc = 0x16f46cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20712));
    // 0x16f470: 0x246350a0  addiu       $v1, $v1, 0x50A0
    ctx->pc = 0x16f470u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20640));
    // 0x16f474: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x16f474u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x16f478: 0xae02003c  sw          $v0, 0x3C($s0)
    ctx->pc = 0x16f478u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
    // 0x16f47c: 0x24a58880  addiu       $a1, $a1, -0x7780
    ctx->pc = 0x16f47cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936704));
    // 0x16f480: 0xae030034  sw          $v1, 0x34($s0)
    ctx->pc = 0x16f480u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 3));
    // 0x16f484: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x16F484u;
    SET_GPR_U32(ctx, 31, 0x16F48Cu);
    ctx->pc = 0x16F488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F484u;
    // 0x16f488: 0x26040038  addiu       $a0, $s0, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x16F484u, 0x16F48Cu)) {
        return;
    }
    ctx->pc = 0x16F48Cu;
label_16f48c:
    // 0x16f48c: 0x26110044  addiu       $s1, $s0, 0x44
    ctx->pc = 0x16f48cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
    // 0x16f490: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x16F490u;
    SET_GPR_U32(ctx, 31, 0x16F498u);
    ctx->pc = 0x16F494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F490u;
    // 0x16f494: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x16F490u, 0x16F498u)) {
        return;
    }
    ctx->pc = 0x16F498u;
label_16f498:
    // 0x16f498: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16f498u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f49c: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x16F49Cu;
    SET_GPR_U32(ctx, 31, 0x16F4A4u);
    ctx->pc = 0x16F4A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F49Cu;
    // 0x16f4a0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x16F49Cu, 0x16F4A4u)) {
        return;
    }
    ctx->pc = 0x16F4A4u;
label_16f4a4:
    // 0x16f4a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16f4a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f4a8: 0xc04f084  jal         func_13C210
    ctx->pc = 0x16F4A8u;
    SET_GPR_U32(ctx, 31, 0x16F4B0u);
    ctx->pc = 0x16F4ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F4A8u;
    // 0x16f4ac: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C210u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C210u, 0x16F4A8u, 0x16F4B0u)) {
        return;
    }
    ctx->pc = 0x16F4B0u;
label_16f4b0:
    // 0x16f4b0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x16f4b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16f4b4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x16f4b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16f4b8: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x16f4b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16f4bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16f4bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16f4c0: 0x3e00008  jr          $ra
    ctx->pc = 0x16F4C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16F4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F4C0u;
        // 0x16f4c4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16F4C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16F4C8u;
}
