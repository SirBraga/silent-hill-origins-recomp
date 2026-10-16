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

// Function: sub_00217510
// Address: 0x217510 - 0x217598
void sub_00217510_0x217510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00217510_0x217510");
#endif

    switch (ctx->pc) {
        case 0x21755cu: goto label_21755c;
        case 0x217578u: goto label_217578;
        default: break;
    }

    ctx->pc = 0x217510u;

    // 0x217510: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x217510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x217514: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x217514u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x217518: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x217518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x21751c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21751cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217520: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x217520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x217524: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x217524u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217528: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x217528u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x21752c: 0x68c20007  ldl         $v0, 0x7($a2)
    ctx->pc = 0x21752cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x217530: 0x6cc20000  ldr         $v0, 0x0($a2)
    ctx->pc = 0x217530u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x217534: 0x68c3000f  ldl         $v1, 0xF($a2)
    ctx->pc = 0x217534u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x217538: 0x6cc30008  ldr         $v1, 0x8($a2)
    ctx->pc = 0x217538u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x21753c: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x21753cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x217540: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x217540u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x217544: 0xb3a3000f  sdl         $v1, 0xF($sp)
    ctx->pc = 0x217544u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x217548: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x217548u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x21754c: 0xb7a30008  sdr         $v1, 0x8($sp)
    ctx->pc = 0x21754cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x217550: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x217550u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x217554: 0xc085d6e  jal         func_2175B8
    ctx->pc = 0x217554u;
    SET_GPR_U32(ctx, 31, 0x21755Cu);
    ctx->pc = 0x217558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217554u;
    // 0x217558: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2175B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2175B8u, 0x217554u, 0x21755Cu)) {
        return;
    }
    ctx->pc = 0x21755Cu;
label_21755c:
    // 0x21755c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x21755cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217560: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x217560u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x217564: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x217564u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217568: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x217568u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21756c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x21756cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217570: 0xc0855ee  jal         func_2157B8
    ctx->pc = 0x217570u;
    SET_GPR_U32(ctx, 31, 0x217578u);
    ctx->pc = 0x217574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217570u;
    // 0x217574: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2157B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2157B8u, 0x217570u, 0x217578u)) {
        return;
    }
    ctx->pc = 0x217578u;
label_217578:
    // 0x217578: 0x8e020270  lw          $v0, 0x270($s0)
    ctx->pc = 0x217578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 624)));
    // 0x21757c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x21757cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x217580: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x217580u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x217584: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x217584u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x217588: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x217588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x21758c: 0x3e00008  jr          $ra
    ctx->pc = 0x21758Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x217590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21758Cu;
        // 0x217590: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21758Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x217594u;
    // 0x217594: 0x0  nop
    ctx->pc = 0x217594u;
    // NOP
    ctx->pc = 0x217598u;
}
