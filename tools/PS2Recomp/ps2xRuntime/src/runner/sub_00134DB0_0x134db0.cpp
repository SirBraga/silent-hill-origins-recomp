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

// Function: sub_00134DB0
// Address: 0x134db0 - 0x134fc8
void sub_00134DB0_0x134db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00134DB0_0x134db0");
#endif

    switch (ctx->pc) {
        case 0x134de4u: goto label_134de4;
        case 0x134decu: goto label_134dec;
        case 0x134ea8u: goto label_134ea8;
        case 0x134ec8u: goto label_134ec8;
        case 0x134f0cu: goto label_134f0c;
        case 0x134f5cu: goto label_134f5c;
        case 0x134f80u: goto label_134f80;
        case 0x134f94u: goto label_134f94;
        case 0x134fa4u: goto label_134fa4;
        default: break;
    }

    ctx->pc = 0x134db0u;

    // 0x134db0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x134db0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x134db4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x134db4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x134db8: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x134db8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x134dbc: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x134dbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x134dc0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x134dc0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134dc4: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x134dc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x134dc8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x134dc8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134dcc: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x134dccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x134dd0: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x134dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x134dd4: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x134dd4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x134dd8: 0xae321a34  sw          $s2, 0x1A34($s1)
    ctx->pc = 0x134dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6708), GPR_U32(ctx, 18));
    // 0x134ddc: 0xc062118  jal         func_188460
    ctx->pc = 0x134DDCu;
    SET_GPR_U32(ctx, 31, 0x134DE4u);
    ctx->pc = 0x134DE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134DDCu;
    // 0x134de0: 0xae221a58  sw          $v0, 0x1A58($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 6744), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x188460u, 0x134DDCu, 0x134DE4u)) {
        return;
    }
    ctx->pc = 0x134DE4u;
label_134de4:
    // 0x134de4: 0xc04f0cc  jal         func_13C330
    ctx->pc = 0x134DE4u;
    SET_GPR_U32(ctx, 31, 0x134DECu);
    ctx->pc = 0x134DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134DE4u;
    // 0x134de8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x134DE4u, 0x134DECu)) {
        return;
    }
    ctx->pc = 0x134DECu;
label_134dec:
    // 0x134dec: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x134decu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x134df0: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x134df0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x134df4: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x134df4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x134df8: 0xb3a30027  sdl         $v1, 0x27($sp)
    ctx->pc = 0x134df8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x134dfc: 0xb7a30020  sdr         $v1, 0x20($sp)
    ctx->pc = 0x134dfcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x134e00: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x134e00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x134e04: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x134e04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x134e08: 0xc7a30020  lwc1        $f3, 0x20($sp)
    ctx->pc = 0x134e08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x134e0c: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x134e0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x134e10: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x134e10u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x134e14: 0xc7a40024  lwc1        $f4, 0x24($sp)
    ctx->pc = 0x134e14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x134e18: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x134e18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x134e1c: 0xc7a30028  lwc1        $f3, 0x28($sp)
    ctx->pc = 0x134e1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x134e20: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x134e20u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x134e24: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x134e24u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x134e28: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x134e28u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x134e2c: 0xe7a20034  swc1        $f2, 0x34($sp)
    ctx->pc = 0x134e2cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x134e30: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x134e30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x134e34: 0x6ba20037  ldl         $v0, 0x37($sp)
    ctx->pc = 0x134e34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x134e38: 0x6fa20030  ldr         $v0, 0x30($sp)
    ctx->pc = 0x134e38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x134e3c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x134e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x134e40: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x134e40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x134e44: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x134e44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x134e48: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x134e48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x134e4c: 0x6ba60007  ldl         $a2, 0x7($sp)
    ctx->pc = 0x134e4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x134e50: 0x6fa60000  ldr         $a2, 0x0($sp)
    ctx->pc = 0x134e50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x134e54: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x134e54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x134e58: 0xb2261a47  sdl         $a2, 0x1A47($s1)
    ctx->pc = 0x134e58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 6727); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x134e5c: 0xb6261a40  sdr         $a2, 0x1A40($s1)
    ctx->pc = 0x134e5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 6720); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x134e60: 0xae221a48  sw          $v0, 0x1A48($s1)
    ctx->pc = 0x134e60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6728), GPR_U32(ctx, 2));
    // 0x134e64: 0x26301a40  addiu       $s0, $s1, 0x1A40
    ctx->pc = 0x134e64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 6720));
    // 0x134e68: 0xae201a44  sw          $zero, 0x1A44($s1)
    ctx->pc = 0x134e68u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6724), GPR_U32(ctx, 0));
    // 0x134e6c: 0xc6201a40  lwc1        $f0, 0x1A40($s1)
    ctx->pc = 0x134e6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 6720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x134e70: 0xc6020004  lwc1        $f2, 0x4($s0)
    ctx->pc = 0x134e70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x134e74: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x134e74u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x134e78: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x134e78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x134e7c: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x134e7cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x134e80: 0xc6341a44  lwc1        $f20, 0x1A44($s1)
    ctx->pc = 0x134e80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 6724)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x134e84: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x134e84u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x134e88: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x134e88u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x134e8c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x134e8cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x134e90: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x134e90u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x134e94: 0x0  nop
    ctx->pc = 0x134e94u;
    // NOP
    // 0x134e98: 0x4500001a  bc1f        . + 4 + (0x1A << 2)
    ctx->pc = 0x134E98u;
    {
        const bool branch_taken_0x134e98 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x134E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134E98u;
        // 0x134e9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134e98) {
            ctx->pc = 0x134F04u;
            goto label_134f04;
        }
    }
    ctx->pc = 0x134EA0u;
    // 0x134ea0: 0xc04642c  jal         func_1190B0
    ctx->pc = 0x134EA0u;
    SET_GPR_U32(ctx, 31, 0x134EA8u);
    ctx->pc = 0x134EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134EA0u;
    // 0x134ea4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1190B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1190B0u, 0x134EA0u, 0x134EA8u)) {
        return;
    }
    ctx->pc = 0x134EA8u;
label_134ea8:
    // 0x134ea8: 0x0  nop
    ctx->pc = 0x134ea8u;
    // NOP
    // 0x134eac: 0x0  nop
    ctx->pc = 0x134eacu;
    // NOP
    // 0x134eb0: 0x46000044  c1          0x44
    ctx->pc = 0x134eb0u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x134eb4: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x134eb4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x134eb8: 0x0  nop
    ctx->pc = 0x134eb8u;
    // NOP
    // 0x134ebc: 0x4501000b  bc1t        . + 4 + (0xB << 2)
    ctx->pc = 0x134EBCu;
    {
        const bool branch_taken_0x134ebc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x134EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134EBCu;
        // 0x134ec0: 0x460008c6  mov.s       $f3, $f1 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x134ebc) {
            ctx->pc = 0x134EECu;
            goto label_134eec;
        }
    }
    ctx->pc = 0x134EC4u;
    // 0x134ec4: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x134ec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_134ec8:
    // 0x134ec8: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x134ec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x134ecc: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x134eccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x134ed0: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x134ed0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x134ed4: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x134ed4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x134ed8: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x134ed8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x134edc: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x134edcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x134ee0: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x134ee0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x134ee4: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x134EE4u;
    {
        const bool branch_taken_0x134ee4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134EE4u;
        // 0x134ee8: 0xe6020008  swc1        $f2, 0x8($s0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x134ee4) {
            ctx->pc = 0x134F3Cu;
            goto label_134f3c;
        }
    }
    ctx->pc = 0x134EECu;
label_134eec:
    // 0x134eec: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x134eecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x134ef0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x134ef0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x134ef4: 0x0  nop
    ctx->pc = 0x134ef4u;
    // NOP
    // 0x134ef8: 0x460100c3  div.s       $f3, $f0, $f1
    ctx->pc = 0x134ef8u;
    ctx->f[3] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[1]);
    // 0x134efc: 0x1000fff2  b           . + 4 + (-0xE << 2)
    ctx->pc = 0x134EFCu;
    {
        const bool branch_taken_0x134efc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134EFCu;
        // 0x134f00: 0xc6000000  lwc1        $f0, 0x0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x134efc) {
            ctx->pc = 0x134EC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_134ec8;
        }
    }
    ctx->pc = 0x134F04u;
label_134f04:
    // 0x134f04: 0xc04f0f0  jal         func_13C3C0
    ctx->pc = 0x134F04u;
    SET_GPR_U32(ctx, 31, 0x134F0Cu);
    ctx->pc = 0x134F08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134F04u;
    // 0x134f08: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C3C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C3C0u, 0x134F04u, 0x134F0Cu)) {
        return;
    }
    ctx->pc = 0x134F0Cu;
label_134f0c:
    // 0x134f0c: 0x68450007  ldl         $a1, 0x7($v0)
    ctx->pc = 0x134f0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x134f10: 0x6c450000  ldr         $a1, 0x0($v0)
    ctx->pc = 0x134f10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x134f14: 0x8c460008  lw          $a2, 0x8($v0)
    ctx->pc = 0x134f14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x134f18: 0xb3a50007  sdl         $a1, 0x7($sp)
    ctx->pc = 0x134f18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x134f1c: 0xb7a50000  sdr         $a1, 0x0($sp)
    ctx->pc = 0x134f1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x134f20: 0xafa60008  sw          $a2, 0x8($sp)
    ctx->pc = 0x134f20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
    // 0x134f24: 0x6ba50007  ldl         $a1, 0x7($sp)
    ctx->pc = 0x134f24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x134f28: 0x6fa50000  ldr         $a1, 0x0($sp)
    ctx->pc = 0x134f28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x134f2c: 0x8fa60008  lw          $a2, 0x8($sp)
    ctx->pc = 0x134f2cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x134f30: 0xb2251a47  sdl         $a1, 0x1A47($s1)
    ctx->pc = 0x134f30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 6727); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x134f34: 0xb6251a40  sdr         $a1, 0x1A40($s1)
    ctx->pc = 0x134f34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 6720); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x134f38: 0xae261a48  sw          $a2, 0x1A48($s1)
    ctx->pc = 0x134f38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6728), GPR_U32(ctx, 6));
label_134f3c:
    // 0x134f3c: 0x8e450110  lw          $a1, 0x110($s2)
    ctx->pc = 0x134f3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 272)));
    // 0x134f40: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x134f40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x134f44: 0x14a20007  bne         $a1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x134F44u;
    {
        const bool branch_taken_0x134f44 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x134F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134F44u;
        // 0x134f48: 0x26300320  addiu       $s0, $s1, 0x320 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 800));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134f44) {
            ctx->pc = 0x134F64u;
            goto label_134f64;
        }
    }
    ctx->pc = 0x134F4Cu;
    // 0x134f4c: 0x262515d0  addiu       $a1, $s1, 0x15D0
    ctx->pc = 0x134f4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 5584));
    // 0x134f50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x134f50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134f54: 0xc067fca  jal         func_19FF28
    ctx->pc = 0x134F54u;
    SET_GPR_U32(ctx, 31, 0x134F5Cu);
    ctx->pc = 0x134F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134F54u;
    // 0x134f58: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FF28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x19FF28u, 0x134F54u, 0x134F5Cu)) {
        return;
    }
    ctx->pc = 0x134F5Cu;
label_134f5c:
    // 0x134f5c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x134F5Cu;
    {
        const bool branch_taken_0x134f5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134F5Cu;
        // 0x134f60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134f5c) {
            ctx->pc = 0x134F98u;
            goto label_134f98;
        }
    }
    ctx->pc = 0x134F64u;
label_134f64:
    // 0x134f64: 0x14a00008  bnez        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x134F64u;
    {
        const bool branch_taken_0x134f64 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x134F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134F64u;
        // 0x134f68: 0x262515e8  addiu       $a1, $s1, 0x15E8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 5608));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134f64) {
            ctx->pc = 0x134F88u;
            goto label_134f88;
        }
    }
    ctx->pc = 0x134F6Cu;
    // 0x134f6c: 0x26300320  addiu       $s0, $s1, 0x320
    ctx->pc = 0x134f6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 800));
    // 0x134f70: 0x262515d8  addiu       $a1, $s1, 0x15D8
    ctx->pc = 0x134f70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 5592));
    // 0x134f74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x134f74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134f78: 0xc067fca  jal         func_19FF28
    ctx->pc = 0x134F78u;
    SET_GPR_U32(ctx, 31, 0x134F80u);
    ctx->pc = 0x134F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134F78u;
    // 0x134f7c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FF28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x19FF28u, 0x134F78u, 0x134F80u)) {
        return;
    }
    ctx->pc = 0x134F80u;
label_134f80:
    // 0x134f80: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x134F80u;
    {
        const bool branch_taken_0x134f80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134F80u;
        // 0x134f84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134f80) {
            ctx->pc = 0x134F98u;
            goto label_134f98;
        }
    }
    ctx->pc = 0x134F88u;
label_134f88:
    // 0x134f88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x134f88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134f8c: 0xc067fca  jal         func_19FF28
    ctx->pc = 0x134F8Cu;
    SET_GPR_U32(ctx, 31, 0x134F94u);
    ctx->pc = 0x134F90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134F8Cu;
    // 0x134f90: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FF28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x19FF28u, 0x134F8Cu, 0x134F94u)) {
        return;
    }
    ctx->pc = 0x134F94u;
label_134f94:
    // 0x134f94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x134f94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_134f98:
    // 0x134f98: 0x262515e0  addiu       $a1, $s1, 0x15E0
    ctx->pc = 0x134f98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 5600));
    // 0x134f9c: 0xc067fca  jal         func_19FF28
    ctx->pc = 0x134F9Cu;
    SET_GPR_U32(ctx, 31, 0x134FA4u);
    ctx->pc = 0x134FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134F9Cu;
    // 0x134fa0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FF28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x19FF28u, 0x134F9Cu, 0x134FA4u)) {
        return;
    }
    ctx->pc = 0x134FA4u;
label_134fa4:
    // 0x134fa4: 0xae201874  sw          $zero, 0x1874($s1)
    ctx->pc = 0x134fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6260), GPR_U32(ctx, 0));
    // 0x134fa8: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x134fa8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x134fac: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x134facu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x134fb0: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x134fb0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x134fb4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x134fb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x134fb8: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x134fb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x134fbc: 0x3e00008  jr          $ra
    ctx->pc = 0x134FBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x134FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134FBCu;
        // 0x134fc0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x134FBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x134FC4u;
    // 0x134fc4: 0x0  nop
    ctx->pc = 0x134fc4u;
    // NOP
    ctx->pc = 0x134fc8u;
}
