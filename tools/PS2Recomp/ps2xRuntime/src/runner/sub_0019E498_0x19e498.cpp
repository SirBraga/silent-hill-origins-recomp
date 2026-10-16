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

// Function: sub_0019E498
// Address: 0x19e498 - 0x19e500
void sub_0019E498_0x19e498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019E498_0x19e498");
#endif

    switch (ctx->pc) {
        case 0x19e4b8u: goto label_19e4b8;
        case 0x19e4c4u: goto label_19e4c4;
        case 0x19e4d8u: goto label_19e4d8;
        default: break;
    }

    ctx->pc = 0x19e498u;

    // 0x19e498: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x19e498u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19e49c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x19e49cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19e4a0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19e4a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19e4a4: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x19e4a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x19e4a8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x19e4a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x19e4ac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19e4acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19e4b0: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x19E4B0u;
    SET_GPR_U32(ctx, 31, 0x19E4B8u);
    ctx->pc = 0x19E4B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E4B0u;
    // 0x19e4b4: 0xe0882d  daddu       $s1, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x19E4B0u, 0x19E4B8u)) {
        return;
    }
    ctx->pc = 0x19E4B8u;
label_19e4b8:
    // 0x19e4b8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x19e4b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e4bc: 0xc080572  jal         func_2015C8
    ctx->pc = 0x19E4BCu;
    SET_GPR_U32(ctx, 31, 0x19E4C4u);
    ctx->pc = 0x19E4C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E4BCu;
    // 0x19e4c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2015C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2015C8u, 0x19E4BCu, 0x19E4C4u)) {
        return;
    }
    ctx->pc = 0x19E4C4u;
label_19e4c4:
    // 0x19e4c4: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x19e4c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x19e4c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19e4c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e4cc: 0x2463a978  addiu       $v1, $v1, -0x5688
    ctx->pc = 0x19e4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945144));
    // 0x19e4d0: 0xc065aa6  jal         func_196A98
    ctx->pc = 0x19E4D0u;
    SET_GPR_U32(ctx, 31, 0x19E4D8u);
    ctx->pc = 0x19E4D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E4D0u;
    // 0x19e4d4: 0xae03003c  sw          $v1, 0x3C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x196A98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x196A98u, 0x19E4D0u, 0x19E4D8u)) {
        return;
    }
    ctx->pc = 0x19E4D8u;
label_19e4d8:
    // 0x19e4d8: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x19e4d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x19e4dc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x19e4dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e4e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19e4e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19e4e4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x19e4e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19e4e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19e4e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19e4ec: 0x3e00008  jr          $ra
    ctx->pc = 0x19E4ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19E4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E4ECu;
        // 0x19e4f0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19E4ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19E4F4u;
    // 0x19e4f4: 0x0  nop
    ctx->pc = 0x19e4f4u;
    // NOP
    // 0x19e4f8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x19e4f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x19e4fc: 0x0  nop
    ctx->pc = 0x19e4fcu;
    // NOP
    ctx->pc = 0x19e500u;
}
