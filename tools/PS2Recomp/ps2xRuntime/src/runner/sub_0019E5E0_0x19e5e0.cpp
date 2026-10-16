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

// Function: sub_0019E5E0
// Address: 0x19e5e0 - 0x19e650
void sub_0019E5E0_0x19e5e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019E5E0_0x19e5e0");
#endif

    switch (ctx->pc) {
        case 0x19e630u: goto label_19e630;
        case 0x19e63cu: goto label_19e63c;
        default: break;
    }

    ctx->pc = 0x19e5e0u;

    // 0x19e5e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x19e5e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19e5e4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x19e5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x19e5e8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x19e5e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x19e5ec: 0x2442a8d8  addiu       $v0, $v0, -0x5728
    ctx->pc = 0x19e5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944984));
    // 0x19e5f0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19e5f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19e5f4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19e5f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e5f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19e5f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19e5fc: 0x3c07005c  lui         $a3, 0x5C
    ctx->pc = 0x19e5fcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)92 << 16));
    // 0x19e600: 0xae02003c  sw          $v0, 0x3C($s0)
    ctx->pc = 0x19e600u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
    // 0x19e604: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x19e604u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e608: 0x8e060038  lw          $a2, 0x38($s0)
    ctx->pc = 0x19e608u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x19e60c: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x19e60cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x19e610: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x19e610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x19e614: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x19e614u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x19e618: 0xacc2000c  sw          $v0, 0xC($a2)
    ctx->pc = 0x19e618u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
    // 0x19e61c: 0x8ce30160  lw          $v1, 0x160($a3)
    ctx->pc = 0x19e61cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 352)));
    // 0x19e620: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x19e620u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x19e624: 0xace30160  sw          $v1, 0x160($a3)
    ctx->pc = 0x19e624u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 352), GPR_U32(ctx, 3));
    // 0x19e628: 0xc0bba26  jal         func_2EE898
    ctx->pc = 0x19E628u;
    SET_GPR_U32(ctx, 31, 0x19E630u);
    ctx->pc = 0x19E62Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E628u;
    // 0x19e62c: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE898u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2EE898u, 0x19E628u, 0x19E630u)) {
        return;
    }
    ctx->pc = 0x19E630u;
label_19e630:
    // 0x19e630: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19e630u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e634: 0xc080596  jal         func_201658
    ctx->pc = 0x19E634u;
    SET_GPR_U32(ctx, 31, 0x19E63Cu);
    ctx->pc = 0x19E638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E634u;
    // 0x19e638: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201658u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x201658u, 0x19E634u, 0x19E63Cu)) {
        return;
    }
    ctx->pc = 0x19E63Cu;
label_19e63c:
    // 0x19e63c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x19e63cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19e640: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19e640u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19e644: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19e644u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19e648: 0x3e00008  jr          $ra
    ctx->pc = 0x19E648u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19E64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E648u;
        // 0x19e64c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19E648u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19E650u;
}
