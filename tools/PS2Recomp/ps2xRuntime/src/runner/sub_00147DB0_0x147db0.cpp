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

// Function: sub_00147DB0
// Address: 0x147db0 - 0x148148
void sub_00147DB0_0x147db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00147DB0_0x147db0");
#endif

    switch (ctx->pc) {
        case 0x147e18u: goto label_147e18;
        case 0x147e54u: goto label_147e54;
        case 0x147e84u: goto label_147e84;
        case 0x147ec0u: goto label_147ec0;
        case 0x147ee4u: goto label_147ee4;
        case 0x147f20u: goto label_147f20;
        case 0x147f7cu: goto label_147f7c;
        case 0x147fa8u: goto label_147fa8;
        case 0x147fd0u: goto label_147fd0;
        case 0x147fe0u: goto label_147fe0;
        case 0x147ff0u: goto label_147ff0;
        case 0x147ffcu: goto label_147ffc;
        case 0x148008u: goto label_148008;
        case 0x148020u: goto label_148020;
        case 0x14802cu: goto label_14802c;
        case 0x148044u: goto label_148044;
        case 0x148050u: goto label_148050;
        case 0x148068u: goto label_148068;
        case 0x1480c0u: goto label_1480c0;
        case 0x1480c8u: goto label_1480c8;
        case 0x1480e4u: goto label_1480e4;
        case 0x148100u: goto label_148100;
        case 0x148120u: goto label_148120;
        case 0x148128u: goto label_148128;
        default: break;
    }

    ctx->pc = 0x147db0u;

    // 0x147db0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x147db0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x147db4: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x147db4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x147db8: 0xe7b50058  swc1        $f21, 0x58($sp)
    ctx->pc = 0x147db8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x147dbc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x147dbcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147dc0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x147dc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x147dc4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x147dc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x147dc8: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x147dc8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x147dcc: 0x8e220140  lw          $v0, 0x140($s1)
    ctx->pc = 0x147dccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 320)));
    // 0x147dd0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x147DD0u;
    {
        const bool branch_taken_0x147dd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x147DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147DD0u;
        // 0x147dd4: 0x46006546  mov.s       $f21, $f12 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x147dd0) {
            ctx->pc = 0x147DF8u;
            goto label_147df8;
        }
    }
    ctx->pc = 0x147DD8u;
    // 0x147dd8: 0xc6200144  lwc1        $f0, 0x144($s1)
    ctx->pc = 0x147dd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x147ddc: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x147ddcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x147de0: 0x46150001  sub.s       $f0, $f0, $f21
    ctx->pc = 0x147de0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[21]);
    // 0x147de4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x147de4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x147de8: 0x0  nop
    ctx->pc = 0x147de8u;
    // NOP
    // 0x147dec: 0x450000ce  bc1f        . + 4 + (0xCE << 2)
    ctx->pc = 0x147DECu;
    {
        const bool branch_taken_0x147dec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x147DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147DECu;
        // 0x147df0: 0xe6200144  swc1        $f0, 0x144($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 324), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x147dec) {
            ctx->pc = 0x148128u;
            goto label_148128;
        }
    }
    ctx->pc = 0x147DF4u;
    // 0x147df4: 0xae200140  sw          $zero, 0x140($s1)
    ctx->pc = 0x147df4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 320), GPR_U32(ctx, 0));
label_147df8:
    // 0x147df8: 0x8e22013c  lw          $v0, 0x13C($s1)
    ctx->pc = 0x147df8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 316)));
    // 0x147dfc: 0x5440001d  bnel        $v0, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x147DFCu;
    {
        const bool branch_taken_0x147dfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x147dfc) {
            ctx->pc = 0x147E00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x147DFCu;
            // 0x147e00: 0x8e250120  lw          $a1, 0x120($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 288)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x147E74u;
            goto label_147e74;
        }
    }
    ctx->pc = 0x147E04u;
    // 0x147e04: 0x8e25012c  lw          $a1, 0x12C($s1)
    ctx->pc = 0x147e04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 300)));
    // 0x147e08: 0x10a00017  beqz        $a1, . + 4 + (0x17 << 2)
    ctx->pc = 0x147E08u;
    {
        const bool branch_taken_0x147e08 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x147e08) {
            ctx->pc = 0x147E68u;
            goto label_147e68;
        }
    }
    ctx->pc = 0x147E10u;
    // 0x147e10: 0xc05218c  jal         func_148630
    ctx->pc = 0x147E10u;
    SET_GPR_U32(ctx, 31, 0x147E18u);
    ctx->pc = 0x147E14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147E10u;
    // 0x147e14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x148630u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x148630u, 0x147E10u, 0x147E18u)) {
        return;
    }
    ctx->pc = 0x147E18u;
label_147e18:
    // 0x147e18: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x147E18u;
    {
        const bool branch_taken_0x147e18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x147e18) {
            ctx->pc = 0x147E1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x147E18u;
            // 0x147e1c: 0x8e22013c  lw          $v0, 0x13C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 316)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x147E68u;
            goto label_147e68;
        }
    }
    ctx->pc = 0x147E20u;
    // 0x147e20: 0x86220116  lh          $v0, 0x116($s1)
    ctx->pc = 0x147e20u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 278)));
    // 0x147e24: 0x1840000b  blez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x147E24u;
    {
        const bool branch_taken_0x147e24 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x147E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147E24u;
        // 0x147e28: 0x3c020070  lui         $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147e24) {
            ctx->pc = 0x147E54u;
            goto label_147e54;
        }
    }
    ctx->pc = 0x147E2Cu;
    // 0x147e2c: 0x8e240110  lw          $a0, 0x110($s1)
    ctx->pc = 0x147e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 272)));
    // 0x147e30: 0x8c431a70  lw          $v1, 0x1A70($v0)
    ctx->pc = 0x147e30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6768)));
    // 0x147e34: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x147e34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x147e38: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x147E38u;
    {
        const bool branch_taken_0x147e38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x147E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147E38u;
        // 0x147e3c: 0xafb10004  sw          $s1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147e38) {
            ctx->pc = 0x147E54u;
            goto label_147e54;
        }
    }
    ctx->pc = 0x147E40u;
    // 0x147e40: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x147e40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x147e44: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x147E44u;
    {
        const bool branch_taken_0x147e44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x147e44) {
            ctx->pc = 0x147E48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x147E44u;
            // 0x147e48: 0x8e220130  lw          $v0, 0x130($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 304)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x147E58u;
            goto label_147e58;
        }
    }
    ctx->pc = 0x147E4Cu;
    // 0x147e4c: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x147E4Cu;
    SET_GPR_U32(ctx, 31, 0x147E54u);
    ctx->pc = 0x147E50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147E4Cu;
    // 0x147e50: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x147E4Cu, 0x147E54u)) {
        return;
    }
    ctx->pc = 0x147E54u;
label_147e54:
    // 0x147e54: 0x8e220130  lw          $v0, 0x130($s1)
    ctx->pc = 0x147e54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 304)));
label_147e58:
    // 0x147e58: 0x1040005f  beqz        $v0, . + 4 + (0x5F << 2)
    ctx->pc = 0x147E58u;
    {
        const bool branch_taken_0x147e58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x147E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147E58u;
        // 0x147e5c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147e58) {
            ctx->pc = 0x147FD8u;
            goto label_147fd8;
        }
    }
    ctx->pc = 0x147E60u;
    // 0x147e60: 0x100000b1  b           . + 4 + (0xB1 << 2)
    ctx->pc = 0x147E60u;
    {
        const bool branch_taken_0x147e60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x147E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147E60u;
        // 0x147e64: 0xae22013c  sw          $v0, 0x13C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 316), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147e60) {
            ctx->pc = 0x148128u;
            goto label_148128;
        }
    }
    ctx->pc = 0x147E68u;
label_147e68:
    // 0x147e68: 0x5040001a  beql        $v0, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x147E68u;
    {
        const bool branch_taken_0x147e68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x147e68) {
            ctx->pc = 0x147E6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x147E68u;
            // 0x147e6c: 0x8e250128  lw          $a1, 0x128($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 296)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x147ED4u;
            goto label_147ed4;
        }
    }
    ctx->pc = 0x147E70u;
    // 0x147e70: 0x8e250120  lw          $a1, 0x120($s1)
    ctx->pc = 0x147e70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 288)));
label_147e74:
    // 0x147e74: 0x50a00017  beql        $a1, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x147E74u;
    {
        const bool branch_taken_0x147e74 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x147e74) {
            ctx->pc = 0x147E78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x147E74u;
            // 0x147e78: 0x8e250128  lw          $a1, 0x128($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 296)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x147ED4u;
            goto label_147ed4;
        }
    }
    ctx->pc = 0x147E7Cu;
    // 0x147e7c: 0xc05218c  jal         func_148630
    ctx->pc = 0x147E7Cu;
    SET_GPR_U32(ctx, 31, 0x147E84u);
    ctx->pc = 0x147E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147E7Cu;
    // 0x147e80: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x148630u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x148630u, 0x147E7Cu, 0x147E84u)) {
        return;
    }
    ctx->pc = 0x147E84u;
label_147e84:
    // 0x147e84: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x147E84u;
    {
        const bool branch_taken_0x147e84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x147e84) {
            ctx->pc = 0x147E88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x147E84u;
            // 0x147e88: 0x8e250128  lw          $a1, 0x128($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 296)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x147ED4u;
            goto label_147ed4;
        }
    }
    ctx->pc = 0x147E8Cu;
    // 0x147e8c: 0x8622011e  lh          $v0, 0x11E($s1)
    ctx->pc = 0x147e8cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 286)));
    // 0x147e90: 0x1840000b  blez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x147E90u;
    {
        const bool branch_taken_0x147e90 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x147E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147E90u;
        // 0x147e94: 0x3c020070  lui         $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147e90) {
            ctx->pc = 0x147EC0u;
            goto label_147ec0;
        }
    }
    ctx->pc = 0x147E98u;
    // 0x147e98: 0x8e240118  lw          $a0, 0x118($s1)
    ctx->pc = 0x147e98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 280)));
    // 0x147e9c: 0x8c431a70  lw          $v1, 0x1A70($v0)
    ctx->pc = 0x147e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6768)));
    // 0x147ea0: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x147ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x147ea4: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x147EA4u;
    {
        const bool branch_taken_0x147ea4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x147EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147EA4u;
        // 0x147ea8: 0xafb10004  sw          $s1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147ea4) {
            ctx->pc = 0x147EC0u;
            goto label_147ec0;
        }
    }
    ctx->pc = 0x147EACu;
    // 0x147eac: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x147eacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x147eb0: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x147EB0u;
    {
        const bool branch_taken_0x147eb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x147eb0) {
            ctx->pc = 0x147EB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x147EB0u;
            // 0x147eb4: 0x8e220130  lw          $v0, 0x130($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 304)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x147EC4u;
            goto label_147ec4;
        }
    }
    ctx->pc = 0x147EB8u;
    // 0x147eb8: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x147EB8u;
    SET_GPR_U32(ctx, 31, 0x147EC0u);
    ctx->pc = 0x147EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147EB8u;
    // 0x147ebc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x147EB8u, 0x147EC0u)) {
        return;
    }
    ctx->pc = 0x147EC0u;
label_147ec0:
    // 0x147ec0: 0x8e220130  lw          $v0, 0x130($s1)
    ctx->pc = 0x147ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 304)));
label_147ec4:
    // 0x147ec4: 0x10400044  beqz        $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x147EC4u;
    {
        const bool branch_taken_0x147ec4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x147ec4) {
            ctx->pc = 0x147FD8u;
            goto label_147fd8;
        }
    }
    ctx->pc = 0x147ECCu;
    // 0x147ecc: 0x10000096  b           . + 4 + (0x96 << 2)
    ctx->pc = 0x147ECCu;
    {
        const bool branch_taken_0x147ecc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x147ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147ECCu;
        // 0x147ed0: 0xae20013c  sw          $zero, 0x13C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 316), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147ecc) {
            ctx->pc = 0x148128u;
            goto label_148128;
        }
    }
    ctx->pc = 0x147ED4u;
label_147ed4:
    // 0x147ed4: 0x10a00095  beqz        $a1, . + 4 + (0x95 << 2)
    ctx->pc = 0x147ED4u;
    {
        const bool branch_taken_0x147ed4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x147ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147ED4u;
        // 0x147ed8: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147ed4) {
            ctx->pc = 0x14812Cu;
            goto label_14812c;
        }
    }
    ctx->pc = 0x147EDCu;
    // 0x147edc: 0xc05218c  jal         func_148630
    ctx->pc = 0x147EDCu;
    SET_GPR_U32(ctx, 31, 0x147EE4u);
    ctx->pc = 0x147EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147EDCu;
    // 0x147ee0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x148630u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x148630u, 0x147EDCu, 0x147EE4u)) {
        return;
    }
    ctx->pc = 0x147EE4u;
label_147ee4:
    // 0x147ee4: 0x10400040  beqz        $v0, . + 4 + (0x40 << 2)
    ctx->pc = 0x147EE4u;
    {
        const bool branch_taken_0x147ee4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x147ee4) {
            ctx->pc = 0x147FE8u;
            goto label_147fe8;
        }
    }
    ctx->pc = 0x147EECu;
    // 0x147eec: 0x8622010e  lh          $v0, 0x10E($s1)
    ctx->pc = 0x147eecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 270)));
    // 0x147ef0: 0x1840000b  blez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x147EF0u;
    {
        const bool branch_taken_0x147ef0 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x147EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147EF0u;
        // 0x147ef4: 0x3c020070  lui         $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147ef0) {
            ctx->pc = 0x147F20u;
            goto label_147f20;
        }
    }
    ctx->pc = 0x147EF8u;
    // 0x147ef8: 0x8e240108  lw          $a0, 0x108($s1)
    ctx->pc = 0x147ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 264)));
    // 0x147efc: 0x8c431a70  lw          $v1, 0x1A70($v0)
    ctx->pc = 0x147efcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6768)));
    // 0x147f00: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x147f00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x147f04: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x147F04u;
    {
        const bool branch_taken_0x147f04 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x147F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147F04u;
        // 0x147f08: 0xafb10004  sw          $s1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147f04) {
            ctx->pc = 0x147F20u;
            goto label_147f20;
        }
    }
    ctx->pc = 0x147F0Cu;
    // 0x147f0c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x147f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x147f10: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x147F10u;
    {
        const bool branch_taken_0x147f10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x147f10) {
            ctx->pc = 0x147F14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x147F10u;
            // 0x147f14: 0x8e220128  lw          $v0, 0x128($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 296)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x147F24u;
            goto label_147f24;
        }
    }
    ctx->pc = 0x147F18u;
    // 0x147f18: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x147F18u;
    SET_GPR_U32(ctx, 31, 0x147F20u);
    ctx->pc = 0x147F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147F18u;
    // 0x147f1c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x147F18u, 0x147F20u)) {
        return;
    }
    ctx->pc = 0x147F20u;
label_147f20:
    // 0x147f20: 0x8e220128  lw          $v0, 0x128($s1)
    ctx->pc = 0x147f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 296)));
label_147f24:
    // 0x147f24: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x147f24u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x147f28: 0xae220124  sw          $v0, 0x124($s1)
    ctx->pc = 0x147f28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 292), GPR_U32(ctx, 2));
    // 0x147f2c: 0xc4410054  lwc1        $f1, 0x54($v0)
    ctx->pc = 0x147f2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x147f30: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x147f30u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x147f34: 0x0  nop
    ctx->pc = 0x147f34u;
    // NOP
    // 0x147f38: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x147F38u;
    {
        const bool branch_taken_0x147f38 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x147F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147F38u;
        // 0x147f3c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147f38) {
            ctx->pc = 0x147F48u;
            goto label_147f48;
        }
    }
    ctx->pc = 0x147F40u;
    // 0x147f40: 0xe6210144  swc1        $f1, 0x144($s1)
    ctx->pc = 0x147f40u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 324), bits); }
    // 0x147f44: 0xae220140  sw          $v0, 0x140($s1)
    ctx->pc = 0x147f44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 320), GPR_U32(ctx, 2));
label_147f48:
    // 0x147f48: 0x8e22013c  lw          $v0, 0x13C($s1)
    ctx->pc = 0x147f48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 316)));
    // 0x147f4c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x147F4Cu;
    {
        const bool branch_taken_0x147f4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x147F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147F4Cu;
        // 0x147f50: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147f4c) {
            ctx->pc = 0x147F60u;
            goto label_147f60;
        }
    }
    ctx->pc = 0x147F54u;
    // 0x147f54: 0x8e220128  lw          $v0, 0x128($s1)
    ctx->pc = 0x147f54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 296)));
    // 0x147f58: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x147F58u;
    {
        const bool branch_taken_0x147f58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x147F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147F58u;
        // 0x147f5c: 0x8c450050  lw          $a1, 0x50($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147f58) {
            ctx->pc = 0x147F68u;
            goto label_147f68;
        }
    }
    ctx->pc = 0x147F60u;
label_147f60:
    // 0x147f60: 0x8e220128  lw          $v0, 0x128($s1)
    ctx->pc = 0x147f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 296)));
    // 0x147f64: 0x8c45004c  lw          $a1, 0x4C($v0)
    ctx->pc = 0x147f64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
label_147f68:
    // 0x147f68: 0x10a00014  beqz        $a1, . + 4 + (0x14 << 2)
    ctx->pc = 0x147F68u;
    {
        const bool branch_taken_0x147f68 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x147F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147F68u;
        // 0x147f6c: 0x3c060069  lui         $a2, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147f68) {
            ctx->pc = 0x147FBCu;
            goto label_147fbc;
        }
    }
    ctx->pc = 0x147F70u;
    // 0x147f70: 0x262400e8  addiu       $a0, $s1, 0xE8
    ctx->pc = 0x147f70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 232));
    // 0x147f74: 0xc07fce0  jal         func_1FF380
    ctx->pc = 0x147F74u;
    SET_GPR_U32(ctx, 31, 0x147F7Cu);
    ctx->pc = 0x147F78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147F74u;
    // 0x147f78: 0x24c61360  addiu       $a2, $a2, 0x1360 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4960));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF380u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF380u, 0x147F74u, 0x147F7Cu)) {
        return;
    }
    ctx->pc = 0x147F7Cu;
label_147f7c:
    // 0x147f7c: 0x8e2400e8  lw          $a0, 0xE8($s1)
    ctx->pc = 0x147f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 232)));
    // 0x147f80: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x147f80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x147f84: 0x8c431a70  lw          $v1, 0x1A70($v0)
    ctx->pc = 0x147f84u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x701A70u));
    // 0x147f88: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x147f88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x147f8c: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x147F8Cu;
    {
        const bool branch_taken_0x147f8c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x147F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147F8Cu;
        // 0x147f90: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147f8c) {
            ctx->pc = 0x147FA8u;
            goto label_147fa8;
        }
    }
    ctx->pc = 0x147F94u;
    // 0x147f94: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x147f94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x147f98: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x147F98u;
    {
        const bool branch_taken_0x147f98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x147F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147F98u;
        // 0x147f9c: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147f98) {
            ctx->pc = 0x147FACu;
            goto label_147fac;
        }
    }
    ctx->pc = 0x147FA0u;
    // 0x147fa0: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x147FA0u;
    SET_GPR_U32(ctx, 31, 0x147FA8u);
    ctx->pc = 0x147FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147FA0u;
    // 0x147fa4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x147FA0u, 0x147FA8u)) {
        return;
    }
    ctx->pc = 0x147FA8u;
label_147fa8:
    // 0x147fa8: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x147fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_147fac:
    // 0x147fac: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x147FACu;
    {
        const bool branch_taken_0x147fac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x147fac) {
            ctx->pc = 0x147FBCu;
            goto label_147fbc;
        }
    }
    ctx->pc = 0x147FB4u;
    // 0x147fb4: 0xae220128  sw          $v0, 0x128($s1)
    ctx->pc = 0x147fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 296), GPR_U32(ctx, 2));
    // 0x147fb8: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x147fb8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_147fbc:
    // 0x147fbc: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x147FBCu;
    {
        const bool branch_taken_0x147fbc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x147FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147FBCu;
        // 0x147fc0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147fbc) {
            ctx->pc = 0x147FD8u;
            goto label_147fd8;
        }
    }
    ctx->pc = 0x147FC4u;
    // 0x147fc4: 0x8c850124  lw          $a1, 0x124($a0)
    ctx->pc = 0x147fc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 292)));
    // 0x147fc8: 0xc05213a  jal         func_1484E8
    ctx->pc = 0x147FC8u;
    SET_GPR_U32(ctx, 31, 0x147FD0u);
    ctx->pc = 0x147FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147FC8u;
    // 0x147fcc: 0x8c860128  lw          $a2, 0x128($a0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 296)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1484E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1484E8u, 0x147FC8u, 0x147FD0u)) {
        return;
    }
    ctx->pc = 0x147FD0u;
label_147fd0:
    // 0x147fd0: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x147FD0u;
    {
        const bool branch_taken_0x147fd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x147FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147FD0u;
        // 0x147fd4: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147fd0) {
            ctx->pc = 0x14812Cu;
            goto label_14812c;
        }
    }
    ctx->pc = 0x147FD8u;
label_147fd8:
    // 0x147fd8: 0xc05211c  jal         func_148470
    ctx->pc = 0x147FD8u;
    SET_GPR_U32(ctx, 31, 0x147FE0u);
    ctx->pc = 0x147FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147FD8u;
    // 0x147fdc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x148470u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x148470u, 0x147FD8u, 0x147FE0u)) {
        return;
    }
    ctx->pc = 0x147FE0u;
label_147fe0:
    // 0x147fe0: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x147FE0u;
    {
        const bool branch_taken_0x147fe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x147FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147FE0u;
        // 0x147fe4: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147fe0) {
            ctx->pc = 0x14812Cu;
            goto label_14812c;
        }
    }
    ctx->pc = 0x147FE8u;
label_147fe8:
    // 0x147fe8: 0xc093aa8  jal         func_24EAA0
    ctx->pc = 0x147FE8u;
    SET_GPR_U32(ctx, 31, 0x147FF0u);
    ctx->pc = 0x147FECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147FE8u;
    // 0x147fec: 0x26240148  addiu       $a0, $s1, 0x148 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 328));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EAA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EAA0u, 0x147FE8u, 0x147FF0u)) {
        return;
    }
    ctx->pc = 0x147FF0u;
label_147ff0:
    // 0x147ff0: 0x46150502  mul.s       $f20, $f0, $f21
    ctx->pc = 0x147ff0u;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x147ff4: 0xc04f0cc  jal         func_13C330
    ctx->pc = 0x147FF4u;
    SET_GPR_U32(ctx, 31, 0x147FFCu);
    ctx->pc = 0x147FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147FF4u;
    // 0x147ff8: 0x8e240128  lw          $a0, 0x128($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 296)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x147FF4u, 0x147FFCu)) {
        return;
    }
    ctx->pc = 0x147FFCu;
label_147ffc:
    // 0x147ffc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x147ffcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148000: 0xc04f0cc  jal         func_13C330
    ctx->pc = 0x148000u;
    SET_GPR_U32(ctx, 31, 0x148008u);
    ctx->pc = 0x148004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148000u;
    // 0x148004: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x148000u, 0x148008u)) {
        return;
    }
    ctx->pc = 0x148008u;
label_148008:
    // 0x148008: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x148008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14800c: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x14800cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x148010: 0x8e240128  lw          $a0, 0x128($s1)
    ctx->pc = 0x148010u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 296)));
    // 0x148014: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x148014u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x148018: 0xc04f0cc  jal         func_13C330
    ctx->pc = 0x148018u;
    SET_GPR_U32(ctx, 31, 0x148020u);
    ctx->pc = 0x14801Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148018u;
    // 0x14801c: 0xe7a00010  swc1        $f0, 0x10($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x148018u, 0x148020u)) {
        return;
    }
    ctx->pc = 0x148020u;
label_148020:
    // 0x148020: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x148020u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148024: 0xc04f0cc  jal         func_13C330
    ctx->pc = 0x148024u;
    SET_GPR_U32(ctx, 31, 0x14802Cu);
    ctx->pc = 0x148028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148024u;
    // 0x148028: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x148024u, 0x14802Cu)) {
        return;
    }
    ctx->pc = 0x14802Cu;
label_14802c:
    // 0x14802c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x14802cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x148030: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x148030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x148034: 0x8e240128  lw          $a0, 0x128($s1)
    ctx->pc = 0x148034u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 296)));
    // 0x148038: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x148038u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x14803c: 0xc04f0cc  jal         func_13C330
    ctx->pc = 0x14803Cu;
    SET_GPR_U32(ctx, 31, 0x148044u);
    ctx->pc = 0x148040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14803Cu;
    // 0x148040: 0xe7a00014  swc1        $f0, 0x14($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x14803Cu, 0x148044u)) {
        return;
    }
    ctx->pc = 0x148044u;
label_148044:
    // 0x148044: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x148044u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148048: 0xc04f0cc  jal         func_13C330
    ctx->pc = 0x148048u;
    SET_GPR_U32(ctx, 31, 0x148050u);
    ctx->pc = 0x14804Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148048u;
    // 0x14804c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x148048u, 0x148050u)) {
        return;
    }
    ctx->pc = 0x148050u;
label_148050:
    // 0x148050: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x148050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x148054: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x148054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x148058: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x148058u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x14805c: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x14805cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x148060: 0xc093aa8  jal         func_24EAA0
    ctx->pc = 0x148060u;
    SET_GPR_U32(ctx, 31, 0x148068u);
    ctx->pc = 0x148064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148060u;
    // 0x148064: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EAA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EAA0u, 0x148060u, 0x148068u)) {
        return;
    }
    ctx->pc = 0x148068u;
label_148068:
    // 0x148068: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x148068u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14806c: 0x0  nop
    ctx->pc = 0x14806cu;
    // NOP
    // 0x148070: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x148070u;
    {
        const bool branch_taken_0x148070 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x148074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148070u;
        // 0x148074: 0xc7a30010  lwc1        $f3, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x148070) {
            ctx->pc = 0x1480B0u;
            goto label_1480b0;
        }
    }
    ctx->pc = 0x148078u;
    // 0x148078: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x148078u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x14807c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x14807cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x148080: 0x0  nop
    ctx->pc = 0x148080u;
    // NOP
    // 0x148084: 0x46150843  div.s       $f1, $f1, $f21
    ctx->pc = 0x148084u;
    ctx->f[1] = FPU_DIV_S(ctx, ctx->f[1], ctx->f[21]);
    // 0x148088: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x148088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14808c: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x14808cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x148090: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x148090u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x148094: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x148094u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x148098: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x148098u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x14809c: 0xe6230148  swc1        $f3, 0x148($s1)
    ctx->pc = 0x14809cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 328), bits); }
    // 0x1480a0: 0xe6200150  swc1        $f0, 0x150($s1)
    ctx->pc = 0x1480a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 336), bits); }
    // 0x1480a4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1480A4u;
    {
        const bool branch_taken_0x1480a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1480A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1480A4u;
        // 0x1480a8: 0xe622014c  swc1        $f2, 0x14C($s1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 332), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1480a4) {
            ctx->pc = 0x1480C0u;
            goto label_1480c0;
        }
    }
    ctx->pc = 0x1480ACu;
    // 0x1480ac: 0x0  nop
    ctx->pc = 0x1480acu;
    // NOP
label_1480b0:
    // 0x1480b0: 0x8e250124  lw          $a1, 0x124($s1)
    ctx->pc = 0x1480b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 292)));
    // 0x1480b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1480b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1480b8: 0xc05213a  jal         func_1484E8
    ctx->pc = 0x1480B8u;
    SET_GPR_U32(ctx, 31, 0x1480C0u);
    ctx->pc = 0x1480BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1480B8u;
    // 0x1480bc: 0x8e260128  lw          $a2, 0x128($s1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 296)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1484E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1484E8u, 0x1480B8u, 0x1480C0u)) {
        return;
    }
    ctx->pc = 0x1480C0u;
label_1480c0:
    // 0x1480c0: 0xc04f0cc  jal         func_13C330
    ctx->pc = 0x1480C0u;
    SET_GPR_U32(ctx, 31, 0x1480C8u);
    ctx->pc = 0x1480C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1480C0u;
    // 0x1480c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x1480C0u, 0x1480C8u)) {
        return;
    }
    ctx->pc = 0x1480C8u;
label_1480c8:
    // 0x1480c8: 0xc6210148  lwc1        $f1, 0x148($s1)
    ctx->pc = 0x1480c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1480cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1480ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1480d0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1480d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1480d4: 0x46150842  mul.s       $f1, $f1, $f21
    ctx->pc = 0x1480d4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[21]);
    // 0x1480d8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1480d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1480dc: 0xc04f0cc  jal         func_13C330
    ctx->pc = 0x1480DCu;
    SET_GPR_U32(ctx, 31, 0x1480E4u);
    ctx->pc = 0x1480E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1480DCu;
    // 0x1480e0: 0xe4400000  swc1        $f0, 0x0($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x1480DCu, 0x1480E4u)) {
        return;
    }
    ctx->pc = 0x1480E4u;
label_1480e4:
    // 0x1480e4: 0xc621014c  lwc1        $f1, 0x14C($s1)
    ctx->pc = 0x1480e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1480e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1480e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1480ec: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1480ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1480f0: 0x46150842  mul.s       $f1, $f1, $f21
    ctx->pc = 0x1480f0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[21]);
    // 0x1480f4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1480f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1480f8: 0xc04f0cc  jal         func_13C330
    ctx->pc = 0x1480F8u;
    SET_GPR_U32(ctx, 31, 0x148100u);
    ctx->pc = 0x1480FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1480F8u;
    // 0x1480fc: 0xe4400004  swc1        $f0, 0x4($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x1480F8u, 0x148100u)) {
        return;
    }
    ctx->pc = 0x148100u;
label_148100:
    // 0x148100: 0xc6210150  lwc1        $f1, 0x150($s1)
    ctx->pc = 0x148100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x148104: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x148104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x148108: 0x46150842  mul.s       $f1, $f1, $f21
    ctx->pc = 0x148108u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[21]);
    // 0x14810c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x14810cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x148110: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x148110u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x148114: 0x8e240040  lw          $a0, 0x40($s1)
    ctx->pc = 0x148114u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x148118: 0xc092d94  jal         func_24B650
    ctx->pc = 0x148118u;
    SET_GPR_U32(ctx, 31, 0x148120u);
    ctx->pc = 0x14811Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148118u;
    // 0x14811c: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B650u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24B650u, 0x148118u, 0x148120u)) {
        return;
    }
    ctx->pc = 0x148120u;
label_148120:
    // 0x148120: 0xc08992e  jal         func_2264B8
    ctx->pc = 0x148120u;
    SET_GPR_U32(ctx, 31, 0x148128u);
    ctx->pc = 0x148124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148120u;
    // 0x148124: 0x8e240040  lw          $a0, 0x40($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2264B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2264B8u, 0x148120u, 0x148128u)) {
        return;
    }
    ctx->pc = 0x148128u;
label_148128:
    // 0x148128: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x148128u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_14812c:
    // 0x14812c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x14812cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x148130: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x148130u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x148134: 0xc7b50058  lwc1        $f21, 0x58($sp)
    ctx->pc = 0x148134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x148138: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x148138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x14813c: 0x3e00008  jr          $ra
    ctx->pc = 0x14813Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x148140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14813Cu;
        // 0x148140: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14813Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x148144u;
    // 0x148144: 0x0  nop
    ctx->pc = 0x148144u;
    // NOP
    ctx->pc = 0x148148u;
}
