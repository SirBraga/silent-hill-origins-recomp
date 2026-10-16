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

// Function: sub_00118AB8
// Address: 0x118ab8 - 0x119038
void sub_00118AB8_0x118ab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00118AB8_0x118ab8");
#endif

    switch (ctx->pc) {
        case 0x118ae0u: goto label_118ae0;
        case 0x118af4u: goto label_118af4;
        case 0x118b10u: goto label_118b10;
        case 0x118ba8u: goto label_118ba8;
        case 0x118c10u: goto label_118c10;
        case 0x118c34u: goto label_118c34;
        case 0x118c50u: goto label_118c50;
        case 0x118da4u: goto label_118da4;
        case 0x118ed8u: goto label_118ed8;
        case 0x118fdcu: goto label_118fdc;
        default: break;
    }

    ctx->pc = 0x118ab8u;

    // 0x118ab8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x118ab8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x118abc: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x118abcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x118ac0: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x118ac0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x118ac4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x118ac4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118ac8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x118ac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x118acc: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x118accu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x118ad0: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x118ad0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x118ad4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x118ad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x118ad8: 0xc04459c  jal         func_111670
    ctx->pc = 0x118AD8u;
    SET_GPR_U32(ctx, 31, 0x118AE0u);
    ctx->pc = 0x118ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118AD8u;
    // 0x118adc: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111670u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x111670u, 0x118AD8u, 0x118AE0u)) {
        return;
    }
    ctx->pc = 0x118AE0u;
label_118ae0:
    // 0x118ae0: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x118ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x118ae4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x118ae4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118ae8: 0x8c461a68  lw          $a2, 0x1A68($v0)
    ctx->pc = 0x118ae8u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x701A68u));
    // 0x118aec: 0xc07f1c0  jal         func_1FC700
    ctx->pc = 0x118AECu;
    SET_GPR_U32(ctx, 31, 0x118AF4u);
    ctx->pc = 0x118AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118AECu;
    // 0x118af0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC700u, 0x118AECu, 0x118AF4u)) {
        return;
    }
    ctx->pc = 0x118AF4u;
label_118af4:
    // 0x118af4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x118af4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x118af8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x118af8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x118afc: 0x10600048  beqz        $v1, . + 4 + (0x48 << 2)
    ctx->pc = 0x118AFCu;
    {
        const bool branch_taken_0x118afc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x118B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118AFCu;
        // 0x118b00: 0x27b30010  addiu       $s3, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118afc) {
            ctx->pc = 0x118C20u;
            goto label_118c20;
        }
    }
    ctx->pc = 0x118B04u;
    // 0x118b04: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x118b04u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x118b08: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x118b08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x118b0c: 0x8c510004  lw          $s1, 0x4($v0)
    ctx->pc = 0x118b0cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_118b10:
    // 0x118b10: 0x16340039  bne         $s1, $s4, . + 4 + (0x39 << 2)
    ctx->pc = 0x118B10u;
    {
        const bool branch_taken_0x118b10 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 20));
        ctx->pc = 0x118B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118B10u;
        // 0x118b14: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118b10) {
            ctx->pc = 0x118BF8u;
            goto label_118bf8;
        }
    }
    ctx->pc = 0x118B18u;
    // 0x118b18: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x118b18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x118b1c: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x118b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x118b20: 0x68430017  ldl         $v1, 0x17($v0)
    ctx->pc = 0x118b20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x118b24: 0x6c430010  ldr         $v1, 0x10($v0)
    ctx->pc = 0x118b24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x118b28: 0x6846001f  ldl         $a2, 0x1F($v0)
    ctx->pc = 0x118b28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x118b2c: 0x6c460018  ldr         $a2, 0x18($v0)
    ctx->pc = 0x118b2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x118b30: 0x68470027  ldl         $a3, 0x27($v0)
    ctx->pc = 0x118b30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x118b34: 0x6c470020  ldr         $a3, 0x20($v0)
    ctx->pc = 0x118b34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x118b38: 0x6848002f  ldl         $t0, 0x2F($v0)
    ctx->pc = 0x118b38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x118b3c: 0x6c480028  ldr         $t0, 0x28($v0)
    ctx->pc = 0x118b3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x118b40: 0xb2030117  sdl         $v1, 0x117($s0)
    ctx->pc = 0x118b40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 279); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x118b44: 0xb6030110  sdr         $v1, 0x110($s0)
    ctx->pc = 0x118b44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 272); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x118b48: 0xb206011f  sdl         $a2, 0x11F($s0)
    ctx->pc = 0x118b48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 287); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x118b4c: 0xb6060118  sdr         $a2, 0x118($s0)
    ctx->pc = 0x118b4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 280); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x118b50: 0xb2070127  sdl         $a3, 0x127($s0)
    ctx->pc = 0x118b50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 295); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x118b54: 0xb6070120  sdr         $a3, 0x120($s0)
    ctx->pc = 0x118b54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 288); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x118b58: 0xb208012f  sdl         $t0, 0x12F($s0)
    ctx->pc = 0x118b58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 303); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x118b5c: 0xb6080128  sdr         $t0, 0x128($s0)
    ctx->pc = 0x118b5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 296); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x118b60: 0x68430037  ldl         $v1, 0x37($v0)
    ctx->pc = 0x118b60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x118b64: 0x6c430030  ldr         $v1, 0x30($v0)
    ctx->pc = 0x118b64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x118b68: 0x6846003f  ldl         $a2, 0x3F($v0)
    ctx->pc = 0x118b68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x118b6c: 0x6c460038  ldr         $a2, 0x38($v0)
    ctx->pc = 0x118b6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x118b70: 0x68470047  ldl         $a3, 0x47($v0)
    ctx->pc = 0x118b70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x118b74: 0x6c470040  ldr         $a3, 0x40($v0)
    ctx->pc = 0x118b74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x118b78: 0x6848004f  ldl         $t0, 0x4F($v0)
    ctx->pc = 0x118b78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 79); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x118b7c: 0x6c480048  ldr         $t0, 0x48($v0)
    ctx->pc = 0x118b7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 72); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x118b80: 0xb2030137  sdl         $v1, 0x137($s0)
    ctx->pc = 0x118b80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 311); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x118b84: 0xb6030130  sdr         $v1, 0x130($s0)
    ctx->pc = 0x118b84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 304); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x118b88: 0xb206013f  sdl         $a2, 0x13F($s0)
    ctx->pc = 0x118b88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 319); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x118b8c: 0xb6060138  sdr         $a2, 0x138($s0)
    ctx->pc = 0x118b8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 312); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x118b90: 0xb2070147  sdl         $a3, 0x147($s0)
    ctx->pc = 0x118b90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 327); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x118b94: 0xb6070140  sdr         $a3, 0x140($s0)
    ctx->pc = 0x118b94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 320); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x118b98: 0xb208014f  sdl         $t0, 0x14F($s0)
    ctx->pc = 0x118b98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 335); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x118b9c: 0xb6080148  sdr         $t0, 0x148($s0)
    ctx->pc = 0x118b9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 328); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x118ba0: 0xc092e7c  jal         func_24B9F0
    ctx->pc = 0x118BA0u;
    SET_GPR_U32(ctx, 31, 0x118BA8u);
    ctx->pc = 0x118BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118BA0u;
    // 0x118ba4: 0x26050110  addiu       $a1, $s0, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B9F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24B9F0u, 0x118BA0u, 0x118BA8u)) {
        return;
    }
    ctx->pc = 0x118BA8u;
label_118ba8:
    // 0x118ba8: 0x6a020147  ldl         $v0, 0x147($s0)
    ctx->pc = 0x118ba8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 327); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x118bac: 0x6e020140  ldr         $v0, 0x140($s0)
    ctx->pc = 0x118bacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 320); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x118bb0: 0x8e030148  lw          $v1, 0x148($s0)
    ctx->pc = 0x118bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x118bb4: 0xb20200db  sdl         $v0, 0xDB($s0)
    ctx->pc = 0x118bb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 219); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x118bb8: 0xb60200d4  sdr         $v0, 0xD4($s0)
    ctx->pc = 0x118bb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 212); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x118bbc: 0xae0300dc  sw          $v1, 0xDC($s0)
    ctx->pc = 0x118bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 3));
    // 0x118bc0: 0x6a060147  ldl         $a2, 0x147($s0)
    ctx->pc = 0x118bc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 327); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x118bc4: 0x6e060140  ldr         $a2, 0x140($s0)
    ctx->pc = 0x118bc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 320); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x118bc8: 0x8e070148  lw          $a3, 0x148($s0)
    ctx->pc = 0x118bc8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x118bcc: 0xb20600e7  sdl         $a2, 0xE7($s0)
    ctx->pc = 0x118bccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 231); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x118bd0: 0xb60600e0  sdr         $a2, 0xE0($s0)
    ctx->pc = 0x118bd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 224); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x118bd4: 0xae0700e8  sw          $a3, 0xE8($s0)
    ctx->pc = 0x118bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 7));
    // 0x118bd8: 0x6a030147  ldl         $v1, 0x147($s0)
    ctx->pc = 0x118bd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 327); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x118bdc: 0x6e030140  ldr         $v1, 0x140($s0)
    ctx->pc = 0x118bdcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 320); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x118be0: 0x8e040148  lw          $a0, 0x148($s0)
    ctx->pc = 0x118be0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x118be4: 0xb20300f3  sdl         $v1, 0xF3($s0)
    ctx->pc = 0x118be4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 243); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x118be8: 0xb60300ec  sdr         $v1, 0xEC($s0)
    ctx->pc = 0x118be8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 236); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x118bec: 0xae0400f4  sw          $a0, 0xF4($s0)
    ctx->pc = 0x118becu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 244), GPR_U32(ctx, 4));
    // 0x118bf0: 0xae11020c  sw          $s1, 0x20C($s0)
    ctx->pc = 0x118bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 524), GPR_U32(ctx, 17));
    // 0x118bf4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x118bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_118bf8:
    // 0x118bf8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x118bf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118bfc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x118bfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x118c00: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x118c00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x118c04: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x118c04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x118c08: 0xc07f0c8  jal         func_1FC320
    ctx->pc = 0x118C08u;
    SET_GPR_U32(ctx, 31, 0x118C10u);
    ctx->pc = 0x118C0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118C08u;
    // 0x118c0c: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC320u, 0x118C08u, 0x118C10u)) {
        return;
    }
    ctx->pc = 0x118C10u;
label_118c10:
    // 0x118c10: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x118c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x118c14: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x118c14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x118c18: 0x5460ffbd  bnel        $v1, $zero, . + 4 + (-0x43 << 2)
    ctx->pc = 0x118C18u;
    {
        const bool branch_taken_0x118c18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x118c18) {
            ctx->pc = 0x118C1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x118C18u;
            // 0x118c1c: 0x8c510004  lw          $s1, 0x4($v0) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x118B10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_118b10;
        }
    }
    ctx->pc = 0x118C20u;
label_118c20:
    // 0x118c20: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x118c20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x118c24: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x118c24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118c28: 0x8c464528  lw          $a2, 0x4528($v0)
    ctx->pc = 0x118c28u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x6B4528u));
    // 0x118c2c: 0xc07f1c0  jal         func_1FC700
    ctx->pc = 0x118C2Cu;
    SET_GPR_U32(ctx, 31, 0x118C34u);
    ctx->pc = 0x118C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118C2Cu;
    // 0x118c30: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC700u, 0x118C2Cu, 0x118C34u)) {
        return;
    }
    ctx->pc = 0x118C34u;
label_118c34:
    // 0x118c34: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x118c34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x118c38: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x118c38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x118c3c: 0x504000ec  beql        $v0, $zero, . + 4 + (0xEC << 2)
    ctx->pc = 0x118C3Cu;
    {
        const bool branch_taken_0x118c3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x118c3c) {
            ctx->pc = 0x118C40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x118C3Cu;
            // 0x118c40: 0xc6030250  lwc1        $f3, 0x250($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x118FF0u;
            goto label_118ff0;
        }
    }
    ctx->pc = 0x118C44u;
    // 0x118c44: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x118c44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x118c48: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x118c48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x118c4c: 0x0  nop
    ctx->pc = 0x118c4cu;
    // NOP
label_118c50:
    // 0x118c50: 0x2c830023  sltiu       $v1, $a0, 0x23
    ctx->pc = 0x118c50u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)35) ? 1 : 0);
    // 0x118c54: 0x106000da  beqz        $v1, . + 4 + (0xDA << 2)
    ctx->pc = 0x118C54u;
    {
        const bool branch_taken_0x118c54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x118C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118C54u;
        // 0x118c58: 0x3c020069  lui         $v0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118c54) {
            ctx->pc = 0x118FC0u;
            goto label_118fc0;
        }
    }
    ctx->pc = 0x118C5Cu;
    // 0x118c5c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x118c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x118c60: 0x2442aca0  addiu       $v0, $v0, -0x5360
    ctx->pc = 0x118c60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945952));
    // 0x118c64: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x118c64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x118c68: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x118c68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x118c6c: 0x800008  jr          $a0
    ctx->pc = 0x118C6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x118C74u: goto label_118c74;
            case 0x118C84u: goto label_118c84;
            case 0x118C94u: goto label_118c94;
            case 0x118CA4u: goto label_118ca4;
            case 0x118CB4u: goto label_118cb4;
            case 0x118CC4u: goto label_118cc4;
            case 0x118CD4u: goto label_118cd4;
            case 0x118CE4u: goto label_118ce4;
            case 0x118CF4u: goto label_118cf4;
            case 0x118D04u: goto label_118d04;
            case 0x118D14u: goto label_118d14;
            case 0x118D24u: goto label_118d24;
            case 0x118D34u: goto label_118d34;
            case 0x118D48u: goto label_118d48;
            case 0x118D68u: goto label_118d68;
            case 0x118D78u: goto label_118d78;
            case 0x118DB8u: goto label_118db8;
            case 0x118DC8u: goto label_118dc8;
            case 0x118DD8u: goto label_118dd8;
            case 0x118DE8u: goto label_118de8;
            case 0x118DF8u: goto label_118df8;
            case 0x118E18u: goto label_118e18;
            case 0x118E38u: goto label_118e38;
            case 0x118E58u: goto label_118e58;
            case 0x118EACu: goto label_118eac;
            case 0x118EE0u: goto label_118ee0;
            case 0x118EF0u: goto label_118ef0;
            case 0x118F10u: goto label_118f10;
            case 0x118F20u: goto label_118f20;
            case 0x118F30u: goto label_118f30;
            case 0x118F50u: goto label_118f50;
            case 0x118F70u: goto label_118f70;
            case 0x118F84u: goto label_118f84;
            case 0x118FA4u: goto label_118fa4;
            case 0x118FB4u: goto label_118fb4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x118C6Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x118C74u;
label_118c74:
    // 0x118c74: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x118c74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x118c78: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x118c78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x118c7c: 0x100000d0  b           . + 4 + (0xD0 << 2)
    ctx->pc = 0x118C7Cu;
    {
        const bool branch_taken_0x118c7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118C7Cu;
        // 0x118c80: 0xe6000090  swc1        $f0, 0x90($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x118c7c) {
            ctx->pc = 0x118FC0u;
            goto label_118fc0;
        }
    }
    ctx->pc = 0x118C84u;
label_118c84:
    // 0x118c84: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x118c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x118c88: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x118c88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x118c8c: 0x100000cc  b           . + 4 + (0xCC << 2)
    ctx->pc = 0x118C8Cu;
    {
        const bool branch_taken_0x118c8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118C8Cu;
        // 0x118c90: 0xe6000094  swc1        $f0, 0x94($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x118c8c) {
            ctx->pc = 0x118FC0u;
            goto label_118fc0;
        }
    }
    ctx->pc = 0x118C94u;
label_118c94:
    // 0x118c94: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x118c94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x118c98: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x118c98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x118c9c: 0x100000c8  b           . + 4 + (0xC8 << 2)
    ctx->pc = 0x118C9Cu;
    {
        const bool branch_taken_0x118c9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118C9Cu;
        // 0x118ca0: 0xae0300cc  sw          $v1, 0xCC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 204), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118c9c) {
            ctx->pc = 0x118FC0u;
            goto label_118fc0;
        }
    }
    ctx->pc = 0x118CA4u;
label_118ca4:
    // 0x118ca4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x118ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x118ca8: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x118ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x118cac: 0x100000c4  b           . + 4 + (0xC4 << 2)
    ctx->pc = 0x118CACu;
    {
        const bool branch_taken_0x118cac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118CACu;
        // 0x118cb0: 0xae0300d0  sw          $v1, 0xD0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118cac) {
            ctx->pc = 0x118FC0u;
            goto label_118fc0;
        }
    }
    ctx->pc = 0x118CB4u;
label_118cb4:
    // 0x118cb4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x118cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x118cb8: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x118cb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x118cbc: 0x100000c0  b           . + 4 + (0xC0 << 2)
    ctx->pc = 0x118CBCu;
    {
        const bool branch_taken_0x118cbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118CBCu;
        // 0x118cc0: 0xe600021c  swc1        $f0, 0x21C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 540), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x118cbc) {
            ctx->pc = 0x118FC0u;
            goto label_118fc0;
        }
    }
    ctx->pc = 0x118CC4u;
label_118cc4:
    // 0x118cc4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x118cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x118cc8: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x118cc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x118ccc: 0x100000bc  b           . + 4 + (0xBC << 2)
    ctx->pc = 0x118CCCu;
    {
        const bool branch_taken_0x118ccc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118CCCu;
        // 0x118cd0: 0xe600023c  swc1        $f0, 0x23C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 572), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x118ccc) {
            ctx->pc = 0x118FC0u;
            goto label_118fc0;
        }
    }
    ctx->pc = 0x118CD4u;
label_118cd4:
    // 0x118cd4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x118cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x118cd8: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x118cd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x118cdc: 0x100000b8  b           . + 4 + (0xB8 << 2)
    ctx->pc = 0x118CDCu;
    {
        const bool branch_taken_0x118cdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118CDCu;
        // 0x118ce0: 0xe6000240  swc1        $f0, 0x240($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 576), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x118cdc) {
            ctx->pc = 0x118FC0u;
            goto label_118fc0;
        }
    }
    ctx->pc = 0x118CE4u;
label_118ce4:
    // 0x118ce4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x118ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x118ce8: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x118ce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x118cec: 0x100000b4  b           . + 4 + (0xB4 << 2)
    ctx->pc = 0x118CECu;
    {
        const bool branch_taken_0x118cec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118CECu;
        // 0x118cf0: 0xe6000244  swc1        $f0, 0x244($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 580), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x118cec) {
            ctx->pc = 0x118FC0u;
            goto label_118fc0;
        }
    }
    ctx->pc = 0x118CF4u;
label_118cf4:
    // 0x118cf4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x118cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x118cf8: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x118cf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x118cfc: 0x100000b0  b           . + 4 + (0xB0 << 2)
    ctx->pc = 0x118CFCu;
    {
        const bool branch_taken_0x118cfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118CFCu;
        // 0x118d00: 0xe6000248  swc1        $f0, 0x248($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 584), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x118cfc) {
            ctx->pc = 0x118FC0u;
            goto label_118fc0;
        }
    }
    ctx->pc = 0x118D04u;
label_118d04:
    // 0x118d04: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x118d04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x118d08: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x118d08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x118d0c: 0x100000ac  b           . + 4 + (0xAC << 2)
    ctx->pc = 0x118D0Cu;
    {
        const bool branch_taken_0x118d0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118D0Cu;
        // 0x118d10: 0xe600024c  swc1        $f0, 0x24C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 588), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x118d0c) {
            ctx->pc = 0x118FC0u;
            goto label_118fc0;
        }
    }
    ctx->pc = 0x118D14u;
label_118d14:
    // 0x118d14: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x118d14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x118d18: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x118d18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x118d1c: 0x100000a8  b           . + 4 + (0xA8 << 2)
    ctx->pc = 0x118D1Cu;
    {
        const bool branch_taken_0x118d1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118D1Cu;
        // 0x118d20: 0xe6000220  swc1        $f0, 0x220($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 544), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x118d1c) {
            ctx->pc = 0x118FC0u;
            goto label_118fc0;
        }
    }
    ctx->pc = 0x118D24u;
label_118d24:
    // 0x118d24: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x118d24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x118d28: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x118d28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x118d2c: 0x100000a4  b           . + 4 + (0xA4 << 2)
    ctx->pc = 0x118D2Cu;
    {
        const bool branch_taken_0x118d2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118D2Cu;
        // 0x118d30: 0xe6000224  swc1        $f0, 0x224($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 548), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x118d2c) {
            ctx->pc = 0x118FC0u;
            goto label_118fc0;
        }
    }
    ctx->pc = 0x118D34u;
label_118d34:
    // 0x118d34: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x118d34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x118d38: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x118d38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x118d3c: 0xe6000254  swc1        $f0, 0x254($s0)
    ctx->pc = 0x118d3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 596), bits); }
    // 0x118d40: 0x1000009f  b           . + 4 + (0x9F << 2)
    ctx->pc = 0x118D40u;
    {
        const bool branch_taken_0x118d40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118D40u;
        // 0x118d44: 0xe6000250  swc1        $f0, 0x250($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 592), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x118d40) {
            ctx->pc = 0x118FC0u;
            goto label_118fc0;
        }
    }
    ctx->pc = 0x118D48u;
label_118d48:
    // 0x118d48: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x118d48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x118d4c: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x118d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x118d50: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x118D50u;
    {
        const bool branch_taken_0x118d50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x118D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118D50u;
        // 0x118d54: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118d50) {
            ctx->pc = 0x118D60u;
            goto label_118d60;
        }
    }
    ctx->pc = 0x118D58u;
    // 0x118d58: 0x10000099  b           . + 4 + (0x99 << 2)
    ctx->pc = 0x118D58u;
    {
        const bool branch_taken_0x118d58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118D58u;
        // 0x118d5c: 0xae020258  sw          $v0, 0x258($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 600), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118d58) {
            ctx->pc = 0x118FC0u;
            goto label_118fc0;
        }
    }
    ctx->pc = 0x118D60u;
label_118d60:
    // 0x118d60: 0x10000097  b           . + 4 + (0x97 << 2)
    ctx->pc = 0x118D60u;
    {
        const bool branch_taken_0x118d60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118D60u;
        // 0x118d64: 0xae000258  sw          $zero, 0x258($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 600), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118d60) {
            ctx->pc = 0x118FC0u;
            goto label_118fc0;
        }
    }
    ctx->pc = 0x118D68u;
label_118d68:
    // 0x118d68: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x118d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x118d6c: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x118d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x118d70: 0x10000093  b           . + 4 + (0x93 << 2)
    ctx->pc = 0x118D70u;
    {
        const bool branch_taken_0x118d70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118D70u;
        // 0x118d74: 0xae03025c  sw          $v1, 0x25C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 604), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118d70) {
            ctx->pc = 0x118FC0u;
            goto label_118fc0;
        }
    }
    ctx->pc = 0x118D78u;
label_118d78:
    // 0x118d78: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x118d78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x118d7c: 0x3c014265  lui         $at, 0x4265
    ctx->pc = 0x118d7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16997 << 16));
    // 0x118d80: 0x34212ee1  ori         $at, $at, 0x2EE1
    ctx->pc = 0x118d80u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12001);
    // 0x118d84: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x118d84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x118d88: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x118d88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x118d8c: 0x0  nop
    ctx->pc = 0x118d8cu;
    // NOP
    // 0x118d90: 0x0  nop
    ctx->pc = 0x118d90u;
    // NOP
    // 0x118d94: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x118d94u;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[1]);
    // 0x118d98: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x118d98u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x118d9c: 0xc09b0e8  jal         func_26C3A0
    ctx->pc = 0x118D9Cu;
    SET_GPR_U32(ctx, 31, 0x118DA4u);
    ctx->pc = 0x118DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118D9Cu;
    // 0x118da0: 0xe6000268  swc1        $f0, 0x268($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 616), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C3A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26C3A0u, 0x118D9Cu, 0x118DA4u)) {
        return;
    }
    ctx->pc = 0x118DA4u;
label_118da4:
    // 0x118da4: 0xc6010268  lwc1        $f1, 0x268($s0)
    ctx->pc = 0x118da4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x118da8: 0xe6000264  swc1        $f0, 0x264($s0)
    ctx->pc = 0x118da8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 612), bits); }
    // 0x118dac: 0xe6010260  swc1        $f1, 0x260($s0)
    ctx->pc = 0x118dacu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 608), bits); }
    // 0x118db0: 0x10000083  b           . + 4 + (0x83 << 2)
    ctx->pc = 0x118DB0u;
    {
        const bool branch_taken_0x118db0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118DB0u;
        // 0x118db4: 0xe600026c  swc1        $f0, 0x26C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 620), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x118db0) {
            ctx->pc = 0x118FC0u;
            goto label_118fc0;
        }
    }
    ctx->pc = 0x118DB8u;
label_118db8:
    // 0x118db8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x118db8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x118dbc: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x118dbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x118dc0: 0x1000007f  b           . + 4 + (0x7F << 2)
    ctx->pc = 0x118DC0u;
    {
        const bool branch_taken_0x118dc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118DC0u;
        // 0x118dc4: 0xe60001d0  swc1        $f0, 0x1D0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 464), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x118dc0) {
            ctx->pc = 0x118FC0u;
            goto label_118fc0;
        }
    }
    ctx->pc = 0x118DC8u;
label_118dc8:
    // 0x118dc8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x118dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x118dcc: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x118dccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x118dd0: 0x1000007b  b           . + 4 + (0x7B << 2)
    ctx->pc = 0x118DD0u;
    {
        const bool branch_taken_0x118dd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118DD0u;
        // 0x118dd4: 0xe60001d4  swc1        $f0, 0x1D4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 468), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x118dd0) {
            ctx->pc = 0x118FC0u;
            goto label_118fc0;
        }
    }
    ctx->pc = 0x118DD8u;
label_118dd8:
    // 0x118dd8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x118dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x118ddc: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x118ddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x118de0: 0x10000077  b           . + 4 + (0x77 << 2)
    ctx->pc = 0x118DE0u;
    {
        const bool branch_taken_0x118de0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118DE0u;
        // 0x118de4: 0xe60001d8  swc1        $f0, 0x1D8($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 472), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x118de0) {
            ctx->pc = 0x118FC0u;
            goto label_118fc0;
        }
    }
    ctx->pc = 0x118DE8u;
label_118de8:
    // 0x118de8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x118de8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x118dec: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x118decu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x118df0: 0x10000073  b           . + 4 + (0x73 << 2)
    ctx->pc = 0x118DF0u;
    {
        const bool branch_taken_0x118df0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118DF0u;
        // 0x118df4: 0xe6000228  swc1        $f0, 0x228($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 552), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x118df0) {
            ctx->pc = 0x118FC0u;
            goto label_118fc0;
        }
    }
    ctx->pc = 0x118DF8u;
label_118df8:
    // 0x118df8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x118df8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x118dfc: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x118dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x118e00: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x118E00u;
    {
        const bool branch_taken_0x118e00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x118E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118E00u;
        // 0x118e04: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118e00) {
            ctx->pc = 0x118E10u;
            goto label_118e10;
        }
    }
    ctx->pc = 0x118E08u;
    // 0x118e08: 0x1000006d  b           . + 4 + (0x6D << 2)
    ctx->pc = 0x118E08u;
    {
        const bool branch_taken_0x118e08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118E08u;
        // 0x118e0c: 0xae020238  sw          $v0, 0x238($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 568), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118e08) {
            ctx->pc = 0x118FC0u;
            goto label_118fc0;
        }
    }
    ctx->pc = 0x118E10u;
label_118e10:
    // 0x118e10: 0x1000006b  b           . + 4 + (0x6B << 2)
    ctx->pc = 0x118E10u;
    {
        const bool branch_taken_0x118e10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118E10u;
        // 0x118e14: 0xae000238  sw          $zero, 0x238($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 568), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118e10) {
            ctx->pc = 0x118FC0u;
            goto label_118fc0;
        }
    }
    ctx->pc = 0x118E18u;
label_118e18:
    // 0x118e18: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x118e18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x118e1c: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x118e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x118e20: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x118E20u;
    {
        const bool branch_taken_0x118e20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x118E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118E20u;
        // 0x118e24: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118e20) {
            ctx->pc = 0x118E30u;
            goto label_118e30;
        }
    }
    ctx->pc = 0x118E28u;
    // 0x118e28: 0x10000065  b           . + 4 + (0x65 << 2)
    ctx->pc = 0x118E28u;
    {
        const bool branch_taken_0x118e28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118E28u;
        // 0x118e2c: 0xae020280  sw          $v0, 0x280($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 640), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118e28) {
            ctx->pc = 0x118FC0u;
            goto label_118fc0;
        }
    }
    ctx->pc = 0x118E30u;
label_118e30:
    // 0x118e30: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x118E30u;
    {
        const bool branch_taken_0x118e30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118E30u;
        // 0x118e34: 0xae000280  sw          $zero, 0x280($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 640), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118e30) {
            ctx->pc = 0x118FC0u;
            goto label_118fc0;
        }
    }
    ctx->pc = 0x118E38u;
label_118e38:
    // 0x118e38: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x118e38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x118e3c: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x118e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x118e40: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x118E40u;
    {
        const bool branch_taken_0x118e40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x118E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118E40u;
        // 0x118e44: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118e40) {
            ctx->pc = 0x118E50u;
            goto label_118e50;
        }
    }
    ctx->pc = 0x118E48u;
    // 0x118e48: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x118E48u;
    {
        const bool branch_taken_0x118e48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118E48u;
        // 0x118e4c: 0xae02028c  sw          $v0, 0x28C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 652), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118e48) {
            ctx->pc = 0x118FC0u;
            goto label_118fc0;
        }
    }
    ctx->pc = 0x118E50u;
label_118e50:
    // 0x118e50: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x118E50u;
    {
        const bool branch_taken_0x118e50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118E50u;
        // 0x118e54: 0xae00028c  sw          $zero, 0x28C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 652), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118e50) {
            ctx->pc = 0x118FC0u;
            goto label_118fc0;
        }
    }
    ctx->pc = 0x118E58u;
label_118e58:
    // 0x118e58: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x118e58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x118e5c: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x118e5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x118e60: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x118e60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x118e64: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x118e64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x118e68: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x118e68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x118e6c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x118e6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x118e70: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x118e70u;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[1]);
    // 0x118e74: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x118e74u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x118e78: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x118e78u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x118e7c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x118e7cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x118e80: 0x0  nop
    ctx->pc = 0x118e80u;
    // NOP
    // 0x118e84: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x118E84u;
    {
        const bool branch_taken_0x118e84 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x118E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118E84u;
        // 0x118e88: 0xe6000290  swc1        $f0, 0x290($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 656), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x118e84) {
            ctx->pc = 0x118E90u;
            goto label_118e90;
        }
    }
    ctx->pc = 0x118E8Cu;
    // 0x118e8c: 0xe6010290  swc1        $f1, 0x290($s0)
    ctx->pc = 0x118e8cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 656), bits); }
label_118e90:
    // 0x118e90: 0xc6000290  lwc1        $f0, 0x290($s0)
    ctx->pc = 0x118e90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 656)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x118e94: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x118e94u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x118e98: 0x0  nop
    ctx->pc = 0x118e98u;
    // NOP
    // 0x118e9c: 0x45030048  bc1tl       . + 4 + (0x48 << 2)
    ctx->pc = 0x118E9Cu;
    {
        const bool branch_taken_0x118e9c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x118e9c) {
            ctx->pc = 0x118EA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x118E9Cu;
            // 0x118ea0: 0xe6020290  swc1        $f2, 0x290($s0) (Delay Slot)
            { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 656), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x118FC0u;
            goto label_118fc0;
        }
    }
    ctx->pc = 0x118EA4u;
    // 0x118ea4: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x118EA4u;
    {
        const bool branch_taken_0x118ea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118EA4u;
        // 0x118ea8: 0x8fa30010  lw          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118ea4) {
            ctx->pc = 0x118FC4u;
            goto label_118fc4;
        }
    }
    ctx->pc = 0x118EACu;
label_118eac:
    // 0x118eac: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x118eacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x118eb0: 0x3c014265  lui         $at, 0x4265
    ctx->pc = 0x118eb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16997 << 16));
    // 0x118eb4: 0x34212ee1  ori         $at, $at, 0x2EE1
    ctx->pc = 0x118eb4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12001);
    // 0x118eb8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x118eb8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x118ebc: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x118ebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x118ec0: 0x0  nop
    ctx->pc = 0x118ec0u;
    // NOP
    // 0x118ec4: 0x0  nop
    ctx->pc = 0x118ec4u;
    // NOP
    // 0x118ec8: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x118ec8u;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[1]);
    // 0x118ecc: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x118eccu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x118ed0: 0xc09b0e8  jal         func_26C3A0
    ctx->pc = 0x118ED0u;
    SET_GPR_U32(ctx, 31, 0x118ED8u);
    ctx->pc = 0x118ED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118ED0u;
    // 0x118ed4: 0xe6000294  swc1        $f0, 0x294($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 660), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C3A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26C3A0u, 0x118ED0u, 0x118ED8u)) {
        return;
    }
    ctx->pc = 0x118ED8u;
label_118ed8:
    // 0x118ed8: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x118ED8u;
    {
        const bool branch_taken_0x118ed8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118ED8u;
        // 0x118edc: 0xe6000298  swc1        $f0, 0x298($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 664), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x118ed8) {
            ctx->pc = 0x118FC0u;
            goto label_118fc0;
        }
    }
    ctx->pc = 0x118EE0u;
label_118ee0:
    // 0x118ee0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x118ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x118ee4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x118ee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x118ee8: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x118EE8u;
    {
        const bool branch_taken_0x118ee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118EE8u;
        // 0x118eec: 0xe600009c  swc1        $f0, 0x9C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x118ee8) {
            ctx->pc = 0x118FC0u;
            goto label_118fc0;
        }
    }
    ctx->pc = 0x118EF0u;
label_118ef0:
    // 0x118ef0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x118ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x118ef4: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x118ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x118ef8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x118EF8u;
    {
        const bool branch_taken_0x118ef8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x118EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118EF8u;
        // 0x118efc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118ef8) {
            ctx->pc = 0x118F08u;
            goto label_118f08;
        }
    }
    ctx->pc = 0x118F00u;
    // 0x118f00: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x118F00u;
    {
        const bool branch_taken_0x118f00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118F00u;
        // 0x118f04: 0xae0200a0  sw          $v0, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118f00) {
            ctx->pc = 0x118FC0u;
            goto label_118fc0;
        }
    }
    ctx->pc = 0x118F08u;
label_118f08:
    // 0x118f08: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x118F08u;
    {
        const bool branch_taken_0x118f08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118F08u;
        // 0x118f0c: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118f08) {
            ctx->pc = 0x118FC0u;
            goto label_118fc0;
        }
    }
    ctx->pc = 0x118F10u;
label_118f10:
    // 0x118f10: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x118f10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x118f14: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x118f14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x118f18: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x118F18u;
    {
        const bool branch_taken_0x118f18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118F18u;
        // 0x118f1c: 0xe60000a4  swc1        $f0, 0xA4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 164), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x118f18) {
            ctx->pc = 0x118FC0u;
            goto label_118fc0;
        }
    }
    ctx->pc = 0x118F20u;
label_118f20:
    // 0x118f20: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x118f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x118f24: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x118f24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x118f28: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x118F28u;
    {
        const bool branch_taken_0x118f28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118F28u;
        // 0x118f2c: 0xe60002ac  swc1        $f0, 0x2AC($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 684), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x118f28) {
            ctx->pc = 0x118FC0u;
            goto label_118fc0;
        }
    }
    ctx->pc = 0x118F30u;
label_118f30:
    // 0x118f30: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x118f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x118f34: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x118f34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x118f38: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x118F38u;
    {
        const bool branch_taken_0x118f38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x118F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118F38u;
        // 0x118f3c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118f38) {
            ctx->pc = 0x118F48u;
            goto label_118f48;
        }
    }
    ctx->pc = 0x118F40u;
    // 0x118f40: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x118F40u;
    {
        const bool branch_taken_0x118f40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118F40u;
        // 0x118f44: 0xae0202b0  sw          $v0, 0x2B0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 688), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118f40) {
            ctx->pc = 0x118FC0u;
            goto label_118fc0;
        }
    }
    ctx->pc = 0x118F48u;
label_118f48:
    // 0x118f48: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x118F48u;
    {
        const bool branch_taken_0x118f48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118F48u;
        // 0x118f4c: 0xae0002b0  sw          $zero, 0x2B0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 688), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118f48) {
            ctx->pc = 0x118FC0u;
            goto label_118fc0;
        }
    }
    ctx->pc = 0x118F50u;
label_118f50:
    // 0x118f50: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x118f50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x118f54: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x118f54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x118f58: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x118F58u;
    {
        const bool branch_taken_0x118f58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x118F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118F58u;
        // 0x118f5c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118f58) {
            ctx->pc = 0x118F68u;
            goto label_118f68;
        }
    }
    ctx->pc = 0x118F60u;
    // 0x118f60: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x118F60u;
    {
        const bool branch_taken_0x118f60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118F60u;
        // 0x118f64: 0xae0202b8  sw          $v0, 0x2B8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 696), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118f60) {
            ctx->pc = 0x118FC0u;
            goto label_118fc0;
        }
    }
    ctx->pc = 0x118F68u;
label_118f68:
    // 0x118f68: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x118F68u;
    {
        const bool branch_taken_0x118f68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118F68u;
        // 0x118f6c: 0xae0002b8  sw          $zero, 0x2B8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 696), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118f68) {
            ctx->pc = 0x118FC0u;
            goto label_118fc0;
        }
    }
    ctx->pc = 0x118F70u;
label_118f70:
    // 0x118f70: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x118f70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x118f74: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x118f74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x118f78: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x118f78u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x118f7c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x118F7Cu;
    {
        const bool branch_taken_0x118f7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118F7Cu;
        // 0x118f80: 0xe60002bc  swc1        $f0, 0x2BC($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 700), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x118f7c) {
            ctx->pc = 0x118FC0u;
            goto label_118fc0;
        }
    }
    ctx->pc = 0x118F84u;
label_118f84:
    // 0x118f84: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x118f84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x118f88: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x118f88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x118f8c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x118F8Cu;
    {
        const bool branch_taken_0x118f8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x118F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118F8Cu;
        // 0x118f90: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118f8c) {
            ctx->pc = 0x118F9Cu;
            goto label_118f9c;
        }
    }
    ctx->pc = 0x118F94u;
    // 0x118f94: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x118F94u;
    {
        const bool branch_taken_0x118f94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118F94u;
        // 0x118f98: 0xae0202a4  sw          $v0, 0x2A4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 676), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118f94) {
            ctx->pc = 0x118FC0u;
            goto label_118fc0;
        }
    }
    ctx->pc = 0x118F9Cu;
label_118f9c:
    // 0x118f9c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x118F9Cu;
    {
        const bool branch_taken_0x118f9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118F9Cu;
        // 0x118fa0: 0xae0002a4  sw          $zero, 0x2A4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 676), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118f9c) {
            ctx->pc = 0x118FC0u;
            goto label_118fc0;
        }
    }
    ctx->pc = 0x118FA4u;
label_118fa4:
    // 0x118fa4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x118fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x118fa8: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x118fa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x118fac: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x118FACu;
    {
        const bool branch_taken_0x118fac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118FACu;
        // 0x118fb0: 0xe600029c  swc1        $f0, 0x29C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 668), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x118fac) {
            ctx->pc = 0x118FC0u;
            goto label_118fc0;
        }
    }
    ctx->pc = 0x118FB4u;
label_118fb4:
    // 0x118fb4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x118fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x118fb8: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x118fb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x118fbc: 0xe60002a0  swc1        $f0, 0x2A0($s0)
    ctx->pc = 0x118fbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 672), bits); }
label_118fc0:
    // 0x118fc0: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x118fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_118fc4:
    // 0x118fc4: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x118fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x118fc8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x118fc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x118fcc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x118fccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x118fd0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x118fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x118fd4: 0xc07f0c8  jal         func_1FC320
    ctx->pc = 0x118FD4u;
    SET_GPR_U32(ctx, 31, 0x118FDCu);
    ctx->pc = 0x118FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118FD4u;
    // 0x118fd8: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC320u, 0x118FD4u, 0x118FDCu)) {
        return;
    }
    ctx->pc = 0x118FDCu;
label_118fdc:
    // 0x118fdc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x118fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x118fe0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x118fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x118fe4: 0x5460ff1a  bnel        $v1, $zero, . + 4 + (-0xE6 << 2)
    ctx->pc = 0x118FE4u;
    {
        const bool branch_taken_0x118fe4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x118fe4) {
            ctx->pc = 0x118FE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x118FE4u;
            // 0x118fe8: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x118C50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_118c50;
        }
    }
    ctx->pc = 0x118FECu;
    // 0x118fec: 0xc6030250  lwc1        $f3, 0x250($s0)
    ctx->pc = 0x118fecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_118ff0:
    // 0x118ff0: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x118ff0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x118ff4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x118ff4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x118ff8: 0xc6000090  lwc1        $f0, 0x90($s0)
    ctx->pc = 0x118ff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x118ffc: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x118ffcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x119000: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x119000u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x119004: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x119004u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x119008: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x119008u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x11900c: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x11900cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x119010: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x119010u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x119014: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x119014u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x119018: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x119018u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11901c: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x11901cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x119020: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x119020u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x119024: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x119024u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x119028: 0xe600008c  swc1        $f0, 0x8C($s0)
    ctx->pc = 0x119028u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 140), bits); }
    // 0x11902c: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x11902cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x119030: 0x3e00008  jr          $ra
    ctx->pc = 0x119030u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x119034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119030u;
        // 0x119034: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x119030u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x119038u;
}
