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

// Function: sub_00254CF0
// Address: 0x254cf0 - 0x254e60
void sub_00254CF0_0x254cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00254CF0_0x254cf0");
#endif

    switch (ctx->pc) {
        case 0x254d20u: goto label_254d20;
        case 0x254d28u: goto label_254d28;
        case 0x254d4cu: goto label_254d4c;
        case 0x254d60u: goto label_254d60;
        default: break;
    }

    ctx->pc = 0x254cf0u;

    // 0x254cf0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x254cf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x254cf4: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x254cf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x254cf8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x254cf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x254cfc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x254cfcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254d00: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x254d00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x254d04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x254d04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x254d08: 0x8e42004c  lw          $v0, 0x4C($s2)
    ctx->pc = 0x254d08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x254d0c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x254d0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x254d10: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x254D10u;
    {
        const bool branch_taken_0x254d10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x254D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254D10u;
        // 0x254d14: 0x8e510004  lw          $s1, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254d10) {
            ctx->pc = 0x254D20u;
            goto label_254d20;
        }
    }
    ctx->pc = 0x254D18u;
    // 0x254d18: 0xc0952e0  jal         func_254B80
    ctx->pc = 0x254D18u;
    SET_GPR_U32(ctx, 31, 0x254D20u);
    ctx->pc = 0x254B80u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x254B80u, 0x254D18u, 0x254D20u)) {
        return;
    }
    ctx->pc = 0x254D20u;
label_254d20:
    // 0x254d20: 0xc089850  jal         func_226140
    ctx->pc = 0x254D20u;
    SET_GPR_U32(ctx, 31, 0x254D28u);
    ctx->pc = 0x254D24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254D20u;
    // 0x254d24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226140u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226140u, 0x254D20u, 0x254D28u)) {
        return;
    }
    ctx->pc = 0x254D28u;
label_254d28:
    // 0x254d28: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x254D28u;
    {
        const bool branch_taken_0x254d28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x254d28) {
            ctx->pc = 0x254D2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x254D28u;
            // 0x254d2c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x254D44u;
            goto label_254d44;
        }
    }
    ctx->pc = 0x254D30u;
    // 0x254d30: 0x92420003  lbu         $v0, 0x3($s2)
    ctx->pc = 0x254d30u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
    // 0x254d34: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x254d34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x254d38: 0x10400042  beqz        $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x254D38u;
    {
        const bool branch_taken_0x254d38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x254D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254D38u;
        // 0x254d3c: 0x2650002c  addiu       $s0, $s2, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254d38) {
            ctx->pc = 0x254E44u;
            goto label_254e44;
        }
    }
    ctx->pc = 0x254D40u;
    // 0x254d40: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x254d40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_254d44:
    // 0x254d44: 0xc08994a  jal         func_226528
    ctx->pc = 0x254D44u;
    SET_GPR_U32(ctx, 31, 0x254D4Cu);
    ctx->pc = 0x254D48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254D44u;
    // 0x254d48: 0x2650002c  addiu       $s0, $s2, 0x2C (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 44));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226528u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226528u, 0x254D44u, 0x254D4Cu)) {
        return;
    }
    ctx->pc = 0x254D4Cu;
label_254d4c:
    // 0x254d4c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x254d4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254d50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x254d50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254d54: 0x2645001c  addiu       $a1, $s2, 0x1C
    ctx->pc = 0x254d54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
    // 0x254d58: 0xc093aea  jal         func_24EBA8
    ctx->pc = 0x254D58u;
    SET_GPR_U32(ctx, 31, 0x254D60u);
    ctx->pc = 0x254D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254D58u;
    // 0x254d5c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EBA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EBA8u, 0x254D58u, 0x254D60u)) {
        return;
    }
    ctx->pc = 0x254D60u;
label_254d60:
    // 0x254d60: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x254d60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x254d64: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x254d64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x254d68: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x254d68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x254d6c: 0x10620030  beq         $v1, $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x254D6Cu;
    {
        const bool branch_taken_0x254d6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x254D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254D6Cu;
        // 0x254d70: 0x26220010  addiu       $v0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254d6c) {
            ctx->pc = 0x254E30u;
            goto label_254e30;
        }
    }
    ctx->pc = 0x254D74u;
    // 0x254d74: 0x26230020  addiu       $v1, $s1, 0x20
    ctx->pc = 0x254d74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x254d78: 0xc6270020  lwc1        $f7, 0x20($s1)
    ctx->pc = 0x254d78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x254d7c: 0xc6260010  lwc1        $f6, 0x10($s1)
    ctx->pc = 0x254d7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x254d80: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x254d80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x254d84: 0x460739c2  mul.s       $f7, $f7, $f7
    ctx->pc = 0x254d84u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[7]);
    // 0x254d88: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x254d88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x254d8c: 0x46063182  mul.s       $f6, $f6, $f6
    ctx->pc = 0x254d8cu;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[6]);
    // 0x254d90: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x254d90u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x254d94: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x254d94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x254d98: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x254d98u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x254d9c: 0xc4640008  lwc1        $f4, 0x8($v1)
    ctx->pc = 0x254d9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x254da0: 0x460318c2  mul.s       $f3, $f3, $f3
    ctx->pc = 0x254da0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x254da4: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x254da4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x254da8: 0x46003180  add.s       $f6, $f6, $f0
    ctx->pc = 0x254da8u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[0]);
    // 0x254dac: 0xc6250004  lwc1        $f5, 0x4($s1)
    ctx->pc = 0x254dacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x254db0: 0x460239c0  add.s       $f7, $f7, $f2
    ctx->pc = 0x254db0u;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[2]);
    // 0x254db4: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x254db4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x254db8: 0x46042102  mul.s       $f4, $f4, $f4
    ctx->pc = 0x254db8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x254dbc: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x254dbcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x254dc0: 0x46052942  mul.s       $f5, $f5, $f5
    ctx->pc = 0x254dc0u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
    // 0x254dc4: 0x46033180  add.s       $f6, $f6, $f3
    ctx->pc = 0x254dc4u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[3]);
    // 0x254dc8: 0x460439c0  add.s       $f7, $f7, $f4
    ctx->pc = 0x254dc8u;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[4]);
    // 0x254dcc: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x254dccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x254dd0: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x254dd0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
    // 0x254dd4: 0x46063836  c.le.s      $f7, $f6
    ctx->pc = 0x254dd4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[7], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x254dd8: 0x0  nop
    ctx->pc = 0x254dd8u;
    // NOP
    // 0x254ddc: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x254DDCu;
    {
        const bool branch_taken_0x254ddc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x254DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254DDCu;
        // 0x254de0: 0x46000840  add.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x254ddc) {
            ctx->pc = 0x254DF0u;
            goto label_254df0;
        }
    }
    ctx->pc = 0x254DE4u;
    // 0x254de4: 0x46013036  c.le.s      $f6, $f1
    ctx->pc = 0x254de4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[6], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x254de8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x254DE8u;
    {
        const bool branch_taken_0x254de8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x254de8) {
            ctx->pc = 0x254DF4u;
            goto label_254df4;
        }
    }
    ctx->pc = 0x254DF0u;
label_254df0:
    // 0x254df0: 0x46013836  c.le.s      $f7, $f1
    ctx->pc = 0x254df0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[7], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_254df4:
    // 0x254df4: 0x0  nop
    ctx->pc = 0x254df4u;
    // NOP
    // 0x254df8: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x254DF8u;
    {
        const bool branch_taken_0x254df8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x254df8) {
            ctx->pc = 0x254E14u;
            goto label_254e14;
        }
    }
    ctx->pc = 0x254E00u;
    // 0x254e00: 0x46063836  c.le.s      $f7, $f6
    ctx->pc = 0x254e00u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[7], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x254e04: 0x0  nop
    ctx->pc = 0x254e04u;
    // NOP
    // 0x254e08: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x254E08u;
    {
        const bool branch_taken_0x254e08 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x254E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254E08u;
        // 0x254e0c: 0x46003846  mov.s       $f1, $f7 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[7]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x254e08) {
            ctx->pc = 0x254E14u;
            goto label_254e14;
        }
    }
    ctx->pc = 0x254E10u;
    // 0x254e10: 0x46003046  mov.s       $f1, $f6
    ctx->pc = 0x254e10u;
    ctx->f[1] = FPU_MOV_S(ctx->f[6]);
label_254e14:
    // 0x254e14: 0x0  nop
    ctx->pc = 0x254e14u;
    // NOP
    // 0x254e18: 0x0  nop
    ctx->pc = 0x254e18u;
    // NOP
    // 0x254e1c: 0x46010044  c1          0x10044
    ctx->pc = 0x254e1cu;
    ctx->f[1] = FPU_SQRT_S(ctx->f[1]);
    // 0x254e20: 0xc6400028  lwc1        $f0, 0x28($s2)
    ctx->pc = 0x254e20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x254e24: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x254E24u;
    {
        const bool branch_taken_0x254e24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x254E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254E24u;
        // 0x254e28: 0x46010002  mul.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x254e24) {
            ctx->pc = 0x254E34u;
            goto label_254e34;
        }
    }
    ctx->pc = 0x254E2Cu;
    // 0x254e2c: 0x0  nop
    ctx->pc = 0x254e2cu;
    // NOP
label_254e30:
    // 0x254e30: 0xc6400028  lwc1        $f0, 0x28($s2)
    ctx->pc = 0x254e30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_254e34:
    // 0x254e34: 0xe6400038  swc1        $f0, 0x38($s2)
    ctx->pc = 0x254e34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 56), bits); }
    // 0x254e38: 0x92420003  lbu         $v0, 0x3($s2)
    ctx->pc = 0x254e38u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
    // 0x254e3c: 0x304200fe  andi        $v0, $v0, 0xFE
    ctx->pc = 0x254e3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)254);
    // 0x254e40: 0xa2420003  sb          $v0, 0x3($s2)
    ctx->pc = 0x254e40u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 3), (uint8_t)GPR_U32(ctx, 2));
label_254e44:
    // 0x254e44: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x254e44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254e48: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x254e48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x254e4c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x254e4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x254e50: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x254e50u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x254e54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x254e54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x254e58: 0x3e00008  jr          $ra
    ctx->pc = 0x254E58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x254E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254E58u;
        // 0x254e5c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x254E58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x254E60u;
}
