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

// Function: sub_00252B00
// Address: 0x252b00 - 0x252b70
void sub_00252B00_0x252b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00252B00_0x252b00");
#endif

    switch (ctx->pc) {
        case 0x252b50u: goto label_252b50;
        default: break;
    }

    ctx->pc = 0x252b00u;

    // 0x252b00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x252b00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x252b04: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x252b04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x252b08: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x252b08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x252b0c: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x252b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x252b10: 0x3c100073  lui         $s0, 0x73
    ctx->pc = 0x252b10u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)115 << 16));
    // 0x252b14: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x252b14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x252b18: 0xae045618  sw          $a0, 0x5618($s0)
    ctx->pc = 0x252b18u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x735618u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x735618u, _value); } while (0);
    // 0x252b1c: 0x26105618  addiu       $s0, $s0, 0x5618
    ctx->pc = 0x252b1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 22040));
    // 0x252b20: 0x68a60007  ldl         $a2, 0x7($a1)
    ctx->pc = 0x252b20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x252b24: 0x6ca60000  ldr         $a2, 0x0($a1)
    ctx->pc = 0x252b24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x252b28: 0x8ca70008  lw          $a3, 0x8($a1)
    ctx->pc = 0x252b28u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x252b2c: 0xb206002b  sdl         $a2, 0x2B($s0)
    ctx->pc = 0x252b2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 43); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x252b30: 0xb6060024  sdr         $a2, 0x24($s0)
    ctx->pc = 0x252b30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 36); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x252b34: 0xae07002c  sw          $a3, 0x2C($s0)
    ctx->pc = 0x252b34u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x735644u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x735644u, _value); } while (0);
    // 0x252b38: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x252b38u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x735638u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x735638u, _value); } while (0);
    // 0x252b3c: 0x24652a28  addiu       $a1, $v1, 0x2A28
    ctx->pc = 0x252b3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 10792));
    // 0x252b40: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x252b40u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x735648u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x735648u, _value); } while (0);
    // 0x252b44: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x252b44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252b48: 0xc0972f2  jal         func_25CBC8
    ctx->pc = 0x252B48u;
    SET_GPR_U32(ctx, 31, 0x252B50u);
    ctx->pc = 0x252B4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252B48u;
    // 0x252b4c: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CBC8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25CBC8u, 0x252B48u, 0x252B50u)) {
        return;
    }
    ctx->pc = 0x252B50u;
label_252b50:
    // 0x252b50: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x252b50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x252b54: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x252b54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x252b58: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x252b58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x252b5c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x252b5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x252b60: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x252b60u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x252b64: 0x3e00008  jr          $ra
    ctx->pc = 0x252B64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x252B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252B64u;
        // 0x252b68: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x252B64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x252B6Cu;
    // 0x252b6c: 0x0  nop
    ctx->pc = 0x252b6cu;
    // NOP
    ctx->pc = 0x252b70u;
}
