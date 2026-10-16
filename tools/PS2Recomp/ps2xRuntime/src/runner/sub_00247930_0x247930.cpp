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

// Function: sub_00247930
// Address: 0x247930 - 0x247990
void sub_00247930_0x247930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00247930_0x247930");
#endif

    switch (ctx->pc) {
        case 0x24794cu: goto label_24794c;
        default: break;
    }

    ctx->pc = 0x247930u;

    // 0x247930: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x247930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x247934: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x247934u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x247938: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x247938u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24793c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x24793cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x247940: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x247940u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x247944: 0xc08bbd6  jal         func_22EF58
    ctx->pc = 0x247944u;
    SET_GPR_U32(ctx, 31, 0x24794Cu);
    ctx->pc = 0x247948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247944u;
    // 0x247948: 0x26050001  addiu       $a1, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EF58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22EF58u, 0x247944u, 0x24794Cu)) {
        return;
    }
    ctx->pc = 0x24794Cu;
label_24794c:
    // 0x24794c: 0x36048000  ori         $a0, $s0, 0x8000
    ctx->pc = 0x24794cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)32768);
    // 0x247950: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x247950u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x247954: 0x2137c  dsll32      $v0, $v0, 13
    ctx->pc = 0x247954u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 13));
    // 0x247958: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x247958u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x24795c: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x24795cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x247960: 0x70641b89  pcpyld      $v1, $v1, $a0
    ctx->pc = 0x247960u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x247964: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x247964u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x247968: 0x8c42412c  lw          $v0, 0x412C($v0)
    ctx->pc = 0x247968u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B412Cu));
    // 0x24796c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x24796cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x247970: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x247970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x247974: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x247974u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x247978: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x247978u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x24797c: 0xaf908508  sw          $s0, -0x7AF8($gp)
    ctx->pc = 0x24797cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935816), GPR_U32(ctx, 16));
    // 0x247980: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x247980u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x247984: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x247984u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x247988: 0x3e00008  jr          $ra
    ctx->pc = 0x247988u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24798Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247988u;
        // 0x24798c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x247988u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x247990u;
}
