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

// Function: sub_001C1838
// Address: 0x1c1838 - 0x1c18e8
void sub_001C1838_0x1c1838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C1838_0x1c1838");
#endif

    switch (ctx->pc) {
        case 0x1c186cu: goto label_1c186c;
        case 0x1c18a8u: goto label_1c18a8;
        case 0x1c18bcu: goto label_1c18bc;
        default: break;
    }

    ctx->pc = 0x1c1838u;

    // 0x1c1838: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1c1838u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1c183c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x1c183cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1c1840: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1c1840u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x1c1844: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1c1844u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1c1848: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c1848u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c184c: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x1c184cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x1c1850: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1c1850u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1854: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1c1854u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x1c1858: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1c1858u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1c185c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c185cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1860: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1c1860u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1c1864: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1C1864u;
    SET_GPR_U32(ctx, 31, 0x1C186Cu);
    ctx->pc = 0x1C1868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1864u;
    // 0x1c1868: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1C1864u, 0x1C186Cu)) {
        return;
    }
    ctx->pc = 0x1C186Cu;
label_1c186c:
    // 0x1c186c: 0x92230253  lbu         $v1, 0x253($s1)
    ctx->pc = 0x1c186cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 595)));
    // 0x1c1870: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x1c1870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1c1874: 0xa3a20012  sb          $v0, 0x12($sp)
    ctx->pc = 0x1c1874u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 18), (uint8_t)GPR_U32(ctx, 2));
    // 0x1c1878: 0xa3a30013  sb          $v1, 0x13($sp)
    ctx->pc = 0x1c1878u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 19), (uint8_t)GPR_U32(ctx, 3));
    // 0x1c187c: 0xa3a20010  sb          $v0, 0x10($sp)
    ctx->pc = 0x1c187cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 2));
    // 0x1c1880: 0xa3a20011  sb          $v0, 0x11($sp)
    ctx->pc = 0x1c1880u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 17), (uint8_t)GPR_U32(ctx, 2));
    // 0x1c1884: 0x8e300318  lw          $s0, 0x318($s1)
    ctx->pc = 0x1c1884u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 792)));
    // 0x1c1888: 0x8ba20013  lwl         $v0, 0x13($sp)
    ctx->pc = 0x1c1888u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 19); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x1c188c: 0x9ba20010  lwr         $v0, 0x10($sp)
    ctx->pc = 0x1c188cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x1c1890: 0xaba20003  swl         $v0, 0x3($sp)
    ctx->pc = 0x1c1890u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1c1894: 0xbba20000  swr         $v0, 0x0($sp)
    ctx->pc = 0x1c1894u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1c1898: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x1C1898u;
    {
        const bool branch_taken_0x1c1898 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c1898) {
            ctx->pc = 0x1C189Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C1898u;
            // 0x1c189c: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C18CCu;
            goto label_1c18cc;
        }
    }
    ctx->pc = 0x1C18A0u;
    // 0x1c18a0: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x1c18a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c18a4: 0x0  nop
    ctx->pc = 0x1c18a4u;
    // NOP
label_1c18a8:
    // 0x1c18a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c18a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c18ac: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1c18acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c18b0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1c18b0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1c18b4: 0xc0701f0  jal         func_1C07C0
    ctx->pc = 0x1C18B4u;
    SET_GPR_U32(ctx, 31, 0x1C18BCu);
    ctx->pc = 0x1C18B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C18B4u;
    // 0x1c18b8: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C07C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1C07C0u, 0x1C18B4u, 0x1C18BCu)) {
        return;
    }
    ctx->pc = 0x1C18BCu;
label_1c18bc:
    // 0x1c18bc: 0x8e100004  lw          $s0, 0x4($s0)
    ctx->pc = 0x1c18bcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1c18c0: 0x5600fff9  bnel        $s0, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1C18C0u;
    {
        const bool branch_taken_0x1c18c0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c18c0) {
            ctx->pc = 0x1C18C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C18C0u;
            // 0x1c18c4: 0x8e060000  lw          $a2, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C18A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c18a8;
        }
    }
    ctx->pc = 0x1C18C8u;
    // 0x1c18c8: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1c18c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1c18cc:
    // 0x1c18cc: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1c18ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c18d0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1c18d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c18d4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1c18d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c18d8: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x1c18d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1c18dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1C18DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C18E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C18DCu;
        // 0x1c18e0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C18DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C18E4u;
    // 0x1c18e4: 0x0  nop
    ctx->pc = 0x1c18e4u;
    // NOP
    ctx->pc = 0x1c18e8u;
}
