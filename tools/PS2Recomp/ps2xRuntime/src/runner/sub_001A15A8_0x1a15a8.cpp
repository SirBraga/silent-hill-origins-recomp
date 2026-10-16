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

// Function: sub_001A15A8
// Address: 0x1a15a8 - 0x1a1768
void sub_001A15A8_0x1a15a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A15A8_0x1a15a8");
#endif

    switch (ctx->pc) {
        case 0x1a1660u: goto label_1a1660;
        case 0x1a1688u: goto label_1a1688;
        default: break;
    }

    ctx->pc = 0x1a15a8u;

    // 0x1a15a8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1a15a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1a15ac: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x1a15acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x1a15b0: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x1a15b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x1a15b4: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x1a15b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a15b8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1a15b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1a15bc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1a15bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a15c0: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x1a15c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x1a15c4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1a15c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a15c8: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x1a15c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x1a15cc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a15ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a15d0: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x1a15d0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x1a15d4: 0xc5040000  lwc1        $f4, 0x0($t0)
    ctx->pc = 0x1a15d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1a15d8: 0xc5020008  lwc1        $f2, 0x8($t0)
    ctx->pc = 0x1a15d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a15dc: 0xc4c30008  lwc1        $f3, 0x8($a2)
    ctx->pc = 0x1a15dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1a15e0: 0xc5010004  lwc1        $f1, 0x4($t0)
    ctx->pc = 0x1a15e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a15e4: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x1a15e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a15e8: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x1a15e8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x1a15ec: 0xc4c50000  lwc1        $f5, 0x0($a2)
    ctx->pc = 0x1a15ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1a15f0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1a15f0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1a15f4: 0x46052101  sub.s       $f4, $f4, $f5
    ctx->pc = 0x1a15f4u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[5]);
    // 0x1a15f8: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x1a15f8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x1a15fc: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x1a15fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1a1600: 0xe7a40010  swc1        $f4, 0x10($sp)
    ctx->pc = 0x1a1600u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1a1604: 0x6ba20017  ldl         $v0, 0x17($sp)
    ctx->pc = 0x1a1604u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1a1608: 0x6fa20010  ldr         $v0, 0x10($sp)
    ctx->pc = 0x1a1608u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1a160c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1a160cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a1610: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x1a1610u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a1614: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x1a1614u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a1618: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x1a1618u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x1a161c: 0x3c013400  lui         $at, 0x3400
    ctx->pc = 0x1a161cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13312 << 16));
    // 0x1a1620: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1a1620u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1a1624: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x1a1624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a1628: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x1a1628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a162c: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x1a162cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x1a1630: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x1a1630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a1634: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x1a1634u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x1a1638: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x1a1638u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x1a163c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1a163cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1a1640: 0x46000d00  add.s       $f20, $f1, $f0
    ctx->pc = 0x1a1640u;
    ctx->f[20] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1a1644: 0x4603a034  c.lt.s      $f20, $f3
    ctx->pc = 0x1a1644u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a1648: 0x0  nop
    ctx->pc = 0x1a1648u;
    // NOP
    // 0x1a164c: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x1A164Cu;
    {
        const bool branch_taken_0x1a164c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A1650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A164Cu;
        // 0x1a1650: 0x120a02d  daddu       $s4, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a164c) {
            ctx->pc = 0x1A1678u;
            goto label_1a1678;
        }
    }
    ctx->pc = 0x1A1654u;
    // 0x1a1654: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x1A1654u;
    {
        const bool branch_taken_0x1a1654 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1654u;
        // 0x1a1658: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1654) {
            ctx->pc = 0x1A1744u;
            goto label_1a1744;
        }
    }
    ctx->pc = 0x1A165Cu;
    // 0x1a165c: 0x0  nop
    ctx->pc = 0x1a165cu;
    // NOP
label_1a1660:
    // 0x1a1660: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1a1660u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1a1664: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a1664u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a1668: 0x0  nop
    ctx->pc = 0x1a1668u;
    // NOP
    // 0x1a166c: 0x460100c3  div.s       $f3, $f0, $f1
    ctx->pc = 0x1a166cu;
    ctx->f[3] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[1]);
    // 0x1a1670: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1A1670u;
    {
        const bool branch_taken_0x1a1670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1670u;
        // 0x1a1674: 0xc6000000  lwc1        $f0, 0x0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1670) {
            ctx->pc = 0x1A16B0u;
            goto label_1a16b0;
        }
    }
    ctx->pc = 0x1A1678u;
label_1a1678:
    // 0x1a1678: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x1a1678u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a167c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1a167cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1680: 0xc04642c  jal         func_1190B0
    ctx->pc = 0x1A1680u;
    SET_GPR_U32(ctx, 31, 0x1A1688u);
    ctx->pc = 0x1A1684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1680u;
    // 0x1a1684: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1190B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1190B0u, 0x1A1680u, 0x1A1688u)) {
        return;
    }
    ctx->pc = 0x1A1688u;
label_1a1688:
    // 0x1a1688: 0x0  nop
    ctx->pc = 0x1a1688u;
    // NOP
    // 0x1a168c: 0x0  nop
    ctx->pc = 0x1a168cu;
    // NOP
    // 0x1a1690: 0x46000044  c1          0x44
    ctx->pc = 0x1a1690u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x1a1694: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1a1694u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a1698: 0x0  nop
    ctx->pc = 0x1a1698u;
    // NOP
    // 0x1a169c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1a169cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a16a0: 0x0  nop
    ctx->pc = 0x1a16a0u;
    // NOP
    // 0x1a16a4: 0x4501ffee  bc1t        . + 4 + (-0x12 << 2)
    ctx->pc = 0x1A16A4u;
    {
        const bool branch_taken_0x1a16a4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A16A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A16A4u;
        // 0x1a16a8: 0x460008c6  mov.s       $f3, $f1 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a16a4) {
            ctx->pc = 0x1A1660u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a1660;
        }
    }
    ctx->pc = 0x1A16ACu;
    // 0x1a16ac: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x1a16acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a16b0:
    // 0x1a16b0: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x1a16b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a16b4: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x1a16b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a16b8: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x1a16b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x1a16bc: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x1a16bcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x1a16c0: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x1a16c0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x1a16c4: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x1a16c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x1a16c8: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x1a16c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x1a16cc: 0xe6020008  swc1        $f2, 0x8($s0)
    ctx->pc = 0x1a16ccu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x1a16d0: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x1a16d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a16d4: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x1a16d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a16d8: 0x132880  sll         $a1, $s3, 2
    ctx->pc = 0x1a16d8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x1a16dc: 0xc7a40004  lwc1        $f4, 0x4($sp)
    ctx->pc = 0x1a16dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1a16e0: 0x2451021  addu        $v0, $s2, $a1
    ctx->pc = 0x1a16e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x1a16e4: 0xc6230004  lwc1        $f3, 0x4($s1)
    ctx->pc = 0x1a16e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1a16e8: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1a16e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1a16ec: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x1a16ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a16f0: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x1a16f0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x1a16f4: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x1a16f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a16f8: 0xc4441298  lwc1        $f4, 0x1298($v0)
    ctx->pc = 0x1a16f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4760)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1a16fc: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1a16fcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1a1700: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x1a1700u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x1a1704: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1a1704u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1a1708: 0x46040034  c.lt.s      $f0, $f4
    ctx->pc = 0x1a1708u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a170c: 0x0  nop
    ctx->pc = 0x1a170cu;
    // NOP
    // 0x1a1710: 0x45020002  bc1fl       . + 4 + (0x2 << 2)
    ctx->pc = 0x1A1710u;
    {
        const bool branch_taken_0x1a1710 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a1710) {
            ctx->pc = 0x1A1714u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A1710u;
            // 0x1a1714: 0xc44112a4  lwc1        $f1, 0x12A4($v0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4772)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A171Cu;
            goto label_1a171c;
        }
    }
    ctx->pc = 0x1A1718u;
    // 0x1a1718: 0xc44112b0  lwc1        $f1, 0x12B0($v0)
    ctx->pc = 0x1a1718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4784)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a171c:
    // 0x1a171c: 0x52800004  beql        $s4, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A171Cu;
    {
        const bool branch_taken_0x1a171c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a171c) {
            ctx->pc = 0x1A1720u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A171Cu;
            // 0x1a1720: 0x46010802  mul.s       $f0, $f1, $f1 (Delay Slot)
            ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A1730u;
            goto label_1a1730;
        }
    }
    ctx->pc = 0x1A1724u;
    // 0x1a1724: 0xc64012c8  lwc1        $f0, 0x12C8($s2)
    ctx->pc = 0x1a1724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4808)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a1728: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1a1728u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1a172c: 0x46010802  mul.s       $f0, $f1, $f1
    ctx->pc = 0x1a172cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_1a1730:
    // 0x1a1730: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x1a1730u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a1734: 0x0  nop
    ctx->pc = 0x1a1734u;
    // NOP
    // 0x1a1738: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1A1738u;
    {
        const bool branch_taken_0x1a1738 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A173Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1738u;
        // 0x1a173c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1738) {
            ctx->pc = 0x1A1744u;
            goto label_1a1744;
        }
    }
    ctx->pc = 0x1A1740u;
    // 0x1a1740: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a1740u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a1744:
    // 0x1a1744: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x1a1744u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1a1748: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x1a1748u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1a174c: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x1a174cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a1750: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1a1750u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a1754: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x1a1754u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a1758: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a1758u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a175c: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x1a175cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1a1760: 0x3e00008  jr          $ra
    ctx->pc = 0x1A1760u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A1764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1760u;
        // 0x1a1764: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A1760u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A1768u;
}
