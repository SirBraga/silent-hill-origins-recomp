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

// Function: sub_001C2D98
// Address: 0x1c2d98 - 0x1c3080
void sub_001C2D98_0x1c2d98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C2D98_0x1c2d98");
#endif

    switch (ctx->pc) {
        case 0x1c2dd8u: goto label_1c2dd8;
        case 0x1c2e00u: goto label_1c2e00;
        case 0x1c2e60u: goto label_1c2e60;
        case 0x1c2e84u: goto label_1c2e84;
        case 0x1c2ee0u: goto label_1c2ee0;
        case 0x1c2f30u: goto label_1c2f30;
        case 0x1c2f80u: goto label_1c2f80;
        case 0x1c2f8cu: goto label_1c2f8c;
        case 0x1c2f9cu: goto label_1c2f9c;
        case 0x1c3018u: goto label_1c3018;
        default: break;
    }

    ctx->pc = 0x1c2d98u;

    // 0x1c2d98: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x1c2d98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x1c2d9c: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x1c2d9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x1c2da0: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x1c2da0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
    // 0x1c2da4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1c2da4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2da8: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x1c2da8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x1c2dac: 0xe7b500d8  swc1        $f21, 0xD8($sp)
    ctx->pc = 0x1c2dacu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x1c2db0: 0xe7b400d0  swc1        $f20, 0xD0($sp)
    ctx->pc = 0x1c2db0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x1c2db4: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x1c2db4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
    // 0x1c2db8: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x1c2db8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
    // 0x1c2dbc: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x1c2dbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
    // 0x1c2dc0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1c2dc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1c2dc4: 0x7fb70050  sq          $s7, 0x50($sp)
    ctx->pc = 0x1c2dc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 23));
    // 0x1c2dc8: 0x7fbe0040  sq          $fp, 0x40($sp)
    ctx->pc = 0x1c2dc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 30));
    // 0x1c2dcc: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1c2dccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1c2dd0: 0xc06bc10  jal         func_1AF040
    ctx->pc = 0x1C2DD0u;
    SET_GPR_U32(ctx, 31, 0x1C2DD8u);
    ctx->pc = 0x1C2DD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2DD0u;
    // 0x1c2dd4: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF040u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AF040u, 0x1C2DD0u, 0x1C2DD8u)) {
        return;
    }
    ctx->pc = 0x1C2DD8u;
label_1c2dd8:
    // 0x1c2dd8: 0x8e220044  lw          $v0, 0x44($s1)
    ctx->pc = 0x1c2dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x1c2ddc: 0xc6010080  lwc1        $f1, 0x80($s0)
    ctx->pc = 0x1c2ddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c2de0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1c2de0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1c2de4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c2de4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c2de8: 0x8c440144  lw          $a0, 0x144($v0)
    ctx->pc = 0x1c2de8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 324)));
    // 0x1c2dec: 0x0  nop
    ctx->pc = 0x1c2decu;
    // NOP
    // 0x1c2df0: 0x0  nop
    ctx->pc = 0x1c2df0u;
    // NOP
    // 0x1c2df4: 0x46010543  div.s       $f21, $f0, $f1
    ctx->pc = 0x1c2df4u;
    ctx->f[21] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[1]);
    // 0x1c2df8: 0xc085ba8  jal         func_216EA0
    ctx->pc = 0x1C2DF8u;
    SET_GPR_U32(ctx, 31, 0x1C2E00u);
    ctx->pc = 0x1C2DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2DF8u;
    // 0x1c2dfc: 0xc6340004  lwc1        $f20, 0x4($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x216EA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x216EA0u, 0x1C2DF8u, 0x1C2E00u)) {
        return;
    }
    ctx->pc = 0x1C2E00u;
label_1c2e00:
    // 0x1c2e00: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1c2e00u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2e04: 0x12a00091  beqz        $s5, . + 4 + (0x91 << 2)
    ctx->pc = 0x1C2E04u;
    {
        const bool branch_taken_0x1c2e04 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2E04u;
        // 0x1c2e08: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2e04) {
            ctx->pc = 0x1C304Cu;
            goto label_1c304c;
        }
    }
    ctx->pc = 0x1C2E0Cu;
    // 0x1c2e0c: 0x8e32028c  lw          $s2, 0x28C($s1)
    ctx->pc = 0x1c2e0cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 652)));
    // 0x1c2e10: 0x2a42001b  slti        $v0, $s2, 0x1B
    ctx->pc = 0x1c2e10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)27) ? 1 : 0);
    // 0x1c2e14: 0x5040008e  beql        $v0, $zero, . + 4 + (0x8E << 2)
    ctx->pc = 0x1C2E14u;
    {
        const bool branch_taken_0x1c2e14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c2e14) {
            ctx->pc = 0x1C2E18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C2E14u;
            // 0x1c2e18: 0x7bb100b0  lq          $s1, 0xB0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C3050u;
            goto label_1c3050;
        }
    }
    ctx->pc = 0x1C2E1Cu;
    // 0x1c2e1c: 0x3c01437a  lui         $at, 0x437A
    ctx->pc = 0x1c2e1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17274 << 16));
    // 0x1c2e20: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c2e20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c2e24: 0x0  nop
    ctx->pc = 0x1c2e24u;
    // NOP
    // 0x1c2e28: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x1c2e28u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c2e2c: 0x0  nop
    ctx->pc = 0x1c2e2cu;
    // NOP
    // 0x1c2e30: 0x45030087  bc1tl       . + 4 + (0x87 << 2)
    ctx->pc = 0x1C2E30u;
    {
        const bool branch_taken_0x1c2e30 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c2e30) {
            ctx->pc = 0x1C2E34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C2E30u;
            // 0x1c2e34: 0x7bb100b0  lq          $s1, 0xB0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C3050u;
            goto label_1c3050;
        }
    }
    ctx->pc = 0x1C2E38u;
    // 0x1c2e38: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1c2e38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1c2e3c: 0x1218c0  sll         $v1, $s2, 3
    ctx->pc = 0x1c2e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x1c2e40: 0x2442e208  addiu       $v0, $v0, -0x1DF8
    ctx->pc = 0x1c2e40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959624));
    // 0x1c2e44: 0x2463ff9c  addiu       $v1, $v1, -0x64
    ctx->pc = 0x1c2e44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967196));
    // 0x1c2e48: 0x62a021  addu        $s4, $v1, $v0
    ctx->pc = 0x1c2e48u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1c2e4c: 0x27be0010  addiu       $fp, $sp, 0x10
    ctx->pc = 0x1c2e4cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1c2e50: 0x2637029c  addiu       $s7, $s1, 0x29C
    ctx->pc = 0x1c2e50u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 17), 668));
    // 0x1c2e54: 0x26330250  addiu       $s3, $s1, 0x250
    ctx->pc = 0x1c2e54u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 592));
    // 0x1c2e58: 0x26360150  addiu       $s6, $s1, 0x150
    ctx->pc = 0x1c2e58u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
    // 0x1c2e5c: 0x24020034  addiu       $v0, $zero, 0x34
    ctx->pc = 0x1c2e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
label_1c2e60:
    // 0x1c2e60: 0x2428018  mult        $s0, $s2, $v0
    ctx->pc = 0x1c2e60u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x1c2e64: 0x2301821  addu        $v1, $s1, $s0
    ctx->pc = 0x1c2e64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x1c2e68: 0x8c630294  lw          $v1, 0x294($v1)
    ctx->pc = 0x1c2e68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 660)));
    // 0x1c2e6c: 0x14600028  bnez        $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x1C2E6Cu;
    {
        const bool branch_taken_0x1c2e6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C2E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2E6Cu;
        // 0x1c2e70: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2e6c) {
            ctx->pc = 0x1C2F10u;
            goto label_1c2f10;
        }
    }
    ctx->pc = 0x1C2E74u;
    // 0x1c2e74: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1c2e74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1c2e78: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c2e78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2e7c: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1C2E7Cu;
    SET_GPR_U32(ctx, 31, 0x1C2E84u);
    ctx->pc = 0x1C2E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2E7Cu;
    // 0x1c2e80: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1C2E7Cu, 0x1C2E84u)) {
        return;
    }
    ctx->pc = 0x1C2E84u;
label_1c2e84:
    // 0x1c2e84: 0xc6200270  lwc1        $f0, 0x270($s1)
    ctx->pc = 0x1c2e84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c2e88: 0x2f01021  addu        $v0, $s7, $s0
    ctx->pc = 0x1c2e88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 16)));
    // 0x1c2e8c: 0xc6210274  lwc1        $f1, 0x274($s1)
    ctx->pc = 0x1c2e8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c2e90: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1c2e90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2e94: 0xc622026c  lwc1        $f2, 0x26C($s1)
    ctx->pc = 0x1c2e94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 620)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c2e98: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x1c2e98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2e9c: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x1c2e9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1c2ea0: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1c2ea0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2ea4: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x1c2ea4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x1c2ea8: 0x46001306  mov.s       $f12, $f2
    ctx->pc = 0x1c2ea8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[2]);
    // 0x1c2eac: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1c2eacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c2eb0: 0xe7b40024  swc1        $f20, 0x24($sp)
    ctx->pc = 0x1c2eb0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x1c2eb4: 0xe7a2002c  swc1        $f2, 0x2C($sp)
    ctx->pc = 0x1c2eb4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x1c2eb8: 0x6ba20027  ldl         $v0, 0x27($sp)
    ctx->pc = 0x1c2eb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1c2ebc: 0x6fa20020  ldr         $v0, 0x20($sp)
    ctx->pc = 0x1c2ebcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1c2ec0: 0x6ba3002f  ldl         $v1, 0x2F($sp)
    ctx->pc = 0x1c2ec0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1c2ec4: 0x6fa30028  ldr         $v1, 0x28($sp)
    ctx->pc = 0x1c2ec4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1c2ec8: 0xb3a20017  sdl         $v0, 0x17($sp)
    ctx->pc = 0x1c2ec8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1c2ecc: 0xb7a20010  sdr         $v0, 0x10($sp)
    ctx->pc = 0x1c2eccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1c2ed0: 0xb3a3001f  sdl         $v1, 0x1F($sp)
    ctx->pc = 0x1c2ed0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1c2ed4: 0xb7a30018  sdr         $v1, 0x18($sp)
    ctx->pc = 0x1c2ed4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1c2ed8: 0xc085cec  jal         func_2173B0
    ctx->pc = 0x1C2ED8u;
    SET_GPR_U32(ctx, 31, 0x1C2EE0u);
    ctx->pc = 0x1C2EDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2ED8u;
    // 0x1c2edc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2173B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2173B0u, 0x1C2ED8u, 0x1C2EE0u)) {
        return;
    }
    ctx->pc = 0x1C2EE0u;
label_1c2ee0:
    // 0x1c2ee0: 0xc6200278  lwc1        $f0, 0x278($s1)
    ctx->pc = 0x1c2ee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c2ee4: 0x2112821  addu        $a1, $s0, $s1
    ctx->pc = 0x1c2ee4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x1c2ee8: 0xc621027c  lwc1        $f1, 0x27C($s1)
    ctx->pc = 0x1c2ee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 636)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c2eec: 0x24a502a0  addiu       $a1, $a1, 0x2A0
    ctx->pc = 0x1c2eecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 672));
    // 0x1c2ef0: 0xc62c026c  lwc1        $f12, 0x26C($s1)
    ctx->pc = 0x1c2ef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 620)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c2ef4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1c2ef4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2ef8: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x1c2ef8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1c2efc: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x1c2efcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2f00: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x1c2f00u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x1c2f04: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1c2f04u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2f08: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x1C2F08u;
    {
        const bool branch_taken_0x1c2f08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2F08u;
        // 0x1c2f0c: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2f08) {
            ctx->pc = 0x1C3010u;
            goto label_1c3010;
        }
    }
    ctx->pc = 0x1C2F10u;
label_1c2f10:
    // 0x1c2f10: 0x54620043  bnel        $v1, $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x1C2F10u;
    {
        const bool branch_taken_0x1c2f10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c2f10) {
            ctx->pc = 0x1C2F14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C2F10u;
            // 0x1c2f14: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C3020u;
            goto label_1c3020;
        }
    }
    ctx->pc = 0x1C2F18u;
    // 0x1c2f18: 0x2301021  addu        $v0, $s1, $s0
    ctx->pc = 0x1c2f18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x1c2f1c: 0x8c4302c0  lw          $v1, 0x2C0($v0)
    ctx->pc = 0x1c2f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 704)));
    // 0x1c2f20: 0x5060003f  beql        $v1, $zero, . + 4 + (0x3F << 2)
    ctx->pc = 0x1C2F20u;
    {
        const bool branch_taken_0x1c2f20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c2f20) {
            ctx->pc = 0x1C2F24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C2F20u;
            // 0x1c2f24: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C3020u;
            goto label_1c3020;
        }
    }
    ctx->pc = 0x1C2F28u;
    // 0x1c2f28: 0xc06d004  jal         func_1B4010
    ctx->pc = 0x1C2F28u;
    SET_GPR_U32(ctx, 31, 0x1C2F30u);
    ctx->pc = 0x1C2F2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2F28u;
    // 0x1c2f2c: 0x8e240268  lw          $a0, 0x268($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 616)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4010u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B4010u, 0x1C2F28u, 0x1C2F30u)) {
        return;
    }
    ctx->pc = 0x1C2F30u;
label_1c2f30:
    // 0x1c2f30: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x1c2f30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x1c2f34: 0xc62e0280  lwc1        $f14, 0x280($s1)
    ctx->pc = 0x1c2f34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1c2f38: 0x3c013e00  lui         $at, 0x3E00
    ctx->pc = 0x1c2f38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15872 << 16));
    // 0x1c2f3c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c2f3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c2f40: 0x24420fc8  addiu       $v0, $v0, 0xFC8
    ctx->pc = 0x1c2f40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4040));
    // 0x1c2f44: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1c2f44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1c2f48: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c2f48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c2f4c: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x1c2f4cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x1c2f50: 0xc4500018  lwc1        $f16, 0x18($v0)
    ctx->pc = 0x1c2f50u;
    { uint32_t bits = FAST_READ32(0x730FE0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x1c2f54: 0x4600ac46  mov.s       $f17, $f21
    ctx->pc = 0x1c2f54u;
    ctx->f[17] = FPU_MOV_S(ctx->f[21]);
    // 0x1c2f58: 0xc62c0270  lwc1        $f12, 0x270($s1)
    ctx->pc = 0x1c2f58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c2f5c: 0x460073c6  mov.s       $f15, $f14
    ctx->pc = 0x1c2f5cu;
    ctx->f[15] = FPU_MOV_S(ctx->f[14]);
    // 0x1c2f60: 0xc692fffc  lwc1        $f18, -0x4($s4)
    ctx->pc = 0x1c2f60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
    // 0x1c2f64: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1c2f64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2f68: 0xc6930000  lwc1        $f19, 0x0($s4)
    ctx->pc = 0x1c2f68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[19] = f; }
    // 0x1c2f6c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1c2f6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2f70: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x1c2f70u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1c2f74: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1c2f74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2f78: 0xc06ce2a  jal         func_1B38A8
    ctx->pc = 0x1C2F78u;
    SET_GPR_U32(ctx, 31, 0x1C2F80u);
    ctx->pc = 0x1C2F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2F78u;
    // 0x1c2f7c: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B38A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B38A8u, 0x1C2F78u, 0x1C2F80u)) {
        return;
    }
    ctx->pc = 0x1C2F80u;
label_1c2f80:
    // 0x1c2f80: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1c2f80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2f84: 0xc06cff8  jal         func_1B3FE0
    ctx->pc = 0x1C2F84u;
    SET_GPR_U32(ctx, 31, 0x1C2F8Cu);
    ctx->pc = 0x1C2F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2F84u;
    // 0x1c2f88: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3FE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B3FE0u, 0x1C2F84u, 0x1C2F8Cu)) {
        return;
    }
    ctx->pc = 0x1C2F8Cu;
label_1c2f8c:
    // 0x1c2f8c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1c2f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1c2f90: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c2f90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2f94: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1C2F94u;
    SET_GPR_U32(ctx, 31, 0x1C2F9Cu);
    ctx->pc = 0x1C2F98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2F94u;
    // 0x1c2f98: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1C2F94u, 0x1C2F9Cu)) {
        return;
    }
    ctx->pc = 0x1C2F9Cu;
label_1c2f9c:
    // 0x1c2f9c: 0xc6220280  lwc1        $f2, 0x280($s1)
    ctx->pc = 0x1c2f9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c2fa0: 0x2f01021  addu        $v0, $s7, $s0
    ctx->pc = 0x1c2fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 16)));
    // 0x1c2fa4: 0xc6210270  lwc1        $f1, 0x270($s1)
    ctx->pc = 0x1c2fa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c2fa8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1c2fa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2fac: 0xc6200288  lwc1        $f0, 0x288($s1)
    ctx->pc = 0x1c2facu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c2fb0: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x1c2fb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1c2fb4: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1c2fb4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1c2fb8: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x1c2fb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x1c2fbc: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1c2fbcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1c2fc0: 0x4600a000  add.s       $f0, $f20, $f0
    ctx->pc = 0x1c2fc0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x1c2fc4: 0xc624026c  lwc1        $f4, 0x26C($s1)
    ctx->pc = 0x1c2fc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 620)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1c2fc8: 0xc6220274  lwc1        $f2, 0x274($s1)
    ctx->pc = 0x1c2fc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c2fcc: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1c2fccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2fd0: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x1c2fd0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x1c2fd4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1c2fd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c2fd8: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x1c2fd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x1c2fdc: 0x46002306  mov.s       $f12, $f4
    ctx->pc = 0x1c2fdcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[4]);
    // 0x1c2fe0: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x1c2fe0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x1c2fe4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c2fe4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2fe8: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x1c2fe8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1c2fec: 0xe7a4002c  swc1        $f4, 0x2C($sp)
    ctx->pc = 0x1c2fecu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x1c2ff0: 0x6ba30027  ldl         $v1, 0x27($sp)
    ctx->pc = 0x1c2ff0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1c2ff4: 0x6fa30020  ldr         $v1, 0x20($sp)
    ctx->pc = 0x1c2ff4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1c2ff8: 0x6ba9002f  ldl         $t1, 0x2F($sp)
    ctx->pc = 0x1c2ff8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x1c2ffc: 0x6fa90028  ldr         $t1, 0x28($sp)
    ctx->pc = 0x1c2ffcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x1c3000: 0xb3a30017  sdl         $v1, 0x17($sp)
    ctx->pc = 0x1c3000u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1c3004: 0xb7a30010  sdr         $v1, 0x10($sp)
    ctx->pc = 0x1c3004u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1c3008: 0xb3a9001f  sdl         $t1, 0x1F($sp)
    ctx->pc = 0x1c3008u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1c300c: 0xb7a90018  sdr         $t1, 0x18($sp)
    ctx->pc = 0x1c300cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1c3010:
    // 0x1c3010: 0xc085cec  jal         func_2173B0
    ctx->pc = 0x1C3010u;
    SET_GPR_U32(ctx, 31, 0x1C3018u);
    ctx->pc = 0x1C3014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3010u;
    // 0x1c3014: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2173B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2173B0u, 0x1C3010u, 0x1C3018u)) {
        return;
    }
    ctx->pc = 0x1C3018u;
label_1c3018:
    // 0x1c3018: 0xc6200284  lwc1        $f0, 0x284($s1)
    ctx->pc = 0x1c3018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 644)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c301c: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x1c301cu;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_1c3020:
    // 0x1c3020: 0x2a42001b  slti        $v0, $s2, 0x1B
    ctx->pc = 0x1c3020u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)27) ? 1 : 0);
    // 0x1c3024: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C3024u;
    {
        const bool branch_taken_0x1c3024 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3024u;
        // 0x1c3028: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3024) {
            ctx->pc = 0x1C3048u;
            goto label_1c3048;
        }
    }
    ctx->pc = 0x1C302Cu;
    // 0x1c302c: 0x3c01437a  lui         $at, 0x437A
    ctx->pc = 0x1c302cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17274 << 16));
    // 0x1c3030: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c3030u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c3034: 0x0  nop
    ctx->pc = 0x1c3034u;
    // NOP
    // 0x1c3038: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x1c3038u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c303c: 0x0  nop
    ctx->pc = 0x1c303cu;
    // NOP
    // 0x1c3040: 0x4500ff87  bc1f        . + 4 + (-0x79 << 2)
    ctx->pc = 0x1C3040u;
    {
        const bool branch_taken_0x1c3040 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C3044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3040u;
        // 0x1c3044: 0x24020034  addiu       $v0, $zero, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3040) {
            ctx->pc = 0x1C2E60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c2e60;
        }
    }
    ctx->pc = 0x1C3048u;
label_1c3048:
    // 0x1c3048: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x1c3048u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_1c304c:
    // 0x1c304c: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x1c304cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_1c3050:
    // 0x1c3050: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x1c3050u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1c3054: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x1c3054u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c3058: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x1c3058u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1c305c: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x1c305cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1c3060: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1c3060u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1c3064: 0x7bb70050  lq          $s7, 0x50($sp)
    ctx->pc = 0x1c3064u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c3068: 0x7bbe0040  lq          $fp, 0x40($sp)
    ctx->pc = 0x1c3068u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c306c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1c306cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c3070: 0xc7b500d8  lwc1        $f21, 0xD8($sp)
    ctx->pc = 0x1c3070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1c3074: 0xc7b400d0  lwc1        $f20, 0xD0($sp)
    ctx->pc = 0x1c3074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1c3078: 0x3e00008  jr          $ra
    ctx->pc = 0x1C3078u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C307Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3078u;
        // 0x1c307c: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C3078u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C3080u;
}
