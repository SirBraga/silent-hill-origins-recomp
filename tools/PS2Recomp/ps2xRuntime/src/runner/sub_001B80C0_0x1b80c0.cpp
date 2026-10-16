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

// Function: sub_001B80C0
// Address: 0x1b80c0 - 0x1b8168
void sub_001B80C0_0x1b80c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B80C0_0x1b80c0");
#endif

    switch (ctx->pc) {
        case 0x1b80ecu: goto label_1b80ec;
        case 0x1b8114u: goto label_1b8114;
        default: break;
    }

    ctx->pc = 0x1b80c0u;

    // 0x1b80c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b80c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b80c4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1b80c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1b80c8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1b80c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1b80cc: 0x14a2001f  bne         $a1, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x1B80CCu;
    {
        const bool branch_taken_0x1b80cc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1B80D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B80CCu;
        // 0x1b80d0: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b80cc) {
            ctx->pc = 0x1B814Cu;
            goto label_1b814c;
        }
    }
    ctx->pc = 0x1B80D4u;
    // 0x1b80d4: 0x1080001d  beqz        $a0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1B80D4u;
    {
        const bool branch_taken_0x1b80d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B80D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B80D4u;
        // 0x1b80d8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b80d4) {
            ctx->pc = 0x1B814Cu;
            goto label_1b814c;
        }
    }
    ctx->pc = 0x1B80DCu;
    // 0x1b80dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b80dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b80e0: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x1b80e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1b80e4: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1B80E4u;
    SET_GPR_U32(ctx, 31, 0x1B80ECu);
    ctx->pc = 0x1B80E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B80E4u;
    // 0x1b80e8: 0x3c100070  lui         $s0, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)112 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1B80E4u, 0x1B80ECu)) {
        return;
    }
    ctx->pc = 0x1B80ECu;
label_1b80ec:
    // 0x1b80ec: 0x3c0142c0  lui         $at, 0x42C0
    ctx->pc = 0x1b80ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17088 << 16));
    // 0x1b80f0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b80f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b80f4: 0x3c0142a0  lui         $at, 0x42A0
    ctx->pc = 0x1b80f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17056 << 16));
    // 0x1b80f8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b80f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b80fc: 0x3c0143b0  lui         $at, 0x43B0
    ctx->pc = 0x1b80fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17328 << 16));
    // 0x1b8100: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1b8100u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b8104: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x1b8104u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1b8108: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1b8108u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1b810c: 0xc085bc2  jal         func_216F08
    ctx->pc = 0x1B810Cu;
    SET_GPR_U32(ctx, 31, 0x1B8114u);
    ctx->pc = 0x1B8110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B810Cu;
    // 0x1b8110: 0xe7a20008  swc1        $f2, 0x8($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x216F08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x216F08u, 0x1B810Cu, 0x1B8114u)) {
        return;
    }
    ctx->pc = 0x1B8114u;
label_1b8114:
    // 0x1b8114: 0x3c01430c  lui         $at, 0x430C
    ctx->pc = 0x1b8114u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17164 << 16));
    // 0x1b8118: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b8118u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b811c: 0x0  nop
    ctx->pc = 0x1b811cu;
    // NOP
    // 0x1b8120: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1b8120u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1b8124: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x1b8124u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1b8128: 0x260586a0  addiu       $a1, $s0, -0x7960
    ctx->pc = 0x1b8128u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4294936224));
    // 0x1b812c: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x1b812cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1b8130: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x1b8130u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1b8134: 0x6ba3000f  ldl         $v1, 0xF($sp)
    ctx->pc = 0x1b8134u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1b8138: 0x6fa30008  ldr         $v1, 0x8($sp)
    ctx->pc = 0x1b8138u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1b813c: 0xb0a20007  sdl         $v0, 0x7($a1)
    ctx->pc = 0x1b813cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1b8140: 0xb4a20000  sdr         $v0, 0x0($a1)
    ctx->pc = 0x1b8140u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1b8144: 0xb0a3000f  sdl         $v1, 0xF($a1)
    ctx->pc = 0x1b8144u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1b8148: 0xb4a30008  sdr         $v1, 0x8($a1)
    ctx->pc = 0x1b8148u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1b814c:
    // 0x1b814c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1b814cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b8150: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b8150u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b8154: 0x3e00008  jr          $ra
    ctx->pc = 0x1B8154u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B8158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8154u;
        // 0x1b8158: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B8154u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B815Cu;
    // 0x1b815c: 0x0  nop
    ctx->pc = 0x1b815cu;
    // NOP
    // 0x1b8160: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1b8160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1b8164: 0x0  nop
    ctx->pc = 0x1b8164u;
    // NOP
    ctx->pc = 0x1b8168u;
}
