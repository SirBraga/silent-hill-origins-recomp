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

// Function: sub_0025BF58
// Address: 0x25bf58 - 0x25bfd8
void sub_0025BF58_0x25bf58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025BF58_0x25bf58");
#endif

    switch (ctx->pc) {
        case 0x25bf94u: goto label_25bf94;
        case 0x25bfacu: goto label_25bfac;
        default: break;
    }

    ctx->pc = 0x25bf58u;

    // 0x25bf58: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x25bf58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x25bf5c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x25bf5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x25bf60: 0x8c633fe0  lw          $v1, 0x3FE0($v1)
    ctx->pc = 0x25bf60u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B3FE0u));
    // 0x25bf64: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x25bf64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x25bf68: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x25bf68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x25bf6c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x25bf6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x25bf70: 0x24510fc8  addiu       $s1, $v0, 0xFC8
    ctx->pc = 0x25bf70u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4040));
    // 0x25bf74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25bf74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25bf78: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x25bf78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25bf7c: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x25bf7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x25bf80: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x25bf80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25bf84: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x25BF84u;
    {
        const bool branch_taken_0x25bf84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x25bf84) {
            ctx->pc = 0x25BFA4u;
            goto label_25bfa4;
        }
    }
    ctx->pc = 0x25BF8Cu;
    // 0x25bf8c: 0xc093106  jal         func_24C418
    ctx->pc = 0x25BF8Cu;
    SET_GPR_U32(ctx, 31, 0x25BF94u);
    ctx->pc = 0x24C418u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24C418u, 0x25BF8Cu, 0x25BF94u)) {
        return;
    }
    ctx->pc = 0x25BF94u;
label_25bf94:
    // 0x25bf94: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x25bf94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x25bf98: 0x8c633fe0  lw          $v1, 0x3FE0($v1)
    ctx->pc = 0x25bf98u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B3FE0u));
    // 0x25bf9c: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x25bf9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x25bfa0: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x25bfa0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_25bfa4:
    // 0x25bfa4: 0xc097bae  jal         func_25EEB8
    ctx->pc = 0x25BFA4u;
    SET_GPR_U32(ctx, 31, 0x25BFACu);
    ctx->pc = 0x25EEB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25EEB8u, 0x25BFA4u, 0x25BFACu)) {
        return;
    }
    ctx->pc = 0x25BFACu;
label_25bfac:
    // 0x25bfac: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x25bfacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x25bfb0: 0x8c633fe4  lw          $v1, 0x3FE4($v1)
    ctx->pc = 0x25bfb0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B3FE4u));
    // 0x25bfb4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x25bfb4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25bfb8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x25bfb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25bfbc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x25bfbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x25bfc0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x25bfc0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25bfc4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25bfc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25bfc8: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x25bfc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x25bfcc: 0xac233fe4  sw          $v1, 0x3FE4($at)
    ctx->pc = 0x25bfccu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B3FE4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B3FE4u, _value); } while (0);
    // 0x25bfd0: 0x3e00008  jr          $ra
    ctx->pc = 0x25BFD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25BFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BFD0u;
        // 0x25bfd4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25BFD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25BFD8u;
}
