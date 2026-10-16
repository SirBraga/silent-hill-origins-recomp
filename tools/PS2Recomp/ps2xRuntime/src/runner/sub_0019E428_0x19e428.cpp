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

// Function: sub_0019E428
// Address: 0x19e428 - 0x19e498
void sub_0019E428_0x19e428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019E428_0x19e428");
#endif

    switch (ctx->pc) {
        case 0x19e478u: goto label_19e478;
        case 0x19e484u: goto label_19e484;
        default: break;
    }

    ctx->pc = 0x19e428u;

    // 0x19e428: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x19e428u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19e42c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x19e42cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x19e430: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x19e430u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x19e434: 0x2442a978  addiu       $v0, $v0, -0x5688
    ctx->pc = 0x19e434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945144));
    // 0x19e438: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19e438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19e43c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19e43cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e440: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19e440u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19e444: 0x3c07005c  lui         $a3, 0x5C
    ctx->pc = 0x19e444u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)92 << 16));
    // 0x19e448: 0xae02003c  sw          $v0, 0x3C($s0)
    ctx->pc = 0x19e448u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
    // 0x19e44c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x19e44cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e450: 0x8e060038  lw          $a2, 0x38($s0)
    ctx->pc = 0x19e450u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x19e454: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x19e454u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x19e458: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x19e458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x19e45c: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x19e45cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x19e460: 0xacc2000c  sw          $v0, 0xC($a2)
    ctx->pc = 0x19e460u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
    // 0x19e464: 0x8ce30160  lw          $v1, 0x160($a3)
    ctx->pc = 0x19e464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 352)));
    // 0x19e468: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x19e468u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x19e46c: 0xace30160  sw          $v1, 0x160($a3)
    ctx->pc = 0x19e46cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 352), GPR_U32(ctx, 3));
    // 0x19e470: 0xc065ad2  jal         func_196B48
    ctx->pc = 0x19E470u;
    SET_GPR_U32(ctx, 31, 0x19E478u);
    ctx->pc = 0x19E474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E470u;
    // 0x19e474: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x196B48u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x196B48u, 0x19E470u, 0x19E478u)) {
        return;
    }
    ctx->pc = 0x19E478u;
label_19e478:
    // 0x19e478: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19e478u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e47c: 0xc080596  jal         func_201658
    ctx->pc = 0x19E47Cu;
    SET_GPR_U32(ctx, 31, 0x19E484u);
    ctx->pc = 0x19E480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E47Cu;
    // 0x19e480: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201658u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x201658u, 0x19E47Cu, 0x19E484u)) {
        return;
    }
    ctx->pc = 0x19E484u;
label_19e484:
    // 0x19e484: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x19e484u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19e488: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19e488u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19e48c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19e48cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19e490: 0x3e00008  jr          $ra
    ctx->pc = 0x19E490u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19E494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E490u;
        // 0x19e494: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19E490u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19E498u;
}
