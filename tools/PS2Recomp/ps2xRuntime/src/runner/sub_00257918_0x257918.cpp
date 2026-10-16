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

// Function: sub_00257918
// Address: 0x257918 - 0x2579b0
void sub_00257918_0x257918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00257918_0x257918");
#endif

    switch (ctx->pc) {
        case 0x257954u: goto label_257954;
        case 0x257968u: goto label_257968;
        default: break;
    }

    ctx->pc = 0x257918u;

    // 0x257918: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x257918u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x25791c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x25791cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x257920: 0x8c423fc0  lw          $v0, 0x3FC0($v0)
    ctx->pc = 0x257920u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B3FC0u));
    // 0x257924: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x257924u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x257928: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x257928u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x25792c: 0x3c100073  lui         $s0, 0x73
    ctx->pc = 0x25792cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)115 << 16));
    // 0x257930: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x257930u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x257934: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x257934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x257938: 0x26100fc8  addiu       $s0, $s0, 0xFC8
    ctx->pc = 0x257938u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4040));
    // 0x25793c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x25793cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257940: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x257940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x257944: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x257944u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x257948: 0x24a570c0  addiu       $a1, $a1, 0x70C0
    ctx->pc = 0x257948u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28864));
    // 0x25794c: 0xc093210  jal         func_24C840
    ctx->pc = 0x25794Cu;
    SET_GPR_U32(ctx, 31, 0x257954u);
    ctx->pc = 0x257950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25794Cu;
    // 0x257950: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C840u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24C840u, 0x25794Cu, 0x257954u)) {
        return;
    }
    ctx->pc = 0x257954u;
label_257954:
    // 0x257954: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x257954u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x257958: 0x8c633fc0  lw          $v1, 0x3FC0($v1)
    ctx->pc = 0x257958u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B3FC0u));
    // 0x25795c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x25795cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x257960: 0xc093106  jal         func_24C418
    ctx->pc = 0x257960u;
    SET_GPR_U32(ctx, 31, 0x257968u);
    ctx->pc = 0x257964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257960u;
    // 0x257964: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C418u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24C418u, 0x257960u, 0x257968u)) {
        return;
    }
    ctx->pc = 0x257968u;
label_257968:
    // 0x257968: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x257968u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x25796c: 0x8c843fc4  lw          $a0, 0x3FC4($a0)
    ctx->pc = 0x25796cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6B3FC4u));
    // 0x257970: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x257970u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257974: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x257974u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x257978: 0x8c633fc0  lw          $v1, 0x3FC0($v1)
    ctx->pc = 0x257978u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B3FC0u));
    // 0x25797c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x25797cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x257980: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x257980u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x257984: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x257984u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x257988: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x257988u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x25798c: 0xac243fc4  sw          $a0, 0x3FC4($at)
    ctx->pc = 0x25798cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x6B3FC4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B3FC4u, _value); } while (0);
    // 0x257990: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x257990u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x257994: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x257994u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x257998: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x257998u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x25799c: 0x3e00008  jr          $ra
    ctx->pc = 0x25799Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2579A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25799Cu;
        // 0x2579a0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25799Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2579A4u;
    // 0x2579a4: 0x0  nop
    ctx->pc = 0x2579a4u;
    // NOP
    // 0x2579a8: 0xaf85c000  sw          $a1, -0x4000($gp)
    ctx->pc = 0x2579a8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950912), GPR_U32(ctx, 5));
    // 0x2579ac: 0x0  nop
    ctx->pc = 0x2579acu;
    // NOP
    ctx->pc = 0x2579b0u;
}
