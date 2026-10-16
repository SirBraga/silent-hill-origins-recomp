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

// Function: sub_0019E580
// Address: 0x19e580 - 0x19e5e0
void sub_0019E580_0x19e580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019E580_0x19e580");
#endif

    switch (ctx->pc) {
        case 0x19e5a0u: goto label_19e5a0;
        case 0x19e5acu: goto label_19e5ac;
        case 0x19e5c0u: goto label_19e5c0;
        default: break;
    }

    ctx->pc = 0x19e580u;

    // 0x19e580: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x19e580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19e584: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x19e584u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19e588: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19e588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19e58c: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x19e58cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x19e590: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x19e590u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x19e594: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19e594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19e598: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x19E598u;
    SET_GPR_U32(ctx, 31, 0x19E5A0u);
    ctx->pc = 0x19E59Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E598u;
    // 0x19e59c: 0xe0882d  daddu       $s1, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x19E598u, 0x19E5A0u)) {
        return;
    }
    ctx->pc = 0x19E5A0u;
label_19e5a0:
    // 0x19e5a0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x19e5a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e5a4: 0xc080572  jal         func_2015C8
    ctx->pc = 0x19E5A4u;
    SET_GPR_U32(ctx, 31, 0x19E5ACu);
    ctx->pc = 0x19E5A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E5A4u;
    // 0x19e5a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2015C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2015C8u, 0x19E5A4u, 0x19E5ACu)) {
        return;
    }
    ctx->pc = 0x19E5ACu;
label_19e5ac:
    // 0x19e5ac: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x19e5acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x19e5b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19e5b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e5b4: 0x2463a928  addiu       $v1, $v1, -0x56D8
    ctx->pc = 0x19e5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945064));
    // 0x19e5b8: 0xc085ed2  jal         func_217B48
    ctx->pc = 0x19E5B8u;
    SET_GPR_U32(ctx, 31, 0x19E5C0u);
    ctx->pc = 0x19E5BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E5B8u;
    // 0x19e5bc: 0xae03003c  sw          $v1, 0x3C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x217B48u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x217B48u, 0x19E5B8u, 0x19E5C0u)) {
        return;
    }
    ctx->pc = 0x19E5C0u;
label_19e5c0:
    // 0x19e5c0: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x19e5c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x19e5c4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x19e5c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e5c8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19e5c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19e5cc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x19e5ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19e5d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19e5d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19e5d4: 0x3e00008  jr          $ra
    ctx->pc = 0x19E5D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19E5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E5D4u;
        // 0x19e5d8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19E5D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19E5DCu;
    // 0x19e5dc: 0x0  nop
    ctx->pc = 0x19e5dcu;
    // NOP
    ctx->pc = 0x19e5e0u;
}
