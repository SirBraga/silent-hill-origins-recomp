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

// Function: sub_0019E650
// Address: 0x19e650 - 0x19e6d8
void sub_0019E650_0x19e650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019E650_0x19e650");
#endif

    switch (ctx->pc) {
        case 0x19e674u: goto label_19e674;
        case 0x19e680u: goto label_19e680;
        case 0x19e6a0u: goto label_19e6a0;
        case 0x19e6b0u: goto label_19e6b0;
        default: break;
    }

    ctx->pc = 0x19e650u;

    // 0x19e650: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x19e650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x19e654: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x19e654u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19e658: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x19e658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x19e65c: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x19e65cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x19e660: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x19e660u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x19e664: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x19e664u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x19e668: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19e668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19e66c: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x19E66Cu;
    SET_GPR_U32(ctx, 31, 0x19E674u);
    ctx->pc = 0x19E670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E66Cu;
    // 0x19e670: 0xe0882d  daddu       $s1, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x19E66Cu, 0x19E674u)) {
        return;
    }
    ctx->pc = 0x19E674u;
label_19e674:
    // 0x19e674: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x19e674u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e678: 0xc080572  jal         func_2015C8
    ctx->pc = 0x19E678u;
    SET_GPR_U32(ctx, 31, 0x19E680u);
    ctx->pc = 0x19E67Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E678u;
    // 0x19e67c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2015C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2015C8u, 0x19E678u, 0x19E680u)) {
        return;
    }
    ctx->pc = 0x19E680u;
label_19e680:
    // 0x19e680: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x19e680u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x19e684: 0x3c100068  lui         $s0, 0x68
    ctx->pc = 0x19e684u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)104 << 16));
    // 0x19e688: 0x26106290  addiu       $s0, $s0, 0x6290
    ctx->pc = 0x19e688u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 25232));
    // 0x19e68c: 0x2463a8d8  addiu       $v1, $v1, -0x5728
    ctx->pc = 0x19e68cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944984));
    // 0x19e690: 0xae43003c  sw          $v1, 0x3C($s2)
    ctx->pc = 0x19e690u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 3));
    // 0x19e694: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19e694u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e698: 0xc0bb926  jal         func_2EE498
    ctx->pc = 0x19E698u;
    SET_GPR_U32(ctx, 31, 0x19E6A0u);
    ctx->pc = 0x19E69Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E698u;
    // 0x19e69c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE498u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2EE498u, 0x19E698u, 0x19E6A0u)) {
        return;
    }
    ctx->pc = 0x19E6A0u;
label_19e6a0:
    // 0x19e6a0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x19e6a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e6a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19e6a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e6a8: 0xc0bba22  jal         func_2EE888
    ctx->pc = 0x19E6A8u;
    SET_GPR_U32(ctx, 31, 0x19E6B0u);
    ctx->pc = 0x19E6ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E6A8u;
    // 0x19e6ac: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE888u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2EE888u, 0x19E6A8u, 0x19E6B0u)) {
        return;
    }
    ctx->pc = 0x19E6B0u;
label_19e6b0:
    // 0x19e6b0: 0xae510018  sw          $s1, 0x18($s2)
    ctx->pc = 0x19e6b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 17));
    // 0x19e6b4: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x19e6b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e6b8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x19e6b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19e6bc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x19e6bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19e6c0: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x19e6c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19e6c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19e6c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19e6c8: 0x3e00008  jr          $ra
    ctx->pc = 0x19E6C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19E6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E6C8u;
        // 0x19e6cc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19E6C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19E6D0u;
    // 0x19e6d0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x19e6d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x19e6d4: 0x0  nop
    ctx->pc = 0x19e6d4u;
    // NOP
    ctx->pc = 0x19e6d8u;
}
