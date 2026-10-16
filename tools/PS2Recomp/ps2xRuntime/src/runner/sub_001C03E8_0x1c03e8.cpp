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

// Function: sub_001C03E8
// Address: 0x1c03e8 - 0x1c0598
void sub_001C03E8_0x1c03e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C03E8_0x1c03e8");
#endif

    switch (ctx->pc) {
        case 0x1c04a4u: goto label_1c04a4;
        case 0x1c04c8u: goto label_1c04c8;
        case 0x1c04d4u: goto label_1c04d4;
        case 0x1c0580u: goto label_1c0580;
        default: break;
    }

    ctx->pc = 0x1c03e8u;

    // 0x1c03e8: 0x46006024  .word       0x46006024                   # cvt.w.s     $f0, $f12 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1c03e8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[12]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1c03ec: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1c03ecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1c03f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1c03f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1c03f4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1c03f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1c03f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c03f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c03fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c03fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0400: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c0400u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c0404: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c0404u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c0408: 0x0  nop
    ctx->pc = 0x1c0408u;
    // NOP
    // 0x1c040c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c040cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1c0410: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x1c0410u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1c0414: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1c0414u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c0418: 0xc6040008  lwc1        $f4, 0x8($s0)
    ctx->pc = 0x1c0418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1c041c: 0x0  nop
    ctx->pc = 0x1c041cu;
    // NOP
    // 0x1c0420: 0x46040183  div.s       $f6, $f0, $f4
    ctx->pc = 0x1c0420u;
    ctx->f[6] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[4]);
    // 0x1c0424: 0x46060834  c.lt.s      $f1, $f6
    ctx->pc = 0x1c0424u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c0428: 0x0  nop
    ctx->pc = 0x1c0428u;
    // NOP
    // 0x1c042c: 0x4500001d  bc1f        . + 4 + (0x1D << 2)
    ctx->pc = 0x1C042Cu;
    {
        const bool branch_taken_0x1c042c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C0430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C042Cu;
        // 0x1c0430: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c042c) {
            ctx->pc = 0x1C04A4u;
            goto label_1c04a4;
        }
    }
    ctx->pc = 0x1C0434u;
    // 0x1c0434: 0xc6030000  lwc1        $f3, 0x0($s0)
    ctx->pc = 0x1c0434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1c0438: 0xc6020004  lwc1        $f2, 0x4($s0)
    ctx->pc = 0x1c0438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c043c: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x1c043cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c0440: 0x46041840  add.s       $f1, $f3, $f4
    ctx->pc = 0x1c0440u;
    ctx->f[1] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x1c0444: 0x3c014380  lui         $at, 0x4380
    ctx->pc = 0x1c0444u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17280 << 16));
    // 0x1c0448: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x1c0448u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x1c044c: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x1c044cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1c0450: 0x3c014360  lui         $at, 0x4360
    ctx->pc = 0x1c0450u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17248 << 16));
    // 0x1c0454: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1c0454u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1c0458: 0x460518c1  sub.s       $f3, $f3, $f5
    ctx->pc = 0x1c0458u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[5]);
    // 0x1c045c: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x1c045cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x1c0460: 0x46050841  sub.s       $f1, $f1, $f5
    ctx->pc = 0x1c0460u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[5]);
    // 0x1c0464: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x1c0464u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x1c0468: 0x460618c2  mul.s       $f3, $f3, $f6
    ctx->pc = 0x1c0468u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[6]);
    // 0x1c046c: 0x46061082  mul.s       $f2, $f2, $f6
    ctx->pc = 0x1c046cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[6]);
    // 0x1c0470: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x1c0470u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x1c0474: 0x46060842  mul.s       $f1, $f1, $f6
    ctx->pc = 0x1c0474u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
    // 0x1c0478: 0x460518c0  add.s       $f3, $f3, $f5
    ctx->pc = 0x1c0478u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
    // 0x1c047c: 0x46041080  add.s       $f2, $f2, $f4
    ctx->pc = 0x1c047cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
    // 0x1c0480: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x1c0480u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
    // 0x1c0484: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x1c0484u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x1c0488: 0xe6030000  swc1        $f3, 0x0($s0)
    ctx->pc = 0x1c0488u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x1c048c: 0xe6020004  swc1        $f2, 0x4($s0)
    ctx->pc = 0x1c048cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x1c0490: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x1c0490u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x1c0494: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1c0494u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x1c0498: 0xe6010008  swc1        $f1, 0x8($s0)
    ctx->pc = 0x1c0498u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x1c049c: 0xc070166  jal         func_1C0598
    ctx->pc = 0x1C049Cu;
    SET_GPR_U32(ctx, 31, 0x1C04A4u);
    ctx->pc = 0x1C04A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C049Cu;
    // 0x1c04a0: 0xe600000c  swc1        $f0, 0xC($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0598u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1C0598u, 0x1C049Cu, 0x1C04A4u)) {
        return;
    }
    ctx->pc = 0x1C04A4u;
label_1c04a4:
    // 0x1c04a4: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x1c04a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c04a8: 0x3c0144f0  lui         $at, 0x44F0
    ctx->pc = 0x1c04a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17648 << 16));
    // 0x1c04ac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c04acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c04b0: 0x0  nop
    ctx->pc = 0x1c04b0u;
    // NOP
    // 0x1c04b4: 0x46000d03  div.s       $f20, $f1, $f0
    ctx->pc = 0x1c04b4u;
    ctx->f[20] = FPU_DIV_S(ctx, ctx->f[1], ctx->f[0]);
    // 0x1c04b8: 0x1220001b  beqz        $s1, . + 4 + (0x1B << 2)
    ctx->pc = 0x1C04B8u;
    {
        const bool branch_taken_0x1c04b8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C04BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C04B8u;
        // 0x1c04bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c04b8) {
            ctx->pc = 0x1C0528u;
            goto label_1c0528;
        }
    }
    ctx->pc = 0x1C04C0u;
    // 0x1c04c0: 0xc07063a  jal         func_1C18E8
    ctx->pc = 0x1C04C0u;
    SET_GPR_U32(ctx, 31, 0x1C04C8u);
    ctx->pc = 0x1C04C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C04C0u;
    // 0x1c04c4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C18E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1C18E8u, 0x1C04C0u, 0x1C04C8u)) {
        return;
    }
    ctx->pc = 0x1C04C8u;
label_1c04c8:
    // 0x1c04c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c04c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c04cc: 0xc0703ae  jal         func_1C0EB8
    ctx->pc = 0x1C04CCu;
    SET_GPR_U32(ctx, 31, 0x1C04D4u);
    ctx->pc = 0x1C04D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C04CCu;
    // 0x1c04d0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0EB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1C0EB8u, 0x1C04CCu, 0x1C04D4u)) {
        return;
    }
    ctx->pc = 0x1C04D4u;
label_1c04d4:
    // 0x1c04d4: 0x8e020454  lw          $v0, 0x454($s0)
    ctx->pc = 0x1c04d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1108)));
    // 0x1c04d8: 0x68430047  ldl         $v1, 0x47($v0)
    ctx->pc = 0x1c04d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1c04dc: 0x6c430040  ldr         $v1, 0x40($v0)
    ctx->pc = 0x1c04dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1c04e0: 0xb203045f  sdl         $v1, 0x45F($s0)
    ctx->pc = 0x1c04e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 1119); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1c04e4: 0xb6030458  sdr         $v1, 0x458($s0)
    ctx->pc = 0x1c04e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 1112); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1c04e8: 0xc6000458  lwc1        $f0, 0x458($s0)
    ctx->pc = 0x1c04e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c04ec: 0xc601045c  lwc1        $f1, 0x45C($s0)
    ctx->pc = 0x1c04ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c04f0: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1c04f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1c04f4: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x1c04f4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x1c04f8: 0xe6000458  swc1        $f0, 0x458($s0)
    ctx->pc = 0x1c04f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1112), bits); }
    // 0x1c04fc: 0xe601045c  swc1        $f1, 0x45C($s0)
    ctx->pc = 0x1c04fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1116), bits); }
    // 0x1c0500: 0x6a0202f3  ldl         $v0, 0x2F3($s0)
    ctx->pc = 0x1c0500u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 755); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1c0504: 0x6e0202ec  ldr         $v0, 0x2EC($s0)
    ctx->pc = 0x1c0504u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 748); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1c0508: 0xb20202eb  sdl         $v0, 0x2EB($s0)
    ctx->pc = 0x1c0508u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 747); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1c050c: 0xb60202e4  sdr         $v0, 0x2E4($s0)
    ctx->pc = 0x1c050cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 740); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1c0510: 0xc60002e4  lwc1        $f0, 0x2E4($s0)
    ctx->pc = 0x1c0510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c0514: 0xc60102e8  lwc1        $f1, 0x2E8($s0)
    ctx->pc = 0x1c0514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c0518: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1c0518u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1c051c: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x1c051cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x1c0520: 0xe60002e4  swc1        $f0, 0x2E4($s0)
    ctx->pc = 0x1c0520u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 740), bits); }
    // 0x1c0524: 0xe60102e8  swc1        $f1, 0x2E8($s0)
    ctx->pc = 0x1c0524u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 744), bits); }
label_1c0528:
    // 0x1c0528: 0x8e0202c8  lw          $v0, 0x2C8($s0)
    ctx->pc = 0x1c0528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 712)));
    // 0x1c052c: 0x50400015  beql        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x1C052Cu;
    {
        const bool branch_taken_0x1c052c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c052c) {
            ctx->pc = 0x1C0530u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C052Cu;
            // 0x1c0530: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C0584u;
            goto label_1c0584;
        }
    }
    ctx->pc = 0x1C0534u;
    // 0x1c0534: 0x8e0202cc  lw          $v0, 0x2CC($s0)
    ctx->pc = 0x1c0534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 716)));
    // 0x1c0538: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C0538u;
    {
        const bool branch_taken_0x1c0538 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0538) {
            ctx->pc = 0x1C053Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C0538u;
            // 0x1c053c: 0xc60302ec  lwc1        $f3, 0x2EC($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C0554u;
            goto label_1c0554;
        }
    }
    ctx->pc = 0x1C0540u;
    // 0x1c0540: 0xc60302e4  lwc1        $f3, 0x2E4($s0)
    ctx->pc = 0x1c0540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1c0544: 0x3c014380  lui         $at, 0x4380
    ctx->pc = 0x1c0544u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17280 << 16));
    // 0x1c0548: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c0548u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c054c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1C054Cu;
    {
        const bool branch_taken_0x1c054c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C054Cu;
        // 0x1c0550: 0xc60202e8  lwc1        $f2, 0x2E8($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c054c) {
            ctx->pc = 0x1C0560u;
            goto label_1c0560;
        }
    }
    ctx->pc = 0x1C0554u;
label_1c0554:
    // 0x1c0554: 0x3c014380  lui         $at, 0x4380
    ctx->pc = 0x1c0554u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17280 << 16));
    // 0x1c0558: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c0558u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c055c: 0xc60202f0  lwc1        $f2, 0x2F0($s0)
    ctx->pc = 0x1c055cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1c0560:
    // 0x1c0560: 0x3c014360  lui         $at, 0x4360
    ctx->pc = 0x1c0560u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17248 << 16));
    // 0x1c0564: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c0564u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c0568: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x1c0568u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x1c056c: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1c056cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x1c0570: 0xe6010000  swc1        $f1, 0x0($s0)
    ctx->pc = 0x1c0570u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x1c0574: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x1c0574u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x1c0578: 0xc070166  jal         func_1C0598
    ctx->pc = 0x1C0578u;
    SET_GPR_U32(ctx, 31, 0x1C0580u);
    ctx->pc = 0x1C057Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0578u;
    // 0x1c057c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0598u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1C0598u, 0x1C0578u, 0x1C0580u)) {
        return;
    }
    ctx->pc = 0x1C0580u;
label_1c0580:
    // 0x1c0580: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1c0580u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1c0584:
    // 0x1c0584: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c0584u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c0588: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c0588u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c058c: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x1c058cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1c0590: 0x3e00008  jr          $ra
    ctx->pc = 0x1C0590u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C0594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0590u;
        // 0x1c0594: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C0590u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C0598u;
}
