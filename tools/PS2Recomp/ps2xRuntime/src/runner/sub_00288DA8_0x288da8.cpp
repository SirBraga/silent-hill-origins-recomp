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

// Function: sub_00288DA8
// Address: 0x288da8 - 0x289130
void sub_00288DA8_0x288da8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00288DA8_0x288da8");
#endif

    switch (ctx->pc) {
        case 0x288dd8u: goto label_288dd8;
        case 0x288dfcu: goto label_288dfc;
        case 0x288f70u: goto label_288f70;
        default: break;
    }

    ctx->pc = 0x288da8u;

    // 0x288da8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x288da8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x288dac: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x288dacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x288db0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x288db0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x288db4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x288db4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x288db8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x288db8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x288dbc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x288dbcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288dc0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x288dc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x288dc4: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x288dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x288dc8: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x288DC8u;
    {
        const bool branch_taken_0x288dc8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x288DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288DC8u;
        // 0x288dcc: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288dc8) {
            ctx->pc = 0x288DE0u;
            goto label_288de0;
        }
    }
    ctx->pc = 0x288DD0u;
    // 0x288dd0: 0xc09292a  jal         func_24A4A8
    ctx->pc = 0x288DD0u;
    SET_GPR_U32(ctx, 31, 0x288DD8u);
    ctx->pc = 0x288DD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288DD0u;
    // 0x288dd4: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A4A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A4A8u, 0x288DD0u, 0x288DD8u)) {
        return;
    }
    ctx->pc = 0x288DD8u;
label_288dd8:
    // 0x288dd8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x288DD8u;
    {
        const bool branch_taken_0x288dd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x288DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288DD8u;
        // 0x288ddc: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288dd8) {
            ctx->pc = 0x288DE4u;
            goto label_288de4;
        }
    }
    ctx->pc = 0x288DE0u;
label_288de0:
    // 0x288de0: 0x8e320000  lw          $s2, 0x0($s1)
    ctx->pc = 0x288de0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_288de4:
    // 0x288de4: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x288de4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x288de8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x288de8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x288dec: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x288DECu;
    {
        const bool branch_taken_0x288dec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x288DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288DECu;
        // 0x288df0: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288dec) {
            ctx->pc = 0x288DFCu;
            goto label_288dfc;
        }
    }
    ctx->pc = 0x288DF4u;
    // 0x288df4: 0xc09294c  jal         func_24A530
    ctx->pc = 0x288DF4u;
    SET_GPR_U32(ctx, 31, 0x288DFCu);
    ctx->pc = 0x288DF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288DF4u;
    // 0x288df8: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A530u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A530u, 0x288DF4u, 0x288DFCu)) {
        return;
    }
    ctx->pc = 0x288DFCu;
label_288dfc:
    // 0x288dfc: 0x584000c1  blezl       $v0, . + 4 + (0xC1 << 2)
    ctx->pc = 0x288DFCu;
    {
        const bool branch_taken_0x288dfc = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x288dfc) {
            ctx->pc = 0x288E00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x288DFCu;
            // 0x288e00: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x289104u;
            goto label_289104;
        }
    }
    ctx->pc = 0x288E04u;
    // 0x288e04: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x288e04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288e08: 0x51023  negu        $v0, $a1
    ctx->pc = 0x288e08u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
    // 0x288e0c: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x288e0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x288e10: 0x10600054  beqz        $v1, . + 4 + (0x54 << 2)
    ctx->pc = 0x288E10u;
    {
        const bool branch_taken_0x288e10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x288E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288E10u;
        // 0x288e14: 0x26440008  addiu       $a0, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288e10) {
            ctx->pc = 0x288F64u;
            goto label_288f64;
        }
    }
    ctx->pc = 0x288E18u;
    // 0x288e18: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x288e18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x288e1c: 0x10400036  beqz        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x288E1Cu;
    {
        const bool branch_taken_0x288e1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x288E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288E1Cu;
        // 0x288e20: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x288e1c) {
            ctx->pc = 0x288EF8u;
            goto label_288ef8;
        }
    }
    ctx->pc = 0x288E24u;
    // 0x288e24: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x288E24u;
    {
        const bool branch_taken_0x288e24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x288E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288E24u;
        // 0x288e28: 0xc481fffc  lwc1        $f1, -0x4($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x288e24) {
            ctx->pc = 0x288E94u;
            goto label_288e94;
        }
    }
    ctx->pc = 0x288E2Cu;
    // 0x288e2c: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x288e2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x288e30: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x288e30u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x288e34: 0x0  nop
    ctx->pc = 0x288e34u;
    // NOP
    // 0x288e38: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x288E38u;
    {
        const bool branch_taken_0x288e38 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x288e38) {
            ctx->pc = 0x288E3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x288E38u;
            // 0x288e3c: 0xc6000008  lwc1        $f0, 0x8($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x288E48u;
            goto label_288e48;
        }
    }
    ctx->pc = 0x288E40u;
    // 0x288e40: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x288E40u;
    {
        const bool branch_taken_0x288e40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x288E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288E40u;
        // 0x288e44: 0xe6010000  swc1        $f1, 0x0($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x288e40) {
            ctx->pc = 0x288E58u;
            goto label_288e58;
        }
    }
    ctx->pc = 0x288E48u;
label_288e48:
    // 0x288e48: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x288e48u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x288e4c: 0x0  nop
    ctx->pc = 0x288e4cu;
    // NOP
    // 0x288e50: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x288E50u;
    {
        const bool branch_taken_0x288e50 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x288e50) {
            ctx->pc = 0x288E54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x288E50u;
            // 0x288e54: 0xe6010008  swc1        $f1, 0x8($s0) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x288E58u;
            goto label_288e58;
        }
    }
    ctx->pc = 0x288E58u;
label_288e58:
    // 0x288e58: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x288e58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x288e5c: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x288e5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x288e60: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x288e60u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x288e64: 0x0  nop
    ctx->pc = 0x288e64u;
    // NOP
    // 0x288e68: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x288E68u;
    {
        const bool branch_taken_0x288e68 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x288e68) {
            ctx->pc = 0x288E6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x288E68u;
            // 0x288e6c: 0xc600000c  lwc1        $f0, 0xC($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x288E78u;
            goto label_288e78;
        }
    }
    ctx->pc = 0x288E70u;
    // 0x288e70: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x288E70u;
    {
        const bool branch_taken_0x288e70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x288E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288E70u;
        // 0x288e74: 0xe6010004  swc1        $f1, 0x4($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x288e70) {
            ctx->pc = 0x288E88u;
            goto label_288e88;
        }
    }
    ctx->pc = 0x288E78u;
label_288e78:
    // 0x288e78: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x288e78u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x288e7c: 0x0  nop
    ctx->pc = 0x288e7cu;
    // NOP
    // 0x288e80: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x288E80u;
    {
        const bool branch_taken_0x288e80 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x288e80) {
            ctx->pc = 0x288E84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x288E80u;
            // 0x288e84: 0xe601000c  swc1        $f1, 0xC($s0) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x288E88u;
            goto label_288e88;
        }
    }
    ctx->pc = 0x288E88u;
label_288e88:
    // 0x288e88: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x288e88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x288e8c: 0x24840018  addiu       $a0, $a0, 0x18
    ctx->pc = 0x288e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
    // 0x288e90: 0xc481fffc  lwc1        $f1, -0x4($a0)
    ctx->pc = 0x288e90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_288e94:
    // 0x288e94: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x288e94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x288e98: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x288e98u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x288e9c: 0x0  nop
    ctx->pc = 0x288e9cu;
    // NOP
    // 0x288ea0: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x288EA0u;
    {
        const bool branch_taken_0x288ea0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x288ea0) {
            ctx->pc = 0x288EA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x288EA0u;
            // 0x288ea4: 0xc6000008  lwc1        $f0, 0x8($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x288EB0u;
            goto label_288eb0;
        }
    }
    ctx->pc = 0x288EA8u;
    // 0x288ea8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x288EA8u;
    {
        const bool branch_taken_0x288ea8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x288EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288EA8u;
        // 0x288eac: 0xe6010000  swc1        $f1, 0x0($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x288ea8) {
            ctx->pc = 0x288EC0u;
            goto label_288ec0;
        }
    }
    ctx->pc = 0x288EB0u;
label_288eb0:
    // 0x288eb0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x288eb0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x288eb4: 0x0  nop
    ctx->pc = 0x288eb4u;
    // NOP
    // 0x288eb8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x288EB8u;
    {
        const bool branch_taken_0x288eb8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x288eb8) {
            ctx->pc = 0x288EBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x288EB8u;
            // 0x288ebc: 0xe6010008  swc1        $f1, 0x8($s0) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x288EC0u;
            goto label_288ec0;
        }
    }
    ctx->pc = 0x288EC0u;
label_288ec0:
    // 0x288ec0: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x288ec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x288ec4: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x288ec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x288ec8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x288ec8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x288ecc: 0x0  nop
    ctx->pc = 0x288eccu;
    // NOP
    // 0x288ed0: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x288ED0u;
    {
        const bool branch_taken_0x288ed0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x288ed0) {
            ctx->pc = 0x288ED4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x288ED0u;
            // 0x288ed4: 0xc600000c  lwc1        $f0, 0xC($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x288EE0u;
            goto label_288ee0;
        }
    }
    ctx->pc = 0x288ED8u;
    // 0x288ed8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x288ED8u;
    {
        const bool branch_taken_0x288ed8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x288EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288ED8u;
        // 0x288edc: 0xe6010004  swc1        $f1, 0x4($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x288ed8) {
            ctx->pc = 0x288EF0u;
            goto label_288ef0;
        }
    }
    ctx->pc = 0x288EE0u;
label_288ee0:
    // 0x288ee0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x288ee0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x288ee4: 0x0  nop
    ctx->pc = 0x288ee4u;
    // NOP
    // 0x288ee8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x288EE8u;
    {
        const bool branch_taken_0x288ee8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x288ee8) {
            ctx->pc = 0x288EECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x288EE8u;
            // 0x288eec: 0xe601000c  swc1        $f1, 0xC($s0) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x288EF0u;
            goto label_288ef0;
        }
    }
    ctx->pc = 0x288EF0u;
label_288ef0:
    // 0x288ef0: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x288ef0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x288ef4: 0x24840018  addiu       $a0, $a0, 0x18
    ctx->pc = 0x288ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
label_288ef8:
    // 0x288ef8: 0xc481fffc  lwc1        $f1, -0x4($a0)
    ctx->pc = 0x288ef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x288efc: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x288efcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x288f00: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x288f00u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x288f04: 0x0  nop
    ctx->pc = 0x288f04u;
    // NOP
    // 0x288f08: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x288F08u;
    {
        const bool branch_taken_0x288f08 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x288f08) {
            ctx->pc = 0x288F0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x288F08u;
            // 0x288f0c: 0xc6000008  lwc1        $f0, 0x8($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x288F18u;
            goto label_288f18;
        }
    }
    ctx->pc = 0x288F10u;
    // 0x288f10: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x288F10u;
    {
        const bool branch_taken_0x288f10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x288F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288F10u;
        // 0x288f14: 0xe6010000  swc1        $f1, 0x0($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x288f10) {
            ctx->pc = 0x288F28u;
            goto label_288f28;
        }
    }
    ctx->pc = 0x288F18u;
label_288f18:
    // 0x288f18: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x288f18u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x288f1c: 0x0  nop
    ctx->pc = 0x288f1cu;
    // NOP
    // 0x288f20: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x288F20u;
    {
        const bool branch_taken_0x288f20 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x288f20) {
            ctx->pc = 0x288F24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x288F20u;
            // 0x288f24: 0xe6010008  swc1        $f1, 0x8($s0) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x288F28u;
            goto label_288f28;
        }
    }
    ctx->pc = 0x288F28u;
label_288f28:
    // 0x288f28: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x288f28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x288f2c: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x288f2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x288f30: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x288f30u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x288f34: 0x0  nop
    ctx->pc = 0x288f34u;
    // NOP
    // 0x288f38: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x288F38u;
    {
        const bool branch_taken_0x288f38 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x288f38) {
            ctx->pc = 0x288F3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x288F38u;
            // 0x288f3c: 0xc600000c  lwc1        $f0, 0xC($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x288F48u;
            goto label_288f48;
        }
    }
    ctx->pc = 0x288F40u;
    // 0x288f40: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x288F40u;
    {
        const bool branch_taken_0x288f40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x288F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288F40u;
        // 0x288f44: 0xe6010004  swc1        $f1, 0x4($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x288f40) {
            ctx->pc = 0x288F58u;
            goto label_288f58;
        }
    }
    ctx->pc = 0x288F48u;
label_288f48:
    // 0x288f48: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x288f48u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x288f4c: 0x0  nop
    ctx->pc = 0x288f4cu;
    // NOP
    // 0x288f50: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x288F50u;
    {
        const bool branch_taken_0x288f50 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x288f50) {
            ctx->pc = 0x288F54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x288F50u;
            // 0x288f54: 0xe601000c  swc1        $f1, 0xC($s0) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x288F58u;
            goto label_288f58;
        }
    }
    ctx->pc = 0x288F58u;
label_288f58:
    // 0x288f58: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x288f58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x288f5c: 0x10a00068  beqz        $a1, . + 4 + (0x68 << 2)
    ctx->pc = 0x288F5Cu;
    {
        const bool branch_taken_0x288f5c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x288F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288F5Cu;
        // 0x288f60: 0x24840018  addiu       $a0, $a0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288f5c) {
            ctx->pc = 0x289100u;
            goto label_289100;
        }
    }
    ctx->pc = 0x288F64u;
label_288f64:
    // 0x288f64: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x288f64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288f68: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x288f68u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288f6c: 0x0  nop
    ctx->pc = 0x288f6cu;
    // NOP
label_288f70:
    // 0x288f70: 0xc461fffc  lwc1        $f1, -0x4($v1)
    ctx->pc = 0x288f70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x288f74: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x288f74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x288f78: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x288f78u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x288f7c: 0x0  nop
    ctx->pc = 0x288f7cu;
    // NOP
    // 0x288f80: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x288F80u;
    {
        const bool branch_taken_0x288f80 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x288f80) {
            ctx->pc = 0x288F84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x288F80u;
            // 0x288f84: 0xc6000008  lwc1        $f0, 0x8($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x288F90u;
            goto label_288f90;
        }
    }
    ctx->pc = 0x288F88u;
    // 0x288f88: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x288F88u;
    {
        const bool branch_taken_0x288f88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x288F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288F88u;
        // 0x288f8c: 0xe6010000  swc1        $f1, 0x0($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x288f88) {
            ctx->pc = 0x288FA0u;
            goto label_288fa0;
        }
    }
    ctx->pc = 0x288F90u;
label_288f90:
    // 0x288f90: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x288f90u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x288f94: 0x0  nop
    ctx->pc = 0x288f94u;
    // NOP
    // 0x288f98: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x288F98u;
    {
        const bool branch_taken_0x288f98 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x288f98) {
            ctx->pc = 0x288F9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x288F98u;
            // 0x288f9c: 0xe6010008  swc1        $f1, 0x8($s0) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x288FA0u;
            goto label_288fa0;
        }
    }
    ctx->pc = 0x288FA0u;
label_288fa0:
    // 0x288fa0: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x288fa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x288fa4: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x288fa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x288fa8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x288fa8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x288fac: 0x0  nop
    ctx->pc = 0x288facu;
    // NOP
    // 0x288fb0: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x288FB0u;
    {
        const bool branch_taken_0x288fb0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x288fb0) {
            ctx->pc = 0x288FB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x288FB0u;
            // 0x288fb4: 0xc600000c  lwc1        $f0, 0xC($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x288FC0u;
            goto label_288fc0;
        }
    }
    ctx->pc = 0x288FB8u;
    // 0x288fb8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x288FB8u;
    {
        const bool branch_taken_0x288fb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x288FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288FB8u;
        // 0x288fbc: 0xe6010004  swc1        $f1, 0x4($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x288fb8) {
            ctx->pc = 0x288FD0u;
            goto label_288fd0;
        }
    }
    ctx->pc = 0x288FC0u;
label_288fc0:
    // 0x288fc0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x288fc0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x288fc4: 0x0  nop
    ctx->pc = 0x288fc4u;
    // NOP
    // 0x288fc8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x288FC8u;
    {
        const bool branch_taken_0x288fc8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x288fc8) {
            ctx->pc = 0x288FCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x288FC8u;
            // 0x288fcc: 0xe601000c  swc1        $f1, 0xC($s0) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x288FD0u;
            goto label_288fd0;
        }
    }
    ctx->pc = 0x288FD0u;
label_288fd0:
    // 0x288fd0: 0xc4610014  lwc1        $f1, 0x14($v1)
    ctx->pc = 0x288fd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x288fd4: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x288fd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x288fd8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x288fd8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x288fdc: 0x0  nop
    ctx->pc = 0x288fdcu;
    // NOP
    // 0x288fe0: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x288FE0u;
    {
        const bool branch_taken_0x288fe0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x288fe0) {
            ctx->pc = 0x288FE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x288FE0u;
            // 0x288fe4: 0xc6000008  lwc1        $f0, 0x8($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x288FF0u;
            goto label_288ff0;
        }
    }
    ctx->pc = 0x288FE8u;
    // 0x288fe8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x288FE8u;
    {
        const bool branch_taken_0x288fe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x288FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288FE8u;
        // 0x288fec: 0xe6010000  swc1        $f1, 0x0($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x288fe8) {
            ctx->pc = 0x289000u;
            goto label_289000;
        }
    }
    ctx->pc = 0x288FF0u;
label_288ff0:
    // 0x288ff0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x288ff0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x288ff4: 0x0  nop
    ctx->pc = 0x288ff4u;
    // NOP
    // 0x288ff8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x288FF8u;
    {
        const bool branch_taken_0x288ff8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x288ff8) {
            ctx->pc = 0x288FFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x288FF8u;
            // 0x288ffc: 0xe6010008  swc1        $f1, 0x8($s0) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x289000u;
            goto label_289000;
        }
    }
    ctx->pc = 0x289000u;
label_289000:
    // 0x289000: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x289000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x289004: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x289004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x289008: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x289008u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28900c: 0x0  nop
    ctx->pc = 0x28900cu;
    // NOP
    // 0x289010: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x289010u;
    {
        const bool branch_taken_0x289010 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x289010) {
            ctx->pc = 0x289014u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x289010u;
            // 0x289014: 0xc600000c  lwc1        $f0, 0xC($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x289020u;
            goto label_289020;
        }
    }
    ctx->pc = 0x289018u;
    // 0x289018: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x289018u;
    {
        const bool branch_taken_0x289018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28901Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289018u;
        // 0x28901c: 0xe6010004  swc1        $f1, 0x4($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x289018) {
            ctx->pc = 0x289030u;
            goto label_289030;
        }
    }
    ctx->pc = 0x289020u;
label_289020:
    // 0x289020: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x289020u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x289024: 0x0  nop
    ctx->pc = 0x289024u;
    // NOP
    // 0x289028: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x289028u;
    {
        const bool branch_taken_0x289028 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x289028) {
            ctx->pc = 0x28902Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x289028u;
            // 0x28902c: 0xe601000c  swc1        $f1, 0xC($s0) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x289030u;
            goto label_289030;
        }
    }
    ctx->pc = 0x289030u;
label_289030:
    // 0x289030: 0xc461002c  lwc1        $f1, 0x2C($v1)
    ctx->pc = 0x289030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x289034: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x289034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x289038: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x289038u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28903c: 0x0  nop
    ctx->pc = 0x28903cu;
    // NOP
    // 0x289040: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x289040u;
    {
        const bool branch_taken_0x289040 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x289040) {
            ctx->pc = 0x289044u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x289040u;
            // 0x289044: 0xc6000008  lwc1        $f0, 0x8($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x289050u;
            goto label_289050;
        }
    }
    ctx->pc = 0x289048u;
    // 0x289048: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x289048u;
    {
        const bool branch_taken_0x289048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28904Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289048u;
        // 0x28904c: 0xe6010000  swc1        $f1, 0x0($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x289048) {
            ctx->pc = 0x289060u;
            goto label_289060;
        }
    }
    ctx->pc = 0x289050u;
label_289050:
    // 0x289050: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x289050u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x289054: 0x0  nop
    ctx->pc = 0x289054u;
    // NOP
    // 0x289058: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x289058u;
    {
        const bool branch_taken_0x289058 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x289058) {
            ctx->pc = 0x28905Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x289058u;
            // 0x28905c: 0xe6010008  swc1        $f1, 0x8($s0) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x289060u;
            goto label_289060;
        }
    }
    ctx->pc = 0x289060u;
label_289060:
    // 0x289060: 0xc4410030  lwc1        $f1, 0x30($v0)
    ctx->pc = 0x289060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x289064: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x289064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x289068: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x289068u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28906c: 0x0  nop
    ctx->pc = 0x28906cu;
    // NOP
    // 0x289070: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x289070u;
    {
        const bool branch_taken_0x289070 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x289070) {
            ctx->pc = 0x289074u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x289070u;
            // 0x289074: 0xc600000c  lwc1        $f0, 0xC($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x289080u;
            goto label_289080;
        }
    }
    ctx->pc = 0x289078u;
    // 0x289078: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x289078u;
    {
        const bool branch_taken_0x289078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28907Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289078u;
        // 0x28907c: 0xe6010004  swc1        $f1, 0x4($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x289078) {
            ctx->pc = 0x289090u;
            goto label_289090;
        }
    }
    ctx->pc = 0x289080u;
label_289080:
    // 0x289080: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x289080u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x289084: 0x0  nop
    ctx->pc = 0x289084u;
    // NOP
    // 0x289088: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x289088u;
    {
        const bool branch_taken_0x289088 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x289088) {
            ctx->pc = 0x28908Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x289088u;
            // 0x28908c: 0xe601000c  swc1        $f1, 0xC($s0) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x289090u;
            goto label_289090;
        }
    }
    ctx->pc = 0x289090u;
label_289090:
    // 0x289090: 0xc4610044  lwc1        $f1, 0x44($v1)
    ctx->pc = 0x289090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x289094: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x289094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x289098: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x289098u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28909c: 0x0  nop
    ctx->pc = 0x28909cu;
    // NOP
    // 0x2890a0: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x2890A0u;
    {
        const bool branch_taken_0x2890a0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2890a0) {
            ctx->pc = 0x2890A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2890A0u;
            // 0x2890a4: 0xc6000008  lwc1        $f0, 0x8($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2890B0u;
            goto label_2890b0;
        }
    }
    ctx->pc = 0x2890A8u;
    // 0x2890a8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2890A8u;
    {
        const bool branch_taken_0x2890a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2890ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2890A8u;
        // 0x2890ac: 0xe6010000  swc1        $f1, 0x0($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2890a8) {
            ctx->pc = 0x2890C0u;
            goto label_2890c0;
        }
    }
    ctx->pc = 0x2890B0u;
label_2890b0:
    // 0x2890b0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2890b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2890b4: 0x0  nop
    ctx->pc = 0x2890b4u;
    // NOP
    // 0x2890b8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2890B8u;
    {
        const bool branch_taken_0x2890b8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2890b8) {
            ctx->pc = 0x2890BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2890B8u;
            // 0x2890bc: 0xe6010008  swc1        $f1, 0x8($s0) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2890C0u;
            goto label_2890c0;
        }
    }
    ctx->pc = 0x2890C0u;
label_2890c0:
    // 0x2890c0: 0xc4410048  lwc1        $f1, 0x48($v0)
    ctx->pc = 0x2890c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2890c4: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x2890c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2890c8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2890c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2890cc: 0x0  nop
    ctx->pc = 0x2890ccu;
    // NOP
    // 0x2890d0: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x2890D0u;
    {
        const bool branch_taken_0x2890d0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2890d0) {
            ctx->pc = 0x2890D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2890D0u;
            // 0x2890d4: 0xc600000c  lwc1        $f0, 0xC($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2890E0u;
            goto label_2890e0;
        }
    }
    ctx->pc = 0x2890D8u;
    // 0x2890d8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2890D8u;
    {
        const bool branch_taken_0x2890d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2890DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2890D8u;
        // 0x2890dc: 0xe6010004  swc1        $f1, 0x4($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2890d8) {
            ctx->pc = 0x2890F0u;
            goto label_2890f0;
        }
    }
    ctx->pc = 0x2890E0u;
label_2890e0:
    // 0x2890e0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2890e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2890e4: 0x0  nop
    ctx->pc = 0x2890e4u;
    // NOP
    // 0x2890e8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2890E8u;
    {
        const bool branch_taken_0x2890e8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2890e8) {
            ctx->pc = 0x2890ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2890E8u;
            // 0x2890ec: 0xe601000c  swc1        $f1, 0xC($s0) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2890F0u;
            goto label_2890f0;
        }
    }
    ctx->pc = 0x2890F0u;
label_2890f0:
    // 0x2890f0: 0x24a5fffc  addiu       $a1, $a1, -0x4
    ctx->pc = 0x2890f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967292));
    // 0x2890f4: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x2890f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x2890f8: 0x14a0ff9d  bnez        $a1, . + 4 + (-0x63 << 2)
    ctx->pc = 0x2890F8u;
    {
        const bool branch_taken_0x2890f8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2890FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2890F8u;
        // 0x2890fc: 0x24630060  addiu       $v1, $v1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2890f8) {
            ctx->pc = 0x288F70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_288f70;
        }
    }
    ctx->pc = 0x289100u;
label_289100:
    // 0x289100: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x289100u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_289104:
    // 0x289104: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x289104u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x289108: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x289108u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28910c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x28910cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x289110: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x289110u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x289114: 0x3e00008  jr          $ra
    ctx->pc = 0x289114u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x289118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289114u;
        // 0x289118: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x289114u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28911Cu;
    // 0x28911c: 0x0  nop
    ctx->pc = 0x28911cu;
    // NOP
    // 0x289120: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x289120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x289124: 0x0  nop
    ctx->pc = 0x289124u;
    // NOP
    // 0x289128: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x289128u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x28912c: 0x0  nop
    ctx->pc = 0x28912cu;
    // NOP
    ctx->pc = 0x289130u;
}
