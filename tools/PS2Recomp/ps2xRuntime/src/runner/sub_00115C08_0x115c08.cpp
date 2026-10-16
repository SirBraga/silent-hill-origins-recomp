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

// Function: sub_00115C08
// Address: 0x115c08 - 0x116230
void sub_00115C08_0x115c08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00115C08_0x115c08");
#endif

    switch (ctx->pc) {
        case 0x115cecu: goto label_115cec;
        case 0x115d38u: goto label_115d38;
        case 0x115d70u: goto label_115d70;
        case 0x115db0u: goto label_115db0;
        case 0x115ff8u: goto label_115ff8;
        case 0x116060u: goto label_116060;
        case 0x116100u: goto label_116100;
        case 0x11618cu: goto label_11618c;
        default: break;
    }

    ctx->pc = 0x115c08u;

    // 0x115c08: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x115c08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x115c0c: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x115c0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
    // 0x115c10: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x115c10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
    // 0x115c14: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x115c14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115c18: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x115c18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
    // 0x115c1c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x115c1cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115c20: 0x7fb50090  sq          $s5, 0x90($sp)
    ctx->pc = 0x115c20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 21));
    // 0x115c24: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x115c24u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115c28: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x115c28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
    // 0x115c2c: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x115c2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
    // 0x115c30: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x115c30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x115c34: 0xe7b500f8  swc1        $f21, 0xF8($sp)
    ctx->pc = 0x115c34u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x115c38: 0xe7b400f0  swc1        $f20, 0xF0($sp)
    ctx->pc = 0x115c38u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x115c3c: 0xc4e20000  lwc1        $f2, 0x0($a3)
    ctx->pc = 0x115c3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x115c40: 0xc4e30008  lwc1        $f3, 0x8($a3)
    ctx->pc = 0x115c40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x115c44: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x115c44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x115c48: 0xc6610008  lwc1        $f1, 0x8($s3)
    ctx->pc = 0x115c48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x115c4c: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x115c4cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x115c50: 0x46011841  sub.s       $f1, $f3, $f1
    ctx->pc = 0x115c50u;
    ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x115c54: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x115c54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x115c58: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x115c58u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x115c5c: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x115c5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x115c60: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x115c60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x115c64: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x115c64u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x115c68: 0x460118c1  sub.s       $f3, $f3, $f1
    ctx->pc = 0x115c68u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x115c6c: 0xe7a20020  swc1        $f2, 0x20($sp)
    ctx->pc = 0x115c6cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x115c70: 0xe7a30028  swc1        $f3, 0x28($sp)
    ctx->pc = 0x115c70u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x115c74: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x115c74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x115c78: 0x3c010080  lui         $at, 0x80
    ctx->pc = 0x115c78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)128 << 16));
    // 0x115c7c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x115c7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x115c80: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x115c80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x115c84: 0x6ba20017  ldl         $v0, 0x17($sp)
    ctx->pc = 0x115c84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x115c88: 0x6fa20010  ldr         $v0, 0x10($sp)
    ctx->pc = 0x115c88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x115c8c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x115c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x115c90: 0xb3a20037  sdl         $v0, 0x37($sp)
    ctx->pc = 0x115c90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x115c94: 0xb7a20030  sdr         $v0, 0x30($sp)
    ctx->pc = 0x115c94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x115c98: 0xafa30038  sw          $v1, 0x38($sp)
    ctx->pc = 0x115c98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 3));
    // 0x115c9c: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x115c9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x115ca0: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x115ca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x115ca4: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x115ca4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x115ca8: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x115ca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x115cac: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x115cacu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x115cb0: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x115cb0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x115cb4: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x115cb4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x115cb8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x115cb8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x115cbc: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x115cbcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x115cc0: 0x0  nop
    ctx->pc = 0x115cc0u;
    // NOP
    // 0x115cc4: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x115CC4u;
    {
        const bool branch_taken_0x115cc4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x115CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115CC4u;
        // 0x115cc8: 0x100a82d  daddu       $s5, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115cc4) {
            ctx->pc = 0x115CE0u;
            goto label_115ce0;
        }
    }
    ctx->pc = 0x115CCCu;
    // 0x115ccc: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x115cccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x115cd0: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x115cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x115cd4: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x115cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x115cd8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x115CD8u;
    {
        const bool branch_taken_0x115cd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115CD8u;
        // 0x115cdc: 0xc7b40008  lwc1        $f20, 0x8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x115cd8) {
            ctx->pc = 0x115CF0u;
            goto label_115cf0;
        }
    }
    ctx->pc = 0x115CE0u;
label_115ce0:
    // 0x115ce0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x115ce0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115ce4: 0xc093a88  jal         func_24EA20
    ctx->pc = 0x115CE4u;
    SET_GPR_U32(ctx, 31, 0x115CECu);
    ctx->pc = 0x115CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115CE4u;
    // 0x115ce8: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EA20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EA20u, 0x115CE4u, 0x115CECu)) {
        return;
    }
    ctx->pc = 0x115CECu;
label_115cec:
    // 0x115cec: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x115cecu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_115cf0:
    // 0x115cf0: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x115cf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x115cf4: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x115cf4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x115cf8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x115cf8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x115cfc: 0x6a660007  ldl         $a2, 0x7($s3)
    ctx->pc = 0x115cfcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x115d00: 0x6e660000  ldr         $a2, 0x0($s3)
    ctx->pc = 0x115d00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x115d04: 0x8e670008  lw          $a3, 0x8($s3)
    ctx->pc = 0x115d04u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x115d08: 0xb3a60047  sdl         $a2, 0x47($sp)
    ctx->pc = 0x115d08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x115d0c: 0xb7a60040  sdr         $a2, 0x40($sp)
    ctx->pc = 0x115d0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x115d10: 0xafa70048  sw          $a3, 0x48($sp)
    ctx->pc = 0x115d10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 7));
    // 0x115d14: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x115d14u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x115d18: 0x0  nop
    ctx->pc = 0x115d18u;
    // NOP
    // 0x115d1c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x115D1Cu;
    {
        const bool branch_taken_0x115d1c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x115D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115D1Cu;
        // 0x115d20: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115d1c) {
            ctx->pc = 0x115D30u;
            goto label_115d30;
        }
    }
    ctx->pc = 0x115D24u;
    // 0x115d24: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x115d24u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x115d28: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x115D28u;
    {
        const bool branch_taken_0x115d28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x115d28) {
            ctx->pc = 0x115D38u;
            goto label_115d38;
        }
    }
    ctx->pc = 0x115D30u;
label_115d30:
    // 0x115d30: 0xc093a88  jal         func_24EA20
    ctx->pc = 0x115D30u;
    SET_GPR_U32(ctx, 31, 0x115D38u);
    ctx->pc = 0x115D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115D30u;
    // 0x115d34: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EA20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EA20u, 0x115D30u, 0x115D38u)) {
        return;
    }
    ctx->pc = 0x115D38u;
label_115d38:
    // 0x115d38: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x115d38u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x115d3c: 0x24140004  addiu       $s4, $zero, 0x4
    ctx->pc = 0x115d3cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x115d40: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x115d40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x115d44: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x115d44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x115d48: 0x46140834  c.lt.s      $f1, $f20
    ctx->pc = 0x115d48u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x115d4c: 0x0  nop
    ctx->pc = 0x115d4cu;
    // NOP
    // 0x115d50: 0x45000125  bc1f        . + 4 + (0x125 << 2)
    ctx->pc = 0x115D50u;
    {
        const bool branch_taken_0x115d50 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x115D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115D50u;
        // 0x115d54: 0x4600a540  add.s       $f21, $f20, $f0 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x115d50) {
            ctx->pc = 0x1161E8u;
            goto label_1161e8;
        }
    }
    ctx->pc = 0x115D58u;
    // 0x115d58: 0x4615a034  c.lt.s      $f20, $f21
    ctx->pc = 0x115d58u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x115d5c: 0x0  nop
    ctx->pc = 0x115d5cu;
    // NOP
    // 0x115d60: 0x45000121  bc1f        . + 4 + (0x121 << 2)
    ctx->pc = 0x115D60u;
    {
        const bool branch_taken_0x115d60 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x115d60) {
            ctx->pc = 0x1161E8u;
            goto label_1161e8;
        }
    }
    ctx->pc = 0x115D68u;
    // 0x115d68: 0x8e420204  lw          $v0, 0x204($s2)
    ctx->pc = 0x115d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 516)));
    // 0x115d6c: 0x0  nop
    ctx->pc = 0x115d6cu;
    // NOP
label_115d70:
    // 0x115d70: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x115d70u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x115d74: 0xe7a10058  swc1        $f1, 0x58($sp)
    ctx->pc = 0x115d74u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x115d78: 0x4600a546  mov.s       $f21, $f20
    ctx->pc = 0x115d78u;
    ctx->f[21] = FPU_MOV_S(ctx->f[20]);
    // 0x115d7c: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x115d7cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x115d80: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x115d80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115d84: 0xe7a10050  swc1        $f1, 0x50($sp)
    ctx->pc = 0x115d84u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x115d88: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x115d88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115d8c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x115d8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x115d90: 0x34210001  ori         $at, $at, 0x1
    ctx->pc = 0x115d90u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)1);
    // 0x115d94: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x115d94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x115d98: 0x1840005e  blez        $v0, . + 4 + (0x5E << 2)
    ctx->pc = 0x115D98u;
    {
        const bool branch_taken_0x115d98 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x115D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115D98u;
        // 0x115d9c: 0x8e430208  lw          $v1, 0x208($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 520)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115d98) {
            ctx->pc = 0x115F14u;
            goto label_115f14;
        }
    }
    ctx->pc = 0x115DA0u;
    // 0x115da0: 0x3c013727  lui         $at, 0x3727
    ctx->pc = 0x115da0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14119 << 16));
    // 0x115da4: 0x3421c5ac  ori         $at, $at, 0xC5AC
    ctx->pc = 0x115da4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50604);
    // 0x115da8: 0x44815800  mtc1        $at, $f11
    ctx->pc = 0x115da8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[11], &bits, sizeof(bits)); }
    // 0x115dac: 0x46000a86  mov.s       $f10, $f1
    ctx->pc = 0x115dacu;
    ctx->f[10] = FPU_MOV_S(ctx->f[1]);
label_115db0:
    // 0x115db0: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x115db0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x115db4: 0xc4650004  lwc1        $f5, 0x4($v1)
    ctx->pc = 0x115db4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x115db8: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x115db8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x115dbc: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x115dbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x115dc0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x115dc0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x115dc4: 0xc4640008  lwc1        $f4, 0x8($v1)
    ctx->pc = 0x115dc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x115dc8: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x115dc8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x115dcc: 0xc7a30018  lwc1        $f3, 0x18($sp)
    ctx->pc = 0x115dccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x115dd0: 0xc7a60040  lwc1        $f6, 0x40($sp)
    ctx->pc = 0x115dd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x115dd4: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x115dd4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x115dd8: 0xc7a70044  lwc1        $f7, 0x44($sp)
    ctx->pc = 0x115dd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x115ddc: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x115ddcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x115de0: 0xc7a80048  lwc1        $f8, 0x48($sp)
    ctx->pc = 0x115de0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x115de4: 0x46060842  mul.s       $f1, $f1, $f6
    ctx->pc = 0x115de4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
    // 0x115de8: 0xc462000c  lwc1        $f2, 0xC($v1)
    ctx->pc = 0x115de8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x115dec: 0x46072942  mul.s       $f5, $f5, $f7
    ctx->pc = 0x115decu;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[7]);
    // 0x115df0: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x115df0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x115df4: 0x46082102  mul.s       $f4, $f4, $f8
    ctx->pc = 0x115df4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[8]);
    // 0x115df8: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x115df8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
    // 0x115dfc: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x115dfcu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x115e00: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x115e00u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x115e04: 0x46005834  c.lt.s      $f11, $f0
    ctx->pc = 0x115e04u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[11], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x115e08: 0x0  nop
    ctx->pc = 0x115e08u;
    // NOP
    // 0x115e0c: 0x4500003c  bc1f        . + 4 + (0x3C << 2)
    ctx->pc = 0x115E0Cu;
    {
        const bool branch_taken_0x115e0c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x115E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115E0Cu;
        // 0x115e10: 0x46020840  add.s       $f1, $f1, $f2 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x115e0c) {
            ctx->pc = 0x115F00u;
            goto label_115f00;
        }
    }
    ctx->pc = 0x115E14u;
    // 0x115e14: 0x46015034  c.lt.s      $f10, $f1
    ctx->pc = 0x115e14u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[10], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x115e18: 0x0  nop
    ctx->pc = 0x115e18u;
    // NOP
    // 0x115e1c: 0x45020039  bc1fl       . + 4 + (0x39 << 2)
    ctx->pc = 0x115E1Cu;
    {
        const bool branch_taken_0x115e1c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x115e1c) {
            ctx->pc = 0x115E20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x115E1Cu;
            // 0x115e20: 0x8e420204  lw          $v0, 0x204($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 516)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x115F04u;
            goto label_115f04;
        }
    }
    ctx->pc = 0x115E24u;
    // 0x115e24: 0x0  nop
    ctx->pc = 0x115e24u;
    // NOP
    // 0x115e28: 0x0  nop
    ctx->pc = 0x115e28u;
    // NOP
    // 0x115e2c: 0x46000983  div.s       $f6, $f1, $f0
    ctx->pc = 0x115e2cu;
    ctx->f[6] = FPU_DIV_S(ctx, ctx->f[1], ctx->f[0]);
    // 0x115e30: 0x46093034  c.lt.s      $f6, $f9
    ctx->pc = 0x115e30u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[9])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x115e34: 0x0  nop
    ctx->pc = 0x115e34u;
    // NOP
    // 0x115e38: 0x45020032  bc1fl       . + 4 + (0x32 << 2)
    ctx->pc = 0x115E38u;
    {
        const bool branch_taken_0x115e38 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x115e38) {
            ctx->pc = 0x115E3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x115E38u;
            // 0x115e3c: 0x8e420204  lw          $v0, 0x204($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 516)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x115F04u;
            goto label_115f04;
        }
    }
    ctx->pc = 0x115E40u;
    // 0x115e40: 0x6ba20047  ldl         $v0, 0x47($sp)
    ctx->pc = 0x115e40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x115e44: 0x6fa20040  ldr         $v0, 0x40($sp)
    ctx->pc = 0x115e44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x115e48: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x115e48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x115e4c: 0xb3a20067  sdl         $v0, 0x67($sp)
    ctx->pc = 0x115e4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x115e50: 0xb7a20060  sdr         $v0, 0x60($sp)
    ctx->pc = 0x115e50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x115e54: 0xafa50068  sw          $a1, 0x68($sp)
    ctx->pc = 0x115e54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 5));
    // 0x115e58: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x115e58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x115e5c: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x115e5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x115e60: 0x46060842  mul.s       $f1, $f1, $f6
    ctx->pc = 0x115e60u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
    // 0x115e64: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x115e64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x115e68: 0x46061082  mul.s       $f2, $f2, $f6
    ctx->pc = 0x115e68u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[6]);
    // 0x115e6c: 0xc7a30060  lwc1        $f3, 0x60($sp)
    ctx->pc = 0x115e6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x115e70: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x115e70u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x115e74: 0xc7a40064  lwc1        $f4, 0x64($sp)
    ctx->pc = 0x115e74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x115e78: 0xc7a50068  lwc1        $f5, 0x68($sp)
    ctx->pc = 0x115e78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x115e7c: 0x460118c0  add.s       $f3, $f3, $f1
    ctx->pc = 0x115e7cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x115e80: 0x46022100  add.s       $f4, $f4, $f2
    ctx->pc = 0x115e80u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[2]);
    // 0x115e84: 0x46002940  add.s       $f5, $f5, $f0
    ctx->pc = 0x115e84u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
    // 0x115e88: 0xe7a30060  swc1        $f3, 0x60($sp)
    ctx->pc = 0x115e88u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x115e8c: 0xe7a40064  swc1        $f4, 0x64($sp)
    ctx->pc = 0x115e8cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x115e90: 0xe7a50068  swc1        $f5, 0x68($sp)
    ctx->pc = 0x115e90u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x115e94: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x115e94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x115e98: 0xc4620014  lwc1        $f2, 0x14($v1)
    ctx->pc = 0x115e98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x115e9c: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x115e9cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x115ea0: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x115ea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x115ea4: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x115ea4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x115ea8: 0xc463001c  lwc1        $f3, 0x1C($v1)
    ctx->pc = 0x115ea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x115eac: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x115eacu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x115eb0: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x115eb0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x115eb4: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x115eb4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x115eb8: 0x46011836  c.le.s      $f3, $f1
    ctx->pc = 0x115eb8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x115ebc: 0x0  nop
    ctx->pc = 0x115ebcu;
    // NOP
    // 0x115ec0: 0x45020010  bc1fl       . + 4 + (0x10 << 2)
    ctx->pc = 0x115EC0u;
    {
        const bool branch_taken_0x115ec0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x115ec0) {
            ctx->pc = 0x115EC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x115EC0u;
            // 0x115ec4: 0x8e420204  lw          $v0, 0x204($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 516)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x115F04u;
            goto label_115f04;
        }
    }
    ctx->pc = 0x115EC8u;
    // 0x115ec8: 0xc4600020  lwc1        $f0, 0x20($v1)
    ctx->pc = 0x115ec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x115ecc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x115eccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x115ed0: 0x0  nop
    ctx->pc = 0x115ed0u;
    // NOP
    // 0x115ed4: 0x4502000b  bc1fl       . + 4 + (0xB << 2)
    ctx->pc = 0x115ED4u;
    {
        const bool branch_taken_0x115ed4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x115ed4) {
            ctx->pc = 0x115ED8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x115ED4u;
            // 0x115ed8: 0x8e420204  lw          $v0, 0x204($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 516)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x115F04u;
            goto label_115f04;
        }
    }
    ctx->pc = 0x115EDCu;
    // 0x115edc: 0x6ba20067  ldl         $v0, 0x67($sp)
    ctx->pc = 0x115edcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x115ee0: 0x6fa20060  ldr         $v0, 0x60($sp)
    ctx->pc = 0x115ee0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x115ee4: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x115ee4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x115ee8: 0xb3a20057  sdl         $v0, 0x57($sp)
    ctx->pc = 0x115ee8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x115eec: 0xb7a20050  sdr         $v0, 0x50($sp)
    ctx->pc = 0x115eecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x115ef0: 0xafa50058  sw          $a1, 0x58($sp)
    ctx->pc = 0x115ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 5));
    // 0x115ef4: 0x46003246  mov.s       $f9, $f6
    ctx->pc = 0x115ef4u;
    ctx->f[9] = FPU_MOV_S(ctx->f[6]);
    // 0x115ef8: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x115ef8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115efc: 0x0  nop
    ctx->pc = 0x115efcu;
    // NOP
label_115f00:
    // 0x115f00: 0x8e420204  lw          $v0, 0x204($s2)
    ctx->pc = 0x115f00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 516)));
label_115f04:
    // 0x115f04: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x115f04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x115f08: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x115f08u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x115f0c: 0x1440ffa8  bnez        $v0, . + 4 + (-0x58 << 2)
    ctx->pc = 0x115F0Cu;
    {
        const bool branch_taken_0x115f0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x115F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115F0Cu;
        // 0x115f10: 0x2463003c  addiu       $v1, $v1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115f0c) {
            ctx->pc = 0x115DB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_115db0;
        }
    }
    ctx->pc = 0x115F14u;
label_115f14:
    // 0x115f14: 0x12000082  beqz        $s0, . + 4 + (0x82 << 2)
    ctx->pc = 0x115F14u;
    {
        const bool branch_taken_0x115f14 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x115F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115F14u;
        // 0x115f18: 0xc7a30040  lwc1        $f3, 0x40($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x115f14) {
            ctx->pc = 0x116120u;
            goto label_116120;
        }
    }
    ctx->pc = 0x115F1Cu;
    // 0x115f1c: 0xc7a10050  lwc1        $f1, 0x50($sp)
    ctx->pc = 0x115f1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x115f20: 0xc7a20054  lwc1        $f2, 0x54($sp)
    ctx->pc = 0x115f20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x115f24: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x115f24u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x115f28: 0xc7a40044  lwc1        $f4, 0x44($sp)
    ctx->pc = 0x115f28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x115f2c: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x115f2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x115f30: 0xc7a30048  lwc1        $f3, 0x48($sp)
    ctx->pc = 0x115f30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x115f34: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x115f34u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x115f38: 0xe7a10060  swc1        $f1, 0x60($sp)
    ctx->pc = 0x115f38u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x115f3c: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x115f3cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x115f40: 0xe7a20064  swc1        $f2, 0x64($sp)
    ctx->pc = 0x115f40u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x115f44: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x115f44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x115f48: 0x6ba20057  ldl         $v0, 0x57($sp)
    ctx->pc = 0x115f48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x115f4c: 0x6fa20050  ldr         $v0, 0x50($sp)
    ctx->pc = 0x115f4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x115f50: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x115f50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x115f54: 0xb3a20047  sdl         $v0, 0x47($sp)
    ctx->pc = 0x115f54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x115f58: 0xb7a20040  sdr         $v0, 0x40($sp)
    ctx->pc = 0x115f58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x115f5c: 0xafa30048  sw          $v1, 0x48($sp)
    ctx->pc = 0x115f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 3));
    // 0x115f60: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x115f60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x115f64: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x115f64u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x115f68: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x115f68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x115f6c: 0xc7a70000  lwc1        $f7, 0x0($sp)
    ctx->pc = 0x115f6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x115f70: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x115f70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x115f74: 0xc7a60004  lwc1        $f6, 0x4($sp)
    ctx->pc = 0x115f74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x115f78: 0xc6020004  lwc1        $f2, 0x4($s0)
    ctx->pc = 0x115f78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x115f7c: 0x46013842  mul.s       $f1, $f7, $f1
    ctx->pc = 0x115f7cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[7], ctx->f[1]);
    // 0x115f80: 0xc7a50008  lwc1        $f5, 0x8($sp)
    ctx->pc = 0x115f80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x115f84: 0x46023082  mul.s       $f2, $f6, $f2
    ctx->pc = 0x115f84u;
    ctx->f[2] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
    // 0x115f88: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x115f88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x115f8c: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->pc = 0x115f8cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x115f90: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x115f90u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x115f94: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x115f94u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x115f98: 0x460118c3  div.s       $f3, $f3, $f1
    ctx->pc = 0x115f98u;
    ctx->f[3] = FPU_DIV_S(ctx, ctx->f[3], ctx->f[1]);
    // 0x115f9c: 0x460339c2  mul.s       $f7, $f7, $f3
    ctx->pc = 0x115f9cu;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[3]);
    // 0x115fa0: 0x46032942  mul.s       $f5, $f5, $f3
    ctx->pc = 0x115fa0u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[3]);
    // 0x115fa4: 0xc7a40040  lwc1        $f4, 0x40($sp)
    ctx->pc = 0x115fa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x115fa8: 0x46033182  mul.s       $f6, $f6, $f3
    ctx->pc = 0x115fa8u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[3]);
    // 0x115fac: 0xc7a20044  lwc1        $f2, 0x44($sp)
    ctx->pc = 0x115facu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x115fb0: 0xc7a30048  lwc1        $f3, 0x48($sp)
    ctx->pc = 0x115fb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x115fb4: 0x46072100  add.s       $f4, $f4, $f7
    ctx->pc = 0x115fb4u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[7]);
    // 0x115fb8: 0x46061080  add.s       $f2, $f2, $f6
    ctx->pc = 0x115fb8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[6]);
    // 0x115fbc: 0x460518c0  add.s       $f3, $f3, $f5
    ctx->pc = 0x115fbcu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
    // 0x115fc0: 0xe7a40040  swc1        $f4, 0x40($sp)
    ctx->pc = 0x115fc0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x115fc4: 0xe7a20044  swc1        $f2, 0x44($sp)
    ctx->pc = 0x115fc4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x115fc8: 0xe7a30048  swc1        $f3, 0x48($sp)
    ctx->pc = 0x115fc8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x115fcc: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x115fccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x115fd0: 0xc6250004  lwc1        $f5, 0x4($s1)
    ctx->pc = 0x115fd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x115fd4: 0x46002101  sub.s       $f4, $f4, $f0
    ctx->pc = 0x115fd4u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x115fd8: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x115fd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x115fdc: 0x46051081  sub.s       $f2, $f2, $f5
    ctx->pc = 0x115fdcu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[5]);
    // 0x115fe0: 0x460118c1  sub.s       $f3, $f3, $f1
    ctx->pc = 0x115fe0u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x115fe4: 0xe7a40070  swc1        $f4, 0x70($sp)
    ctx->pc = 0x115fe4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x115fe8: 0xe7a20074  swc1        $f2, 0x74($sp)
    ctx->pc = 0x115fe8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x115fec: 0xe7a30078  swc1        $f3, 0x78($sp)
    ctx->pc = 0x115fecu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x115ff0: 0xc093aa8  jal         func_24EAA0
    ctx->pc = 0x115FF0u;
    SET_GPR_U32(ctx, 31, 0x115FF8u);
    ctx->pc = 0x115FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115FF0u;
    // 0x115ff4: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EAA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EAA0u, 0x115FF0u, 0x115FF8u)) {
        return;
    }
    ctx->pc = 0x115FF8u;
label_115ff8:
    // 0x115ff8: 0xc7a40010  lwc1        $f4, 0x10($sp)
    ctx->pc = 0x115ff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x115ffc: 0xc6030000  lwc1        $f3, 0x0($s0)
    ctx->pc = 0x115ffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x116000: 0xc7a50014  lwc1        $f5, 0x14($sp)
    ctx->pc = 0x116000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x116004: 0xc6020004  lwc1        $f2, 0x4($s0)
    ctx->pc = 0x116004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x116008: 0x46032042  mul.s       $f1, $f4, $f3
    ctx->pc = 0x116008u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x11600c: 0xc7a60018  lwc1        $f6, 0x18($sp)
    ctx->pc = 0x11600cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x116010: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x116010u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x116014: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x116014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x116018: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x116018u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x11601c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x11601cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x116020: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x116020u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x116024: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x116024u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x116028: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x116028u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x11602c: 0x46032100  add.s       $f4, $f4, $f3
    ctx->pc = 0x11602cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
    // 0x116030: 0xe7a40010  swc1        $f4, 0x10($sp)
    ctx->pc = 0x116030u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x116034: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x116034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x116038: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x116038u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x11603c: 0x46002940  add.s       $f5, $f5, $f0
    ctx->pc = 0x11603cu;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
    // 0x116040: 0xe7a50014  swc1        $f5, 0x14($sp)
    ctx->pc = 0x116040u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x116044: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x116044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x116048: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x116048u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x11604c: 0x46003180  add.s       $f6, $f6, $f0
    ctx->pc = 0x11604cu;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[0]);
    // 0x116050: 0xe7a60018  swc1        $f6, 0x18($sp)
    ctx->pc = 0x116050u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x116054: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x116054u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116058: 0xc093a88  jal         func_24EA20
    ctx->pc = 0x116058u;
    SET_GPR_U32(ctx, 31, 0x116060u);
    ctx->pc = 0x11605Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116058u;
    // 0x11605c: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EA20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EA20u, 0x116058u, 0x116060u)) {
        return;
    }
    ctx->pc = 0x116060u;
label_116060:
    // 0x116060: 0xc7a30000  lwc1        $f3, 0x0($sp)
    ctx->pc = 0x116060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x116064: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x116064u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x116068: 0xc7a40004  lwc1        $f4, 0x4($sp)
    ctx->pc = 0x116068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x11606c: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x11606cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x116070: 0xc7a20034  lwc1        $f2, 0x34($sp)
    ctx->pc = 0x116070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x116074: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x116074u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x116078: 0xc7a50008  lwc1        $f5, 0x8($sp)
    ctx->pc = 0x116078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x11607c: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x11607cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x116080: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x116080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x116084: 0x44803000  mtc1        $zero, $f6
    ctx->pc = 0x116084u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x116088: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x116088u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x11608c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x11608cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x116090: 0x4606a034  c.lt.s      $f20, $f6
    ctx->pc = 0x116090u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x116094: 0x0  nop
    ctx->pc = 0x116094u;
    // NOP
    // 0x116098: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x116098u;
    {
        const bool branch_taken_0x116098 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x11609Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116098u;
        // 0x11609c: 0x46000840  add.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x116098) {
            ctx->pc = 0x1160D0u;
            goto label_1160d0;
        }
    }
    ctx->pc = 0x1160A0u;
    // 0x1160a0: 0x46060834  c.lt.s      $f1, $f6
    ctx->pc = 0x1160a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1160a4: 0x0  nop
    ctx->pc = 0x1160a4u;
    // NOP
    // 0x1160a8: 0x4503000f  bc1tl       . + 4 + (0xF << 2)
    ctx->pc = 0x1160A8u;
    {
        const bool branch_taken_0x1160a8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1160a8) {
            ctx->pc = 0x1160ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1160A8u;
            // 0x1160ac: 0x46141802  mul.s       $f0, $f3, $f20 (Delay Slot)
            ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[20]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1160E8u;
            goto label_1160e8;
        }
    }
    ctx->pc = 0x1160B0u;
    // 0x1160b0: 0x6ba60047  ldl         $a2, 0x47($sp)
    ctx->pc = 0x1160b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1160b4: 0x6fa60040  ldr         $a2, 0x40($sp)
    ctx->pc = 0x1160b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1160b8: 0x8fa70048  lw          $a3, 0x48($sp)
    ctx->pc = 0x1160b8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1160bc: 0xb2660007  sdl         $a2, 0x7($s3)
    ctx->pc = 0x1160bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1160c0: 0xb6660000  sdr         $a2, 0x0($s3)
    ctx->pc = 0x1160c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1160c4: 0xae670008  sw          $a3, 0x8($s3)
    ctx->pc = 0x1160c4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 7));
    // 0x1160c8: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x1160C8u;
    {
        const bool branch_taken_0x1160c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1160CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1160C8u;
        // 0x1160cc: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1160c8) {
            ctx->pc = 0x116204u;
            goto label_116204;
        }
    }
    ctx->pc = 0x1160D0u;
label_1160d0:
    // 0x1160d0: 0x46013034  c.lt.s      $f6, $f1
    ctx->pc = 0x1160d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1160d4: 0x0  nop
    ctx->pc = 0x1160d4u;
    // NOP
    // 0x1160d8: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x1160D8u;
    {
        const bool branch_taken_0x1160d8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1160d8) {
            ctx->pc = 0x116100u;
            goto label_116100;
        }
    }
    ctx->pc = 0x1160E0u;
    // 0x1160e0: 0x46141802  mul.s       $f0, $f3, $f20
    ctx->pc = 0x1160e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[20]);
    // 0x1160e4: 0x0  nop
    ctx->pc = 0x1160e4u;
    // NOP
label_1160e8:
    // 0x1160e8: 0x46142042  mul.s       $f1, $f4, $f20
    ctx->pc = 0x1160e8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[20]);
    // 0x1160ec: 0x46142882  mul.s       $f2, $f5, $f20
    ctx->pc = 0x1160ecu;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[20]);
    // 0x1160f0: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x1160f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1160f4: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x1160f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1160f8: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1160F8u;
    {
        const bool branch_taken_0x1160f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1160FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1160F8u;
        // 0x1160fc: 0xe7a20018  swc1        $f2, 0x18($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1160f8) {
            ctx->pc = 0x116150u;
            goto label_116150;
        }
    }
    ctx->pc = 0x116100u;
label_116100:
    // 0x116100: 0x6ba40047  ldl         $a0, 0x47($sp)
    ctx->pc = 0x116100u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x116104: 0x6fa40040  ldr         $a0, 0x40($sp)
    ctx->pc = 0x116104u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x116108: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x116108u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x11610c: 0xb2640007  sdl         $a0, 0x7($s3)
    ctx->pc = 0x11610cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x116110: 0xb6640000  sdr         $a0, 0x0($s3)
    ctx->pc = 0x116110u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x116114: 0xae650008  sw          $a1, 0x8($s3)
    ctx->pc = 0x116114u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 5));
    // 0x116118: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x116118u;
    {
        const bool branch_taken_0x116118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11611Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116118u;
        // 0x11611c: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116118) {
            ctx->pc = 0x116204u;
            goto label_116204;
        }
    }
    ctx->pc = 0x116120u;
label_116120:
    // 0x116120: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x116120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x116124: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x116124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x116128: 0xc7a20048  lwc1        $f2, 0x48($sp)
    ctx->pc = 0x116128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x11612c: 0xc7a30010  lwc1        $f3, 0x10($sp)
    ctx->pc = 0x11612cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x116130: 0xc7a40014  lwc1        $f4, 0x14($sp)
    ctx->pc = 0x116130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x116134: 0xc7a50018  lwc1        $f5, 0x18($sp)
    ctx->pc = 0x116134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x116138: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x116138u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x11613c: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x11613cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x116140: 0x46051080  add.s       $f2, $f2, $f5
    ctx->pc = 0x116140u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[5]);
    // 0x116144: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x116144u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x116148: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x116148u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x11614c: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x11614cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_116150:
    // 0x116150: 0x12a00019  beqz        $s5, . + 4 + (0x19 << 2)
    ctx->pc = 0x116150u;
    {
        const bool branch_taken_0x116150 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x116154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116150u;
        // 0x116154: 0xc7a30040  lwc1        $f3, 0x40($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x116150) {
            ctx->pc = 0x1161B8u;
            goto label_1161b8;
        }
    }
    ctx->pc = 0x116158u;
    // 0x116158: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x116158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11615c: 0xc6220004  lwc1        $f2, 0x4($s1)
    ctx->pc = 0x11615cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x116160: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x116160u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x116164: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x116164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x116168: 0xc7a40044  lwc1        $f4, 0x44($sp)
    ctx->pc = 0x116168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x11616c: 0xc7a30048  lwc1        $f3, 0x48($sp)
    ctx->pc = 0x11616cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x116170: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x116170u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x116174: 0xe7a10060  swc1        $f1, 0x60($sp)
    ctx->pc = 0x116174u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x116178: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x116178u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x11617c: 0xe7a20064  swc1        $f2, 0x64($sp)
    ctx->pc = 0x11617cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x116180: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x116180u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x116184: 0xc093aa8  jal         func_24EAA0
    ctx->pc = 0x116184u;
    SET_GPR_U32(ctx, 31, 0x11618Cu);
    ctx->pc = 0x116188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116184u;
    // 0x116188: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EAA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EAA0u, 0x116184u, 0x11618Cu)) {
        return;
    }
    ctx->pc = 0x11618Cu;
label_11618c:
    // 0x11618c: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x11618cu;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x116190: 0xc640008c  lwc1        $f0, 0x8C($s2)
    ctx->pc = 0x116190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x116194: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x116194u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x116198: 0x0  nop
    ctx->pc = 0x116198u;
    // NOP
    // 0x11619c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x11619Cu;
    {
        const bool branch_taken_0x11619c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x11619c) {
            ctx->pc = 0x1161B8u;
            goto label_1161b8;
        }
    }
    ctx->pc = 0x1161A4u;
    // 0x1161a4: 0xc6400090  lwc1        $f0, 0x90($s2)
    ctx->pc = 0x1161a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1161a8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1161a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1161ac: 0x0  nop
    ctx->pc = 0x1161acu;
    // NOP
    // 0x1161b0: 0x4501ffd3  bc1t        . + 4 + (-0x2D << 2)
    ctx->pc = 0x1161B0u;
    {
        const bool branch_taken_0x1161b0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1161b0) {
            ctx->pc = 0x116100u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_116100;
        }
    }
    ctx->pc = 0x1161B8u;
label_1161b8:
    // 0x1161b8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1161b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1161bc: 0x0  nop
    ctx->pc = 0x1161bcu;
    // NOP
    // 0x1161c0: 0x46140834  c.lt.s      $f1, $f20
    ctx->pc = 0x1161c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1161c4: 0x0  nop
    ctx->pc = 0x1161c4u;
    // NOP
    // 0x1161c8: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x1161C8u;
    {
        const bool branch_taken_0x1161c8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1161c8) {
            ctx->pc = 0x1161E8u;
            goto label_1161e8;
        }
    }
    ctx->pc = 0x1161D0u;
    // 0x1161d0: 0x4615a034  c.lt.s      $f20, $f21
    ctx->pc = 0x1161d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1161d4: 0x0  nop
    ctx->pc = 0x1161d4u;
    // NOP
    // 0x1161d8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1161D8u;
    {
        const bool branch_taken_0x1161d8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1161d8) {
            ctx->pc = 0x1161E8u;
            goto label_1161e8;
        }
    }
    ctx->pc = 0x1161E0u;
    // 0x1161e0: 0x5e80fee3  bgtzl       $s4, . + 4 + (-0x11D << 2)
    ctx->pc = 0x1161E0u;
    {
        const bool branch_taken_0x1161e0 = (GPR_S64(ctx, 20) > 0);
        if (branch_taken_0x1161e0) {
            ctx->pc = 0x1161E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1161E0u;
            // 0x1161e4: 0x8e420204  lw          $v0, 0x204($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 516)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x115D70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_115d70;
        }
    }
    ctx->pc = 0x1161E8u;
label_1161e8:
    // 0x1161e8: 0x6ba20047  ldl         $v0, 0x47($sp)
    ctx->pc = 0x1161e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1161ec: 0x6fa20040  ldr         $v0, 0x40($sp)
    ctx->pc = 0x1161ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1161f0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1161f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1161f4: 0xb2620007  sdl         $v0, 0x7($s3)
    ctx->pc = 0x1161f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1161f8: 0xb6620000  sdr         $v0, 0x0($s3)
    ctx->pc = 0x1161f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1161fc: 0xae630008  sw          $v1, 0x8($s3)
    ctx->pc = 0x1161fcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 3));
    // 0x116200: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x116200u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_116204:
    // 0x116204: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x116204u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x116208: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x116208u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x11620c: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x11620cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x116210: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x116210u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x116214: 0x7bb50090  lq          $s5, 0x90($sp)
    ctx->pc = 0x116214u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x116218: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x116218u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x11621c: 0xc7b500f8  lwc1        $f21, 0xF8($sp)
    ctx->pc = 0x11621cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x116220: 0xc7b400f0  lwc1        $f20, 0xF0($sp)
    ctx->pc = 0x116220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x116224: 0x3e00008  jr          $ra
    ctx->pc = 0x116224u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x116228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116224u;
        // 0x116228: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x116224u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11622Cu;
    // 0x11622c: 0x0  nop
    ctx->pc = 0x11622cu;
    // NOP
    ctx->pc = 0x116230u;
}
