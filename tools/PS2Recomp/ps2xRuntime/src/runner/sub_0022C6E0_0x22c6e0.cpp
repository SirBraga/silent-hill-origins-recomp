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

// Function: sub_0022C6E0
// Address: 0x22c6e0 - 0x22c858
void sub_0022C6E0_0x22c6e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022C6E0_0x22c6e0");
#endif

    switch (ctx->pc) {
        case 0x22c724u: goto label_22c724;
        case 0x22c740u: goto label_22c740;
        case 0x22c75cu: goto label_22c75c;
        case 0x22c778u: goto label_22c778;
        case 0x22c788u: goto label_22c788;
        default: break;
    }

    ctx->pc = 0x22c6e0u;

    // 0x22c6e0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x22c6e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x22c6e4: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x22c6e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x22c6e8: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x22c6e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x22c6ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x22c6ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c6f0: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x22c6f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x22c6f4: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x22c6f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x22c6f8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x22c6f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x22c6fc: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x22c6fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c700: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x22c700u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x22c704: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x22c704u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c708: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x22c708u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c70c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x22c70cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x22c710: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x22c710u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c714: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x22c714u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c718: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x22c718u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c71c: 0xc08b152  jal         func_22C548
    ctx->pc = 0x22C71Cu;
    SET_GPR_U32(ctx, 31, 0x22C724u);
    ctx->pc = 0x22C720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C71Cu;
    // 0x22c720: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22C548u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22C548u, 0x22C71Cu, 0x22C724u)) {
        return;
    }
    ctx->pc = 0x22C724u;
label_22c724:
    // 0x22c724: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x22c724u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x22c728: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22c728u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c72c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x22c72cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c730: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x22c730u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22c734: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x22c734u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c738: 0xc08b152  jal         func_22C548
    ctx->pc = 0x22C738u;
    SET_GPR_U32(ctx, 31, 0x22C740u);
    ctx->pc = 0x22C73Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C738u;
    // 0x22c73c: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22C548u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22C548u, 0x22C738u, 0x22C740u)) {
        return;
    }
    ctx->pc = 0x22C740u;
label_22c740:
    // 0x22c740: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22c740u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c744: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x22c744u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x22c748: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x22c748u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c74c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x22c74cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x22c750: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x22c750u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c754: 0xc08b152  jal         func_22C548
    ctx->pc = 0x22C754u;
    SET_GPR_U32(ctx, 31, 0x22C75Cu);
    ctx->pc = 0x22C758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C754u;
    // 0x22c758: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22C548u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22C548u, 0x22C754u, 0x22C75Cu)) {
        return;
    }
    ctx->pc = 0x22C75Cu;
label_22c75c:
    // 0x22c75c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22c75cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c760: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x22c760u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c764: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x22c764u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x22c768: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x22c768u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x22c76c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x22c76cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c770: 0xc08b152  jal         func_22C548
    ctx->pc = 0x22C770u;
    SET_GPR_U32(ctx, 31, 0x22C778u);
    ctx->pc = 0x22C774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C770u;
    // 0x22c774: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22C548u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22C548u, 0x22C770u, 0x22C778u)) {
        return;
    }
    ctx->pc = 0x22C778u;
label_22c778:
    // 0x22c778: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x22c778u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x22c77c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x22c77cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c780: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x22c780u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c784: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x22c784u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_22c788:
    // 0x22c788: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x22c788u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x22c78c: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x22c78cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22c790: 0x3a31021  addu        $v0, $sp, $v1
    ctx->pc = 0x22c790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x22c794: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x22c794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22c798: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x22c798u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22c79c: 0x0  nop
    ctx->pc = 0x22c79cu;
    // NOP
    // 0x22c7a0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x22C7A0u;
    {
        const bool branch_taken_0x22c7a0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22c7a0) {
            ctx->pc = 0x22C7A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22C7A0u;
            // 0x22c7a4: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22C7A8u;
            goto label_22c7a8;
        }
    }
    ctx->pc = 0x22C7A8u;
label_22c7a8:
    // 0x22c7a8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x22c7a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x22c7ac: 0x28a20004  slti        $v0, $a1, 0x4
    ctx->pc = 0x22c7acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x22c7b0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x22C7B0u;
    {
        const bool branch_taken_0x22c7b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22C7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C7B0u;
        // 0x22c7b4: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c7b0) {
            ctx->pc = 0x22C788u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22c788;
        }
    }
    ctx->pc = 0x22C7B8u;
    // 0x22c7b8: 0x62080  sll         $a0, $a2, 2
    ctx->pc = 0x22c7b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x22c7bc: 0xc6600014  lwc1        $f0, 0x14($s3)
    ctx->pc = 0x22c7bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22c7c0: 0x3a41021  addu        $v0, $sp, $a0
    ctx->pc = 0x22c7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 4)));
    // 0x22c7c4: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x22c7c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22c7c8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x22c7c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22c7cc: 0x0  nop
    ctx->pc = 0x22c7ccu;
    // NOP
    // 0x22c7d0: 0x45000018  bc1f        . + 4 + (0x18 << 2)
    ctx->pc = 0x22C7D0u;
    {
        const bool branch_taken_0x22c7d0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x22C7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C7D0u;
        // 0x22c7d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c7d0) {
            ctx->pc = 0x22C834u;
            goto label_22c834;
        }
    }
    ctx->pc = 0x22C7D8u;
    // 0x22c7d8: 0x2241021  addu        $v0, $s1, $a0
    ctx->pc = 0x22c7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x22c7dc: 0x2842821  addu        $a1, $s4, $a0
    ctx->pc = 0x22c7dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
    // 0x22c7e0: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x22c7e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22c7e4: 0x2442021  addu        $a0, $s2, $a0
    ctx->pc = 0x22c7e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x22c7e8: 0x6a420007  ldl         $v0, 0x7($s2)
    ctx->pc = 0x22c7e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x22c7ec: 0x6e420000  ldr         $v0, 0x0($s2)
    ctx->pc = 0x22c7ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x22c7f0: 0x6a46000f  ldl         $a2, 0xF($s2)
    ctx->pc = 0x22c7f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x22c7f4: 0x6e460008  ldr         $a2, 0x8($s2)
    ctx->pc = 0x22c7f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x22c7f8: 0x6a470017  ldl         $a3, 0x17($s2)
    ctx->pc = 0x22c7f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x22c7fc: 0x6e470010  ldr         $a3, 0x10($s2)
    ctx->pc = 0x22c7fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x22c800: 0x6a48001f  ldl         $t0, 0x1F($s2)
    ctx->pc = 0x22c800u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x22c804: 0x6e480018  ldr         $t0, 0x18($s2)
    ctx->pc = 0x22c804u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x22c808: 0xb2820007  sdl         $v0, 0x7($s4)
    ctx->pc = 0x22c808u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x22c80c: 0xb6820000  sdr         $v0, 0x0($s4)
    ctx->pc = 0x22c80cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x22c810: 0xb286000f  sdl         $a2, 0xF($s4)
    ctx->pc = 0x22c810u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x22c814: 0xb6860008  sdr         $a2, 0x8($s4)
    ctx->pc = 0x22c814u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x22c818: 0xb2870017  sdl         $a3, 0x17($s4)
    ctx->pc = 0x22c818u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x22c81c: 0xb6870010  sdr         $a3, 0x10($s4)
    ctx->pc = 0x22c81cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x22c820: 0xb288001f  sdl         $t0, 0x1F($s4)
    ctx->pc = 0x22c820u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x22c824: 0xb6880018  sdr         $t0, 0x18($s4)
    ctx->pc = 0x22c824u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x22c828: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x22c828u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x22c82c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x22c82cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22c830: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x22c830u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
label_22c834:
    // 0x22c834: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x22c834u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x22c838: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x22c838u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x22c83c: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x22c83cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x22c840: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x22c840u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22c844: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x22c844u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22c848: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x22c848u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22c84c: 0x3e00008  jr          $ra
    ctx->pc = 0x22C84Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22C850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C84Cu;
        // 0x22c850: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22C84Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22C854u;
    // 0x22c854: 0x0  nop
    ctx->pc = 0x22c854u;
    // NOP
    ctx->pc = 0x22c858u;
}
