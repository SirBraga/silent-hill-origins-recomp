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

// Function: sub_0011D820
// Address: 0x11d820 - 0x11d898
void sub_0011D820_0x11d820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011D820_0x11d820");
#endif

    switch (ctx->pc) {
        case 0x11d838u: goto label_11d838;
        default: break;
    }

    ctx->pc = 0x11d820u;

    // 0x11d820: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x11d820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11d824: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x11d824u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11d828: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x11d828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x11d82c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11d82cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11d830: 0xc044624  jal         func_111890
    ctx->pc = 0x11D830u;
    SET_GPR_U32(ctx, 31, 0x11D838u);
    ctx->pc = 0x11D834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D830u;
    // 0x11d834: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111890u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x111890u, 0x11D830u, 0x11D838u)) {
        return;
    }
    ctx->pc = 0x11D838u;
label_11d838:
    // 0x11d838: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x11d838u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x11d83c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x11d83cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11d840: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x11d840u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x11d844: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x11d844u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x11d848: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x11d848u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x11d84c: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x11d84cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x11d850: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x11d850u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x11d854: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11d854u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11d858: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x11d858u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11d85c: 0x2463b408  addiu       $v1, $v1, -0x4BF8
    ctx->pc = 0x11d85cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947848));
    // 0x11d860: 0x2484b428  addiu       $a0, $a0, -0x4BD8
    ctx->pc = 0x11d860u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947880));
    // 0x11d864: 0xae03003c  sw          $v1, 0x3C($s0)
    ctx->pc = 0x11d864u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 3));
    // 0x11d868: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x11d868u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d86c: 0xae040034  sw          $a0, 0x34($s0)
    ctx->pc = 0x11d86cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 4));
    // 0x11d870: 0xe6010138  swc1        $f1, 0x138($s0)
    ctx->pc = 0x11d870u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 312), bits); }
    // 0x11d874: 0xae05013c  sw          $a1, 0x13C($s0)
    ctx->pc = 0x11d874u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 316), GPR_U32(ctx, 5));
    // 0x11d878: 0xe6020140  swc1        $f2, 0x140($s0)
    ctx->pc = 0x11d878u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 320), bits); }
    // 0x11d87c: 0xe6000144  swc1        $f0, 0x144($s0)
    ctx->pc = 0x11d87cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 324), bits); }
    // 0x11d880: 0xae050134  sw          $a1, 0x134($s0)
    ctx->pc = 0x11d880u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 308), GPR_U32(ctx, 5));
    // 0x11d884: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x11d884u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11d888: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11d888u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11d88c: 0x3e00008  jr          $ra
    ctx->pc = 0x11D88Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11D890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D88Cu;
        // 0x11d890: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11D88Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11D894u;
    // 0x11d894: 0x0  nop
    ctx->pc = 0x11d894u;
    // NOP
    ctx->pc = 0x11d898u;
}
